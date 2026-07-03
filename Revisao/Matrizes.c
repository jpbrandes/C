#include <stdio.h>

// Definindo o tamanho da matriz quadrada globalmente
#define TAM 3

// --- FUNÇÃO PARA LER UMA MATRIZ ---
// MUDANÇA: Passamos 'nome' como string (%s) para permitir nomes melhores se necessário
void lerMatriz(int M[TAM][TAM], const char *nome) {
    printf("\nDigite os elementos da matriz %s (%dx%d):\n", nome, TAM, TAM);
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%s[%d][%d]: ", nome, i, j);
            scanf("%d", &M[i][j]);
        }
    }
}

// --- FUNÇÃO PARA IMPRIMIR UMA MATRIZ ---
// MUDANÇA: 'const' garante que a função não vai modificar a matriz original
void imprimirMatriz(const int M[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }
}

// --- 1. FUNÇÃO PARA SOMAR DUAS MATRIZES ---
// MUDANÇA: A matriz C agora é passada por parâmetro, evitando gastar memória local
void somarMatrizes(const int A[TAM][TAM], const int B[TAM][TAM], int C[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

// --- 2. FUNÇÃO PARA TRANSPOR A MATRIZ A ---
void transporMatriz(const int A[TAM][TAM]) {
    printf("\n2. Matriz A Transposta:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            // A inversão de índices j e i continua perfeita aqui
            printf("%d\t", A[j][i]);
        }
        printf("\n");
    }
}

// --- 3. FUNÇÃO PARA DIAGONAL PRINCIPAL E SOMA ---
void diagonalPrincipalB(const int B[TAM][TAM]) {
    int somaDiagonal = 0;
    
    printf("\n3. Elementos da Diagonal Principal de B: ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", B[i][i]);
        somaDiagonal += B[i][i];
    }
    printf("\nSoma da Diagonal Principal de B: %d\n", somaDiagonal);
}

// --- FUNÇÃO PRINCIPAL ---
int main() {
    // Declaração limpa usando a constante TAM
    int A[TAM][TAM];
    int B[TAM][TAM];
    int C[TAM][TAM]; // Matriz para armazenar o resultado da soma

    // Entrada de dados
    lerMatriz(A, "A");
    lerMatriz(B, "B");

    printf("\n================ RESULTADOS ================");
    
    // 1. Processa a soma e depois imprime o resultado isoladamente
    somarMatrizes(A, B, C);
    printf("\n1. Matriz Soma (C = A + B):\n");
    imprimirMatriz(C);
    
    // 2. Transposição
    transporMatriz(A);
    
    // 3. Diagonal e acumulador
    diagonalPrincipalB(B);
    
    printf("============================================\n");

    return 0;
}
