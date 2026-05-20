#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int vetor[12], x, y, soma;
	
	printf("Digite 12 valores do vetor\n");
	for(int i = 0; i < 12; i++) {
		printf("Posição %d: ", i);
		scanf("%d", &vetor[i]); // Eu posso ler um valor e ele ser inserido no vetor
		// Tudo o que foi feito aqui, é inserir valores aleatórios que serão usados no vetor.
	}
	
	//  A questão aqui é o valor x e y corresponderão aos índices do vestores e dentro do índice vai estar o número escolhido acima.
	printf("\nDigite o valor da posição X (0 a 11): ");
	scanf("%d", &x);
	printf("\nDigite o valor da posição Y (0 a 11): ");
	scanf("%d", &y);  
	
	soma = vetor[x] + vetor[y];
	
	printf("A soma dos valores contidos nos índices %d e %d é: %d", x, y, soma); // Exibe os valores somados atráves dos índices
}