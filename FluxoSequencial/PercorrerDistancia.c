#include <stdio.h>

int main(){
    double tempo, velocidade, deslocamento, velocidadeMedia;

    printf("Digite o tempo gasto (em horas): ");
    scanf("%lf", &tempo);

    printf("Digite a velocidade (em km/h): ");
    scanf("%lf", &velocidade);
    deslocamento = velocidade * tempo;
    velocidadeMedia = deslocamento / tempo;

    printf("O deslocamento percorrido é: %.2lf km\n", deslocamento);
    printf("A velocidade média é: %.2lf km/h\n", velocidadeMedia);



}