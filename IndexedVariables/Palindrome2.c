Claude finished the response
c

#include <stdio.h>
int main() {
    int N, i, j;
    printf("Enter the size of the array: ");
    scanf("%d", &N);
    int v[N], used[N];
    // Initialize control array
    for(i = 0; i < N; i++) {
        used[i] = 0;
    }
    // Reading the array
    printf("Enter the elements of the array:\n");
    for(i = 0; i < N; i++) {
        scanf("%d", &v[i]);
    }
    // Frequency without repetition
    printf("\nNumber - Frequency\n");
    for(i = 0; i < N; i++) {
        if(used[i] == 1)
            continue;
        int freq = 1;
        for(j = i + 1; j < N; j++) {
            if(v[i] == v[j]) {
                freq++;
                used[j] = 1; // mark as already counted
            }
        }
        printf("%d - %d\n", v[i], freq);
    }
    return 0;
}

#include <stdio.h>
int main() {
    float A[3][5], B[3][5], S[3][5];
    int i, j;
    // Leitura da matriz A
    printf("Digite os elementos da matriz A (3x5):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++) {
            scanf("%f", &A[i][j]);
        }
    }
    // Leitura da matriz B
    printf("\nDigite os elementos da matriz B (3x5):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++) {
            scanf("%f", &B[i][j]);
        }
    }
    // Soma das matrizes
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++) {
            S[i][j] = A[i][j] + B[i][j];
        }
    }
    // Impressão da matriz soma
    printf("\nMatriz Soma (A + B):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++) {
            printf("%.2f ", S[i][j]);
        }
        printf("\n");
    }
    return 0;
}
c

#include <stdio.h>
int main() {
    float A[3][5], B[3][5], S[3][5];
    int i, j;
    // Reading matrix A
    printf("Enter the elements of matrix A (3x5):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++) {
            scanf("%f", &A[i][j]);
        }
    }
    // Reading matrix B
    printf("\nEnter the elements of matrix B (3x5):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++) {
            scanf("%f", &B[i][j]);
        }
    }
    // Sum of the matrices
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++) {
            S[i][j] = A[i][j] + B[i][j];
        }
    }
    // Printing the sum matrix
    printf("\nSum Matrix (A + B):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++) {
            printf("%.2f ", S[i][j]);
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main() {
    int MAT[4][5];
    int SOMALINHA[4];
    int i, j;
    int TOTAL = 0;
    // Leitura da matriz 4x5
    printf("Digite os elementos da matriz 4x5:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 5; j++) {
            scanf("%d", &MAT[i][j]);
        }
    }
    // Soma de cada linha
    for(i = 0; i < 4; i++) {
        SOMALINHA[i] = 0;
        for(j = 0; j < 5; j++) {
            SOMALINHA[i] += MAT[i][j];
        }
    }
    // Soma do vetor SOMALINHA
    for(i = 0; i < 4; i++) {
        TOTAL += SOMALINHA[i];
    }
    // Impressão do resultado final
    printf("\nTOTAL = %d\n", TOTAL);
    return 0;
}
c

#include <stdio.h>
int main() {
    int MAT[4][5];
    int ROWSUM[4];
    int i, j;
    int TOTAL = 0;
    // Reading the 4x5 matrix
    printf("Enter the elements of the 4x5 matrix:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 5; j++) {
            scanf("%d", &MAT[i][j]);
        }
    }
    // Sum of each row
    for(i = 0; i < 4; i++) {
        ROWSUM[i] = 0;
        for(j = 0; j < 5; j++) {
            ROWSUM[i] += MAT[i][j];
        }
    }
    // Sum of the ROWSUM array
    for(i = 0; i < 4; i++) {
        TOTAL += ROWSUM[i];
    }
    // Printing the final result
    printf("\nTOTAL = %d\n", TOTAL);
    return 0;
}

#include <stdio.h>
int main() {
    int N, i, j;
    printf("Digite a dimensao N da matriz quadrada: ");
    scanf("%d", &N);
    int MAT[N][N];
    // Leitura da matriz
    printf("Digite os elementos da matriz %dx%d:\n", N, N);
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            scanf("%d", &MAT[i][j]);
        }
    }
    printf("\nElementos acima da diagonal principal:\n");
    for(i = 0; i < N; i++) {
        for(j = i + 1; j < N; j++) {
            printf("%d ", MAT[i][j]);
        }
    }
    printf("\n\nElementos abaixo da diagonal principal:\n");
    for(i = 1; i < N; i++) {
        for(j = 0; j < i; j++) {
            printf("%d ", MAT[i][j]);
        }
    }
    printf("\n");
    return 0;
}
c

#include <stdio.h>
int main() {
    int N, i, j;
    printf("Enter the dimension N of the square matrix: ");
    scanf("%d", &N);
    int MAT[N][N];
    // Reading the matrix
    printf("Enter the elements of the %dx%d matrix:\n", N, N);
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            scanf("%d", &MAT[i][j]);
        }
    }
    printf("\nElements above the main diagonal:\n");
    for(i = 0; i < N; i++) {
        for(j = i + 1; j < N; j++) {
            printf("%d ", MAT[i][j]);
        }
    }
    printf("\n\nElements below the main diagonal:\n");
    for(i = 1; i < N; i++) {
        for(j = 0; j < i; j++) {
            printf("%d ", MAT[i][j]);
        }
    }
    printf("\n");
    return 0;
}

#include <stdio.h>
#include <string.h>
int main() {
    char palavra[21];
    int i, j, ehPalindromo = 1;
    printf("Digite uma palavra ou frase (ate 20 letras, sem espacos): ");
    scanf("%20s", palavra);
    j = strlen(palavra) - 1;
    for(i = 0; i < j; i++, j--) {
        if(palavra[i] != palavra[j]) {
            ehPalindromo = 0;
            break;
        }
    }
    if(ehPalindromo) {
        printf("\nEh palindromo.\n");
    } else {
        printf("\nNao eh palindromo.\n");
    }
    return 0;
}
c

#include <stdio.h>
#include <string.h>
int main() {
    char word[21];
    int i, j, isPalindrome = 1;
    printf("Enter a word or phrase (up to 20 letters, no spaces): ");
    scanf("%20s", word);
    j = strlen(word) - 1;
    for(i = 0; i < j; i++, j--) {
        if(word[i] != word[j]) {
            isPalindrome = 0;
            break;
        }
    }
    if(isPalindrome) {
        printf("\nIt is a palindrome.\n");
    } else {
        printf("\nIt is not a palindrome.\n");
    }
    return 0;
}

Want to be notified when Claude responds?


Claude is AI and can make mistakes. Please double-check responses.

