### Analisadores sintáticos

<p> Análise sintática é um conceito presente na área de compiladores, cada linguagem de programação possui a sua determinada sintaxe, e são os analisadores sintáticos que verificam e descrevem a sintaxe de uma linguagem de programação. Nesse contexto, existem a análise sintática descendente e ascendente.


<p> Em foco, o analisador sintático dependente, tenta construir, uma sentença W a partir do símbolo S, aplicando as regras de produção. Essa produção, acontece para baixo. O analisador sintático ascendente, apresenta a construção de sentenças W para cima, visando reduções, substituir o lado direito da regra pelo esquerdo.


<p>Agora, em específico, a análise sintática descendente recursiuva é um conjunto geral de procedimentos, um para cada não-terminal da gramática. A execução do método começa com o procedimento do símbolo não terminal que representam o símbolo inicial da gramática. Nessa busca, a execução avançará a medida que os caracteres são reconhecidos e para quando não forem reconhecidos.
Isso tudo significa, que ao aplicar a recursividade a implementação do compilador, será aproveitado a própria estrutura da gramática e não irá impor restrições a ela (com excessão da recursividade a esquerda).


### Fontes utilizadas

https://www.facom.ufms.br/~ricardo/Courses/CompilerI/Lectures/Lec05.pdf 

https://www.facom.ufms.br/~ricardo/Courses/CompilerI-2009/Materials/p3-sintatico-2p.pdf