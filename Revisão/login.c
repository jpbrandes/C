#include <stdio.h>
#include <string.h> // Biblioteca necessária para usar o strcmp

int main() {
    // Definição da senha correta e do array para armazenar a senha digitada
    const char senha_correta[] = "eng2026";
    char senha_digitada[50];
    
    int tentativas = 3;
    int logado = 0; // Variável "flag" para controlar se o usuário acertou

    // O laço continua enquanto restarem tentativas E o usuário não estiver logado
    while (tentativas > 0 && !logado) {
        printf("Digite a senha: ");
        scanf("%s", senha_digitada);

        // strcmp retorna 0 se as duas strings forem exatamente iguais
        if (strcmp(senha_digitada, senha_correta) == 0) {
            logado = 1; // Altera a flag para indicar sucesso
        } else {
            tentativas--; // Desconta uma tentativa
            
            // Só exibe a mensagem de erro se ainda sobrarem tentativas
            if (tentativas > 0) {
                printf("Senha incorreta. Tentativas restantes: %d\n", tentativas);
            }
        }
    }

    // Verificação final fora do laço para decidir a mensagem
    if (logado) {
        printf("Acesso liberado. Bem-vindo!\n");
    } else {
        printf("Acesso bloqueado. Tentativas esgotadas!\n");
    }

    return 0;
}
