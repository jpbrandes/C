#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    char sexo;
    int total_homens = 0;
    int total_mulheres = 0;
    int i;

    // Loop para ler os dados de 30 pessoas
    for (i = 1; i <= 30; i++) {
        printf("--- Pessoa %d ---\n", i);
        
        printf("Digite o nome: ");
        // fgets usado para permitir nomes com espaços
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0'; // Remove o caractere de nova linha (\n) do final

        // Loop para garantir que o sexo seja digitado corretamente
        do {
            printf("Digite o sexo (M/F): ");
            scanf(" %c", &sexo); // O espaço antes de %c limpa o buffer do enter
            
            if (sexo == 'M' || sexo == 'm') {
                total_homens++;
                printf("Nome: %s | Sexo: Masculino\n\n", nome);
            } else if (sexo == 'F' || sexo == 'f') {
                total_mulheres++;
                printf("Nome: %s | Sexo: Feminino\n\n", nome);
            } else {
                printf("Opção inválida! Digite apenas M ou F.\n");
            }
        } while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f');
    }

    // Exibe os totais ao final
    printf("==============================\n");
    printf("RESUMO GERAL:\n");
    printf("Total de homens: %d\n", total_homens);
    printf("Total de mulheres: %d\n", total_mulheres);
    printf("==============================\n");

    return 0;
}
