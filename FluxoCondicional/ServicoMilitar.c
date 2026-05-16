#include <stdio.h>
#include <string.h>

int main() {
    char sexo;
    int idade;
    char nome[100];
    char saude[20];
    char candidatos[100];

   for(int i = 1; i <= 100; i++) {
        printf("--- Candidato %d ---\n", i);
        
        printf("Digite o nome do candidato: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0'; // Remove o caractere de nova linha (\n) do final

        printf("Digite a idade do candidato: ");
        scanf("%d", &idade);

        printf("Digite o sexo do candidato (M/F): ");
        scanf(" %c", &sexo); // O espaço antes de %c limpa o buffer do enter

        printf("Digite a saúde do candidato (Boa/Ruim): ");
        scanf("%s", saude);

        if (sexo == 'M' || sexo == 'm') {
            if (idade >= 18 && idade <= 30 && (strcmp(saude, "Boa") == 0 || strcmp(saude, "boa") == 0)) {
                printf("O candidato %s é apto para o serviço militar.\n\n", nome);
            } else {
                printf("O candidato %s não é apto para o serviço militar.\n\n", nome);
            }
        } else {
            printf("O candidato %s não é apto para o serviço militar (apenas homens são aceitos).\n\n", nome);
        }
    }
} // O segredo do fluxo condicional é colocar tudo dentro do for para que ele possa ler os dados de 100 candidatos, e dentro do for colocar as condições para verificar se o candidato é apto ou não para o serviço militar. 
//O programa verifica se o candidato é do sexo masculino, tem entre 18 e 30 anos, e tem uma saúde boa. Se todas as condições forem atendidas, o candidato é considerado apto para o serviço militar. Caso contrário, ele é considerado não apto.
// Sem o for é preciso fazer tudo manualmente.