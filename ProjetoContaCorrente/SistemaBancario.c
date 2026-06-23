#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// ==========================================
// ESTRUTURAS DE DADOS OBRIGATÓRIAS
// ==========================================
struct Transacao {
    int tipo; /* 1=deposito 2=saque 3=transferencia */
    float valor;
    char descricao[60];
    int dia; 
    int mes; 
    int ano;
};

struct Conta {
    int numero;
    char titular[60];
    char cpf[15];
    float saldo;
    int ativa; /* 1=ativa 0=encerrada */
    struct Transacao historico[50];
    int n_trans;
};

// ==========================================
// VARIÁVEIS GLOBAIS DE CONTROLE
// ==========================================
struct Conta banco[30];
int n_contas = 0;
int prox_num = 1;
int ops_sessao = 0;
int dados_salvos = 1;

// ==========================================
// FUNÇÕES AUXILIARES / SUBROTINAS
// ==========================================

int buscar_conta(int num) {
    for (int i = 0; i < n_contas; i++) {
        if (banco[i].numero == num) {
            return i;
        }
    }
    return -1;
}

int validar_cpf(const char *cpf) {
    if (strlen(cpf) != 14) return 0;
    if (cpf[3] != '.' || cpf[7] != '.' || cpf[11] != '-') return 0;
    
    for (int i = 0; i < 14; i++) {
        if (i != 3 && i != 7 && i != 11) {
            if (!isdigit(cpf[i])) return 0;
        }
    }
    return 1;
}

int contar_saques_mes(int idx, int mes) {
    int saques = 0;
    for (int i = 0; i < banco[idx].n_trans; i++) {
        if (banco[idx].historico[i].tipo == 2 && banco[idx].historico[i].mes == mes) {
            saques++;
        }
    }
    return saques;
}

void registrar_transacao(int idx, int tipo, float valor, const char *desc, int dia, int mes, int ano) {
    int t_idx = banco[idx].n_trans;
    banco[idx].historico[t_idx].tipo = tipo;
    banco[idx].historico[t_idx].valor = valor;
    
    // snprintf garante que não haverá estouro de buffer na cópia do texto
    snprintf(banco[idx].historico[t_idx].descricao, sizeof(banco[idx].historico[t_idx].descricao), "%s", desc);
    
    banco[idx].historico[t_idx].dia = dia;
    banco[idx].historico[t_idx].mes = mes;
    banco[idx].historico[t_idx].ano = ano;
    banco[idx].n_trans++;
}

// ==========================================
// FUNCIONALIDADES DO SISTEMA (OPÇÕES DO MENU)
// ==========================================

void abrir_conta() {
    if (n_contas >= 30) {
        printf("\n[ERRO] Limite maximo de contas do banco atingido (30).\n");
        return;
    }

    struct Conta nova;
    float dep_inicial;

    printf("\n--- ABRIR CONTA ---\n");
    printf("Nome do titular: ");
    // %59[^\n] impede estouro de buffer e aceita espaços
    scanf(" %59[^\n]", nova.titular); 

    do {
        printf("CPF (formato 000.000.000-00): ");
        scanf("%14s", nova.cpf); // %14s limita a leitura de caracteres de forma segura
        if (!validar_cpf(nova.cpf)) {
            printf("[ERRO] Formato de CPF invalido. Tente novamente.\n");
        }
    } while (!validar_cpf(nova.cpf));

    do {
        printf("Valor do deposito inicial (Minimo R$ 50): ");
        scanf("%f", &dep_inicial);
        if (dep_inicial < 50.0) {
            printf("[ERRO] O deposito inicial deve ser de pelo menos R$ 50.00.\n");
        }
    } while (dep_inicial < 50.0);

    int dia, mes, ano;
    printf("Data de abertura (dd mm aaaa): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    nova.numero = prox_num++;
    nova.saldo = dep_inicial;
    nova.ativa = 1;
    nova.n_trans = 0;

    banco[n_contas] = nova;
    registrar_transacao(n_contas, 1, dep_inicial, "Deposito Inicial", dia, mes, ano);

    printf("\n[SUCESSO] Conta criada com sucesso! Numero da Conta: %d\n", nova.numero);
    n_contas++;
    ops_sessao++;
    dados_salvos = 0;
}

void encerra_conta() {
    int num;
    printf("\n--- ENCERRAR CONTA ---\n");
    printf("Digite o numero da conta: ");
    scanf("%d", &num);

    int idx = buscar_conta(num);
    if (idx == -1 || banco[idx].ativa == 0) {
        printf("[ERRO] Conta nao encontrada ou ja encerrada.\n");
        return;
    }

    if (banco[idx].saldo > 0.0) {
        char conf;
        printf("A conta possui um saldo de R$ %.2f. Deseja zerar e encerrar mesmo assim? (S/N): ", banco[idx].saldo);
        scanf(" %c", &conf);
        if (conf != 'S' && conf != 's') {
            printf("Operacao cancelada.\n");
            return;
        }
        banco[idx].saldo = 0.0;
    }

    banco[idx].ativa = 0;
    printf("[SUCESSO] Conta numero %d encerrada com sucesso.\n", num);
    ops_sessao++;
    dados_salvos = 0;
}

void depositar() {
    int num;
    printf("\n--- DEPOSITAR ---\n");
    printf("Numero da conta: ");
    scanf("%d", &num);

    int idx = buscar_conta(num);
    if (idx == -1 || banco[idx].ativa == 0) {
        printf("[ERRO] Conta nao encontrada ou inativa.\n");
        return;
    }

    // REFORÇO: Bloqueia a operação antes de alterar dados se o histórico estiver cheio
    if (banco[idx].n_trans >= 50) {
        printf("[ERRO] Limite de transacoes (50) atingido para esta conta. Operacao abortada.\n");
        return;
    }

    float valor;
    do {
        printf("Valor do deposito: ");
        scanf("%f", &valor);
        if (valor <= 0) printf("[ERRO] O valor deve ser maior que zero.\n");
    } while (valor <= 0);

    int dia, mes, ano;
    printf("Data da transacao (dd mm aaaa): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    banco[idx].saldo += valor;
    registrar_transacao(idx, 1, valor, "Deposito", dia, mes, ano);

    printf("[SUCESSO] Deposito realizado! Novo saldo: R$ %.2f\n", banco[idx].saldo);
    ops_sessao++;
    dados_salvos = 0;
}

void sacar() {
    int num;
    printf("\n--- SACAR ---\n");
    printf("Numero da conta: ");
    scanf("%d", &num);

    int idx = buscar_conta(num);
    if (idx == -1 || banco[idx].ativa == 0) {
        printf("[ERRO] Conta nao encontrada ou inativa.\n");
        return;
    }

    int dia, mes, ano;
    printf("Data da transacao (dd mm aaaa): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    int saques_no_mes = contar_saques_mes(idx, mes);
    float taxa = (saques_no_mes >= 3) ? 1.50 : 0.0;

    // REFORÇO: Avalia se o histórico suportará a transação E a taxa extra (se houver)
    int trans_necessarias = (taxa > 0.0) ? 2 : 1;
    if (banco[idx].n_trans + trans_necessarias > 50) {
        printf("[ERRO] Historico de transacoes insuficiente para processar o saque e sua taxa. Operacao abortada.\n");
        return;
    }

    float valor;
    do {
        printf("Valor do saque: ");
        scanf("%f", &valor);
        if (valor <= 0) printf("[ERRO] O valor deve ser maior que zero.\n");
    } while (valor <= 0);

    if (banco[idx].saldo < (valor + taxa)) {
        printf("[ERRO] Saldo insuficiente. Saldo disponivel: R$ %.2f (Taxa atual: R$ %.2f)\n", banco[idx].saldo, taxa);
        return;
    }

    banco[idx].saldo -= (valor + taxa);
    registrar_transacao(idx, 2, valor, "Saque", dia, mes, ano);
    if (taxa > 0.0) {
        registrar_transacao(idx, 2, taxa, "Taxa de Saque excedente", dia, mes, ano);
    }

    printf("[SUCESSO] Saque efetuado! Taxa cobrada: R$ %.2f. Novo saldo: R$ %.2f\n", taxa, banco[idx].saldo);
    ops_sessao++;
    dados_salvos = 0;
}

void transferir() {
    int num_orig, num_dest;
    printf("\n--- TRANSFERIR ---\n");
    printf("Numero da conta de origem: ");
    scanf("%d", &num_orig);
    printf("Numero da conta de destino: ");
    scanf("%d", &num_dest);

    int idx_orig = buscar_conta(num_orig);
    int idx_dest = buscar_conta(num_dest);

    if (idx_orig == -1 || banco[idx_orig].ativa == 0) {
        printf("[ERRO] Conta de origem nao encontrada ou inativa.\n");
        return;
    }
    if (idx_dest == -1 || banco[idx_dest].ativa == 0) {
        printf("[ERRO] Conta de destino nao encontrada ou inativa.\n");
        return;
    }
    if (idx_orig == idx_dest) {
        printf("[ERRO] As contas de origem e destino nao podem ser iguais.\n");
        return;
    }

    // REFORÇO CRÍTICO: Valida se AMBAS as contas possuem espaço no histórico de lançamentos
    if (banco[idx_orig].n_trans >= 50) {
        printf("[ERRO] A conta de origem atingiu o limite de operacoes (50). Transferencia cancelada.\n");
        return;
    }
    if (banco[idx_dest].n_trans >= 50) {
        printf("[ERRO] A conta de destino atingiu o limite de operacoes (50). Transferencia cancelada.\n");
        return;
    }

    float valor;
    do {
        printf("Valor da transferencia: ");
        scanf("%f", &valor);
        if (valor <= 0) printf("[ERRO] O valor deve ser maior que zero.\n");
    } while (valor <= 0);

    if (banco[idx_orig].saldo < valor) {
        printf("[ERRO] Saldo insuficiente na conta de origem (Saldo: R$ %.2f).\n", banco[idx_orig].saldo);
        return;
    }

    int dia, mes, ano;
    printf("Data da transacao (dd mm aaaa): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    banco[idx_orig].saldo -= valor;
    banco[idx_dest].saldo += valor;

    char desc_orig[60], desc_dest[60];
    snprintf(desc_orig, sizeof(desc_orig), "Transf. Enviada para C/C %d", num_dest);
    snprintf(desc_dest, sizeof(desc_dest), "Transf. Recebida da C/C %d", num_orig);

    registrar_transacao(idx_orig, 3, valor, desc_orig, dia, mes, ano);
    registrar_transacao(idx_dest, 3, valor, desc_dest, dia, mes, ano);

    printf("[SUCESSO] Transferencia de R$ %.2f realizada!\n", valor);
    ops_sessao++;
    dados_salvos = 0;
}

void exibir_extrato() {
    int num;
    printf("\n--- EXTRATO ---\n");
    printf("Numero da conta: ");
    scanf("%d", &num);

    int idx = buscar_conta(num);
    if (idx == -1) {
        printf("[ERRO] Conta nao encontrada.\n");
        return;
    }

    int filtro_mes;
    printf("Deseja filtrar por um mes especifico? (1-12 ou 0 para ver todo o historico): ");
    scanf("%d", &filtro_mes);

    printf("\n======================================================\n");
    printf("EXTRATO - CONTA: %04d | TITULAR: %s\n", banco[idx].numero, banco[idx].titular);
    printf("======================================================\n");
    printf("%-12s %-30s %10s\n", "DATA", "DESCRICAO", "VALOR (R$)");
    printf("------------------------------------------------------\n");

    for (int i = 0; i < banco[idx].n_trans; i++) {
        struct Transacao t = banco[idx].historico[i];
        if (filtro_mes == 0 || t.mes == filtro_mes) {
            char sinal = (t.tipo == 1 || (t.tipo == 3 && strstr(t.descricao, "Recebida") != NULL)) ? ' ' : '-';
            printf("%02d/%02d/%04d   %-30s   %c%9.2f\n", t.dia, t.mes, t.ano, t.descricao, sinal, t.valor);
        }
    }
    printf("------------------------------------------------------\n");
    printf("%-43s R$ %9.2f\n", "SALDO ATUAL:", banco[idx].saldo);
    printf("======================================================\n");
}

void relatorio_gerencial() {
    int ativas = 0, encerradas = 0;
    float soma_saldos = 0.0;
    int idx_maior = -1, idx_menor = -1;
    
    int mes_atual;
    printf("\n--- RELATORIO GERENCIAL ---\n");
    printf("Informe o numero do mes atual para analise de metricas: ");
    scanf("%d", &mes_atual);

    float volume_mes = 0.0;
    int faixa1 = 0, faixa2 = 0, faixa3 = 0, faixa4 = 0;

    for (int i = 0; i < n_contas; i++) {
        if (banco[i].ativa == 1) {
            ativas++;
            soma_saldos += banco[i].saldo;

            if (idx_maior == -1 || banco[i].saldo > banco[idx_maior].saldo) idx_maior = i;
            if (idx_menor == -1 || banco[i].saldo < banco[idx_menor].saldo) idx_menor = i;

            // REFORÇO: Correção da lógica e redundância de limites do histograma
            if (banco[i].saldo <= 500.0) faixa1++;
            else if (banco[i].saldo <= 2000.0) faixa2++;
            else if (banco[i].saldo <= 5000.0) faixa3++;
            else faixa4++;
        } else {
            encerradas++;
        }

        for (int j = 0; j < banco[i].n_trans; j++) {
            if (banco[i].historico[j].mes == mes_atual) {
                volume_mes += banco[i].historico[j].valor;
            }
        }
    }

    printf("\n======================================================\n");
    printf("             RELATORIO DE GESTAO DO BANCO            \n");
    printf("======================================================\n");
    printf("Total de contas ativas     : %d\n", ativas);
    printf("Total de contas encerradas : %d\n", encerradas);
    printf("Saldo medio das contas     : R$ %.2f\n", ativas > 0 ? (soma_saldos / ativas) : 0.0);
    
    if (idx_maior != -1) {
        printf("Conta de MAIOR saldo       : N° %d (%s) - R$ %.2f\n", banco[idx_maior].numero, banco[idx_maior].titular, banco[idx_maior].saldo);
        printf("Conta de MENOR saldo       : N° %d (%s) - R$ %.2f\n", banco[idx_menor].numero, banco[idx_menor].titular, banco[idx_menor].saldo);
    }
    printf("Volume de movimentacoes (Mes %d): R$ %.2f\n", mes_atual, volume_mes);
    
    printf("\n--- HISTOGRAMA DE SALDOS (CONTAS ATIVAS) ---\n");
    printf("0 - 500      | "); for (int i = 0; i < faixa1; i++) printf("*"); printf("\n");
    printf("501 - 2000   | "); for (int i = 0; i < faixa2; i++) printf("*"); printf("\n");
    printf("2001 - 5000  | "); for (int i = 0; i < faixa3; i++) printf("*"); printf("\n");
    printf("> 5000       | "); for (int i = 0; i < faixa4; i++) printf("*"); printf("\n");
    printf("======================================================\n");
}

// ==========================================
// OPERAÇÕES DE ARQUIVO (PERSISTÊNCIA)
// ==========================================

void salvar_dados() {
    FILE *f = fopen("contas.bin", "wb");
    if (f == NULL) {
        printf("[ERRO] Falha ao abrir o arquivo para salvar os dados.\n");
        return;
    }

    int gravados = fwrite(banco, sizeof(struct Conta), n_contas, f);
    fclose(f);

    if (gravados == n_contas) {
        printf("[SUCESSO] Todos os dados foram salvos com sucesso em 'contas.bin'.\n");
        dados_salvos = 1;
    } else {
        printf("[ERRO] Erro parcial na gravacao dos dados.\n");
    }
}

void carregar_dados() {
    FILE *f = fopen("contas.bin", "rb");
    if (f == NULL) {
        n_contas = 0;
        prox_num = 1;
        return;
    }

    n_contas = fread(banco, sizeof(struct Conta), 30, f);
    fclose(f);

    int max_num = 0;
    for (int i = 0; i < n_contas; i++) {
        if (banco[i].numero > max_num) {
            max_num = banco[i].numero;
        }
    }
    prox_num = max_num + 1;
    printf("[SISTEMA] Banco carregado com sucesso. Registros recuperados: %d\n", n_contas);
}

// ==========================================
// FLUXO PRINCIPAL E INTERFACE
// ==========================================
int main() {
    carregar_dados();
    int opcao;

    do {
        printf("\n======= SISTEMA BANCO DIGITAL =======\n");
        printf("1. Abrir Conta\n");
        printf("2. Encerrar Conta\n");
        printf("3. Depositar\n");
        printf("4. Sacar\n");
        printf("5. Transferir\n");
        printf("6. Extrato\n");
        printf("7. Relatorio Gerencial\n");
        printf("8. Salvar Configuracoes / Dados\n");
        printf("0. Sair do Sistema\n");
        printf("=====================================\n");
        printf("Selecione uma opcao: ");
        
        // REFORÇO: Evita loop infinito se o usuário digitar uma letra no menu
        if (scanf("%d", &opcao) != 1) {
            printf("[ERRO] Entrada invalida. Digite apenas numeros.\n");
            while (getchar() != '\n'); // Limpa o buffer de entrada do teclado
            opcao = -1; 
            continue;
        }

        switch (opcao) {
            case 1: abrir_conta(); break;
            case 2: encerra_conta(); break;
            case 3: depositar(); break;
            case 4: sacar(); break;
            case 5: transferir(); break;
            case 6: exibir_extrato(); break;
            case 7: relatorio_gerencial(); break;
            case 8: salvar_dados(); break;
            case 0:
                if (!dados_salvos) {
                    char conf;
                    printf("\n[ATENCAO] Existem alteracoes nao salvas! Deseja salvar antes de sair? (S/N): ");
                    scanf(" %c", &conf);
                    if (conf == 'S' || conf == 's') {
                        salvar_dados();
                    }
                }
                printf("\nTotal de operacoes realizadas nesta sessao: %d\n", ops_sessao);
                printf("Encerrando o sistema. Ate logo!\n");
                break;
            case -1: break; // Tratado pelo validador de entrada
            default:
                printf("[ERRO] Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
