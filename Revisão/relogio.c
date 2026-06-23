#include <stdio.h>

int main() {
    int total_segundos;
    int horas, minutos, segundos, resto;

    // Solicita a entrada do usuário
    printf("Digite o total de segundos: ");
    if (scanf("%d", &total_segundos) != 1) {
        return 1; // Tratamento simples caso a entrada não seja um número
    }

    // 1 hora tem 3600 segundos (60 minutos * 60 segundos)
    horas = total_segundos / 3600;
    
    // O 'resto' guarda os segundos que não completaram uma hora inteira
    resto = total_segundos % 3600;
    
    // 1 minuto tem 60 segundos
    minutos = resto / 60;
    
    // O que sobrar da divisão por 60 são os segundos finais
    segundos = resto % 60;

    // O formato %02d força a exibição de pelo menos 2 dígitos, preenchendo com zero à esquerda se necessário
    printf("Tempo equivalente: %02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}
