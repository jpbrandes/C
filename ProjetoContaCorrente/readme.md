# Documentação Técnica: Sistema de Banco Digital em C

Este repositório contém a implementação modular e robusta de um **Sistema de Banco Digital** desenvolvido na linguagem C. O projeto simula com precisão as regras de negócio de uma instituição financeira real, contemplando cadastro, segurança de saldo, controle tarifário dinâmico, histórico de transações e relatórios estatísticos consolidados com persistência de dados em disco.

---

## Arquitetura de Dados (`structs`)

O sistema organiza o gerenciamento das informações utilizando duas estruturas de dados aninhadas, emulando uma relação de banco de dados relacional diretamente na memória volátil:

### 1. `struct Transacao`
Modela e armazena os metadados associados a qualquer movimentação de fundos.
* `int tipo`: Identificador numérico da operação (`1` = Depósito, `2` = Saque, `3` = Transferência).
* `float valor`: Quantia monetária envolvida no lançamento.
* `char descricao[60]`: String descritiva destinada a registrar a origem ou destino do fluxo de capital.
* `int dia, mes, ano`: Campos numéricos inteiros para registro cronológico da movimentação.

### 2. `struct Conta`
Representa o cadastro mestre e o estado consolidador de cada cliente bancário.
* `int numero`: Identificador sequencial único e imutável da conta corrente.
* `char titular[60]`: Nome completo do cliente proprietário da conta.
* `char cpf[15]`: Registro de documento nacional formatado estritamente como `000.000.000-00`.
* `float saldo`: Saldo financeiro líquido atualmente disponível para movimentações.
* `int ativa`: Flag lógica de controle de estado (`1` para conta ativa e funcional; `0` para conta encerrada).
* `struct Transacao historico[50]`: Vetor estático dimensionado para suportar até **50 registros de transações** por cliente.
* `int n_trans`: Contador interno que indica o índice da próxima transação disponível e o volume histórico acumulado.

---

## Variáveis Globais de Controle

O ciclo de vida da aplicação e o compartilhamento de estados entre os módulos são gerenciados por cinco variáveis globais de escopo estratégico:

| Variável | Tipo | Função Primária |
| :--- | :--- | :--- |
| `banco[30]` | `struct Conta` | Vetor de armazenamento principal que limita a capacidade do banco a **30 contas simultâneas**. |
| `n_contas` | `int` | Contador dinâmico que rastreia o número atual de contas cadastradas na memória. |
| `prox_num` | `int` | Ponteiro gerador autoincrementável encarregado de gerar os números das novas contas de forma sequencial. |
| `ops_sessao` | `int` | Registrador de auditoria que quantifica o número de operações concluídas com sucesso na sessão ativa. |
| `dados_salvos` | `int` | Flag de integridade e segurança (`1` = Dados Salvos / `0` = Dados Modificados) que previne a perda acidental de dados ao sair. |

---

## Detalhamento das Sub-rotinas (Funções Auxiliares)

Estas funções executam rotinas repetitivas de busca e validação, servindo como a fundação de segurança para as opções expostas no menu:

* **`int buscar_conta(int num)`**: Executa uma busca linear varrendo o vetor global `banco`. Retorna o índice correspondente (`0` a `29`) caso localize o número da conta ativa/encerrada, ou `-1` caso a conta inexista.
* **`int validar_cpf(const char *cpf)`**: Avalia rigorosamente a estrutura sintática do CPF informado. A função checa se a string possui comprimento fixo de exatamente 14 caracteres, valida a presença dos separadores (pontos nos índices `3` e `7`, hífen no índice `11`) e assegura que os demais caracteres sejam numéricos através da função `isdigit`.
* **`int contar_saques_mes(int idx, int mes)`**: Vasculha de forma isolada o vetor `historico` da conta especificada pelo índice `idx`. O objetivo é contabilizar quantos saques legítimos (`tipo == 2`) o cliente realizou no mês informado, fornecendo o dado base para o motor de tarifas.
* **`void registrar_transacao(...)`**: Centraliza o processo de gravação de extratos. Ela acessa a posição indicada por `n_trans`, realiza a cópia da descrição de forma segura contra transbordo de memória através de `snprintf` e incrementa o marcador de transações da respectiva conta.

---

## Funcionamento dos Módulos do Menu

### 1. Abertura de Conta (`abrir_conta`)
Verifica se há espaço disponível no vetor global de contas. Caso aprovado, solicita o nome do titular e o CPF, submetendo o documento à validação estrutural em um laço repetitivo do tipo `do-while`. Exige um depósito inicial de, no mínimo, R$ 50,00. O número da conta é atribuído usando `prox_num++`. Por fim, o aporte inicial é automaticamente registrado como o primeiro lançamento do extrato.

### 2. Encerramento de Conta (`encerra_conta`)
Localiza a conta desejada. Se ela possuir saldo remanescente maior que zero, o programa emite um alerta e exige uma confirmação explícita (`S/N`) do operador para zerar os fundos em definitivo. O encerramento é lógico: a flag `ativa` é setada para `0`. Contas inativas passam a ser ignoradas por todas as operações de depósito, saque e transferência.

### 3. Depósito (`depositar`)
Acessa a conta informada (exigindo que esteja ativa) e incrementa o saldo atual com base no valor digitado (que deve ser obrigatoriamente maior que zero). **Regra de Robustez:** A função avalia preventivamente se `n_trans >= 50`; caso o extrato esteja lotado, o depósito é bloqueado para impedir que o saldo seja alterado sem o devido registro histórico.

### 4. Saque (`sacar`)
Gerencia a retirada de dinheiro aplicando a política tarifária vigente. Utiliza a função `contar_saques_mes` para mapear o histórico do mês informado. Caso o cliente já tenha realizado 3 ou mais saques naquele mês, uma **taxa de serviço de R$ 1,50** é adicionada ao custo da operação. O sistema valida se a conta possui saldo suficiente para cobrir o valor solicitado somado à taxa e se há espaço no histórico para documentar os débitos.

### 5. Transferência (`transferir`)
Realiza a movimentação eletrônica de fundos entre duas contas correntes distintas. O algoritmo realiza uma tripla checagem: garante a existência e atividade de ambas as contas, valida se a conta de origem possui saldo suficiente e certifica que tanto a conta de origem quanto a de destino possuem espaço livre em seus respectivos vetores de transações. As strings descritivas dos extratos são geradas dinamicamente usando `snprintf` detalhando os números de conta envolvidos.

### 6. Emissão de Extrato (`exibir_extrato`)
Gera a visualização tabular dos lançamentos do cliente. O operador pode escolher filtrar por um mês específico (`1` a `12`) ou exibir todo o histórico digitando `0`. A rotina possui lógica interna para interpretar a natureza do lançamento, inserindo automaticamente um sinal negativo (`-`) na frente de saques, taxas e transferências enviadas, permitindo fácil leitura contábil.

### 7. Relatório Gerencial (`relatorio_gerencial`)
Compila métricas de desempenho de toda a instituição financeira para fins de tomada de decisão. Consolida:
* Total de contas ativas versus encerradas.
* Saldo médio global de todos os clientes ativos.
* Identificação explícita dos clientes que detêm o maior e o menor saldo em conta.
* Volume total movimentado em espécie no mês informado.
* **Histograma de Saldos:** Um gráfico de barras em modo texto gerado através do caractere asterisco (`*`), demonstrando visualmente a concentração de clientes em quatro faixas de saldo distintas (`0-500`, `501-2000`, `2001-5000` e `>5000`).

---

## Camada de Persistência em Disco

A aplicação implementa persistência de dados estrita através de arquivos binários nativos, eliminando falhas de codificação ou quebras acidentais de linha de texto:

* **Escrita (`salvar_dados`)**: Abre o arquivo `contas.bin` sob o modo de escrita binária (`"wb"`). Por meio do comando `fwrite`, o bloco inteiro da memória que armazena as contas (equivalente ao tamanho da estrutura multiplicado por `n_contas`) é descarregado diretamente para o disco rígido em uma única operação atômica.
* **Leitura (`carregar_dados`)**: Disparada automaticamente no início da rotina `main`. Tenta abrir o arquivo `contas.bin` no modo de leitura binária (`"rb"`). Caso o arquivo exista, recompõe o vetor global instantaneamente via `fread`. Em seguida, executa uma varredura para identificar qual é o maior número de conta existente e calibra a variável `prox_num = max_num + 1`, eliminando o risco de colisão ou duplicação de IDs em reexecuções.

---

## Mecanismos de Proteção e Robustez Aplicados

O código-fonte foi intencionalmente blindado contra as vulnerabilidades mais comuns em desenvolvimento de sistemas de baixo nível:

1. **Prevenção de Estouro de Buffer (*Buffer Overflow Protection*)**: Todas as entradas textuais efetuadas via teclado possuem especificadores de limite físico fixo diretamente nas diretivas do `scanf` (por exemplo, `scanf("%14s", ...)` impede que uma entrada de CPF longa invada as variáveis adjacentes; `scanf(" %59[^
]", ...)` limita nomes longos de titulares e absorve espaços de forma segura).
2. **Cópia Controlada de Textos**: Substituição de funções arcaicas como `strcpy` ou `sprintf` por `snprintf`, garantindo limitação do tamanho do buffer receptor (`sizeof`) durante concatenações.
3. **Tratamento de Falhas no Teclado (Menu)**: A função `main` analisa o valor de retorno da função `scanf`. Se o usuário digitar caracteres textuais (letras, pontuações ou símbolos) onde se espera a opção numérica do menu, o sistema captura a anomalia, limpa de forma compulsória o buffer do teclado com o laço `while (getchar() != '
')`, atribui um código de erro neutro (`-1`) e impede que o software entre em loop infinito ou congele a interface CLI do usuário.
