#include <stdio.h>

#define TAM 15

// Função auxiliar para imprimir o vetor na tela
void imprimirVetor(const int vet[TAM]) {
    for (int i = 0; i < TAM; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
}

// 1. IMPLEMENTAÇÃO DO BUBBLE SORT
void bubbleSort(int vet[TAM]) {
    int aux;
    // O laço externo controla quantas passagens faremos no vetor
    for (int i = 0; i < TAM - 1; i++) {
        // O laço interno compara os elementos vizinhos
        for (int j = 0; j < TAM - 1 - i; j++) {
            // Se o elemento atual for maior que o próximo, troca!
            if (vet[j] > vet[j + 1]) {
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
            }
        }
    }
}

// 2. IMPLEMENTAÇÃO DA BUSCA LINEAR
// Retorna o índice se encontrar, ou -1 se não encontrar
int buscaLinear(const int vet[TAM], int valorProcurado) {
    for (int i = 0; i < TAM; i++) {
        if (vet[i] == valorProcurado) {
            return i; // Retorna a posição (índice) onde foi achado
        }
    }
    return -1; // Se percorrer tudo e não achar, retorna -1
}

int main() {
    int vetor[TAM];
    int numeroBusca, resultadoBusca;

    // Leitura dos 15 elementos inteiros
    printf("Digite %d numeros inteiros para preencher o vetor:\n", TAM);
    for (int i = 0; i < TAM; i++) {
        printf("Posicao [%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    // 3. Exibe o vetor ANTES da ordenação
    printf("\n--- VETOR ORIGINAL ---\n");
    imprimirVetor(vetor);

    // Executa a ordenação
    bubbleSort(vetor);

    // 3. Exibe o vetor DEPOIS da ordenação
    printf("\n--- VETOR ORDENADO (CRESCENTE) ---\n");
    imprimirVetor(vetor);

    // Entrada para a busca linear
    printf("\nDigite um valor para buscar no vetor: ");
    scanf("%d", &numeroBusca);

    // Executa a busca
    resultadoBusca = buscaLinear(vetor, numeroBusca);

    // Exibe o resultado da busca
    printf("\n--- RESULTADO DA BUSCA ---\n");
    if (resultadoBusca != -1) {
        printf("O valor %d foi ENCONTRADO na posicao (indice): %d\n", numeroBusca, resultadoBusca);
    } else {
        printf("Valor nao encontrado\n");
    }
    printf("--------------------------\n");

    return 0;
}
