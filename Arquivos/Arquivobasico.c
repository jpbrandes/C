#include <stdio.h>
#include <stdlib.h>

/*
int main() {
    double s, denominador, sinal;
    int i;

    s = 0;
    denominador = 1;
    sinal = 1;

    for (i = 0; i < 51; i++) {
        s += sinal / (denominador * denominador * denominador);
        sinal *= -1;
        denominador += 2;
    }

    printf("S = %.10f\n", s);
    printf("pi ≈ %.10f\n", sqrt(s * 32));
    return 0;
}
*/

/*
int main() {
    double graus, x, sen, termo, fatorial;
    int i, expoente;

    printf("Digite X em graus: ");
    scanf("%lf", &graus);

    x = graus * 3.14159265358979 / 180.0; // conversao para radianos

    sen = 0;
    for (i = 0; i < 15; i++) {
        expoente = 2 * i + 1;

        // Calcula x^expoente
        termo = 1;
        int j;
        for (j = 0; j < expoente; j++) termo *= x;

        // Calcula expoente!
        fatorial = 1;
        for (j = 1; j <= expoente; j++) fatorial *= j;

        if (i % 2 == 0) {
            sen += termo / fatorial;
        } else {
            sen -= termo / fatorial;
        }
    }

    printf("sen(%.2f graus) = %.10f\n", graus, sen);
    return 0;
}
*/

/*
int main() {
    double graus, x, coseno, termo, fatorial;
    int i, expoente, j;

    printf("Digite X em graus: ");
    scanf("%lf", &graus);

    x = graus * 3.14159265358979 / 180.0;

    coseno = 0;
    for (i = 0; i < 15; i++) {
        expoente = 2 * i;

        termo = 1;
        for (j = 0; j < expoente; j++) termo *= x;

        fatorial = 1;
        for (j = 1; j <= expoente; j++) fatorial *= j;

        if (i % 2 == 0) {
            coseno += termo / fatorial;
        } else {
            coseno -= termo / fatorial;
        }
    }

    printf("cos(%.2f graus) = %.10f\n", graus, coseno);
    return 0;
}
*/

/*
int main() {
    double x, ex, termo, fatorial;
    int i, j;

    printf("Digite X: ");
    scanf("%lf", &x);

    ex = 0;
    for (i = 0; i < 15; i++) {
        termo = 1;
        for (j = 0; j < i; j++) termo *= x;

        fatorial = 1;
        for (j = 1; j <= i; j++) fatorial *= j;

        ex += termo / fatorial;
    }

    printf("e^%.4f = %.10f\n", x, ex);
    return 0;
}
*/

/*
int main() {
    int n, i, j;
    double s, num_fat, den_fat, sinal;

    printf("Digite N: ");
    scanf("%d", &n);

    s = 0;
    sinal = 1;

    for (i = 0; i <= n; i++) {
        // Numerador: (N-i)!
        num_fat = 1;
        for (j = 1; j <= (n - i); j++) num_fat *= j;

        // Denominador: (2*i)!
        den_fat = 1;
        for (j = 1; j <= (2 * i); j++) den_fat *= j;

        s += sinal * (num_fat / den_fat);
        sinal *= -1;
    }

    printf("S = %.6f\n", s);
    return 0;
}
*/

/*
int main() {
    int i, sexo;
    float altura, maior, menor, soma_total, soma_fem;
    int count_fem;

    maior = -1;
    menor = 9999;
    soma_total = 0;
    soma_fem = 0;
    count_fem = 0;

    for (i = 1; i <= 50; i++) {
        printf("Ficha %d - Altura: ", i);
        scanf("%f", &altura);
        printf("Ficha %d - Sexo (1=M, 2=F): ", i);
        scanf("%d", &sexo);

        soma_total += altura;
        if (altura > maior) maior = altura;
        if (altura < menor) menor = altura;

        if (sexo == 2) {
            soma_fem += altura;
            count_fem++;
        }
    }

    printf("\nMaior altura da turma: %.2f m\n", maior);
    printf("Menor altura da turma: %.2f m\n", menor);
    printf("Media de altura da turma: %.2f m\n", soma_total / 50);
    if (count_fem > 0) {
        printf("Media de altura das mulheres: %.2f m\n", soma_fem / count_fem);
    } else {
        printf("Nenhuma mulher na turma.\n");
    }

    return 0;
}
*/

/*
int main() {
    int i, matricula;
    float nota, maior1, maior2;
    int mat_maior1, mat_maior2;

    maior1 = -1;
    maior2 = -1;
    mat_maior1 = 0;
    mat_maior2 = 0;

    for (i = 1; i <= 100; i++) {
        printf("Ficha %d - Matricula: ", i);
        scanf("%d", &matricula);
        printf("Ficha %d - Nota: ", i);
        scanf("%f", &nota);

        if (nota > maior1) {
            maior2 = maior1;
            mat_maior2 = mat_maior1;
            maior1 = nota;
            mat_maior1 = matricula;
        } else if (nota > maior2) {
            maior2 = nota;
            mat_maior2 = matricula;
        }
    }

    printf("\n1a maior nota: %.2f - Matricula: %d\n", maior1, mat_maior1);
    printf("2a maior nota: %.2f - Matricula: %d\n", maior2, mat_maior2);
    return 0;
}
*/

/*
int main() {
    int i, idade;
    char nota;
    int count_otimo, count_bom, count_regular, count_ruim, count_pessimo;
    float soma_idade_ruim;
    int maior_otimo, maior_ruim, maior_pessimo;

    count_otimo = count_bom = count_regular = count_ruim = count_pessimo = 0;
    soma_idade_ruim = 0;
    maior_otimo = 0;
    maior_ruim = 0;
    maior_pessimo = 0;

    for (i = 1; i <= 100; i++) {
        printf("Espectador %d - Idade: ", i);
        scanf("%d", &idade);
        printf("Espectador %d - Nota (A/B/C/D/E): ", i);
        scanf(" %c", &nota);

        switch (nota) {
            case 'A': case 'a':
                count_otimo++;
                if (idade > maior_otimo) maior_otimo = idade;
                break;
            case 'B': case 'b':
                count_bom++;
                break;
            case 'C': case 'c':
                count_regular++;
                break;
            case 'D': case 'd':
                count_ruim++;
                soma_idade_ruim += idade;
                if (idade > maior_ruim) maior_ruim = idade;
                break;
            case 'E': case 'e':
                count_pessimo++;
                if (idade > maior_pessimo) maior_pessimo = idade;
                break;
        }
    }

    printf("\nQuantidade de respostas Otimo: %d\n", count_otimo);

    if (count_regular > 0) {
        printf("Diferenca percentual Bom x Regular: %.2f%%\n",
               ((float)(count_bom - count_regular) / count_regular) * 100);
    } else {
        printf("Nenhuma resposta Regular.\n");
    }

    if (count_ruim > 0) {
        printf("Media de idade dos que responderam Ruim: %.2f\n",
               soma_idade_ruim / count_ruim);
    } else {
        printf("Nenhuma resposta Ruim.\n");
    }

    printf("Percentagem de Pessimo: %.2f%%\n", (count_pessimo / 100.0) * 100);
    printf("Maior idade que respondeu Pessimo: %d\n", maior_pessimo);

    printf("Diferenca de idade (maior Otimo - maior Ruim): %d\n",
           maior_otimo - maior_ruim);

    return 0;
}
*/

/*
int main() {
    int i;
    char elev, periodo;

    // contadores[elevador][periodo]: 0=A,1=B,2=C / 0=M,1=V,2=N
    int cont[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
    int total_elev[3] = {0, 0, 0};
    int total_per[3] = {0, 0, 0};

    int ei, pi;

    for (i = 1; i <= 50; i++) {
        printf("Morador %d - Elevador (A/B/C): ", i);
        scanf(" %c", &elev);
        printf("Morador %d - Periodo (M/V/N): ", i);
        scanf(" %c", &periodo);

        if      (elev == 'A' || elev == 'a') ei = 0;
        else if (elev == 'B' || elev == 'b') ei = 1;
        else                                  ei = 2;

        if      (periodo == 'M' || periodo == 'm') pi = 0;
        else if (periodo == 'V' || periodo == 'v') pi = 1;
        else                                        pi = 2;

        cont[ei][pi]++;
        total_elev[ei]++;
        total_per[pi]++;
    }

    // Elevador mais frequentado
    int max_elev = 0;
    for (i = 1; i < 3; i++) {
        if (total_elev[i] > total_elev[max_elev]) max_elev = i;
    }
    // Periodo de maior fluxo desse elevador
    int max_per_elev = 0;
    for (i = 1; i < 3; i++) {
        if (cont[max_elev][i] > cont[max_elev][max_per_elev]) max_per_elev = i;
    }

    char nomes_elev[] = "ABC";
    char nomes_per[] = "MVN";

    printf("\nElevador mais frequentado: %c (%d usos)\n", nomes_elev[max_elev], total_elev[max_elev]);
    printf("Periodo de maior fluxo do elevador %c: %c\n", nomes_elev[max_elev], nomes_per[max_per_elev]);

    // Periodo mais usado no geral
    int max_per = 0, max_per_elev2 = 0;
    for (i = 1; i < 3; i++) {
        if (total_per[i] > total_per[max_per]) {
            max_per = i;
        }
    }
    // A que elevador pertence esse periodo?
    for (i = 1; i < 3; i++) {
        if (cont[i][max_per] > cont[max_per_elev2][max_per]) max_per_elev2 = i;
    }
    printf("Periodo mais usado no geral: %c | Elevador: %c\n",
           nomes_per[max_per], nomes_elev[max_per_elev2]);

    // Mais e menos usado (periodos)
    int min_per = 0;
    for (i = 1; i < 3; i++) {
        if (total_per[i] < total_per[min_per]) min_per = i;
    }
    if (total_per[min_per] > 0) {
        printf("Diferenca percentual entre mais e menos usado: %.2f%%\n",
               ((float)(total_per[max_per] - total_per[min_per]) / total_per[min_per]) * 100);
    }

    // Elevador de media utilizacao (nem o maior nem o menor)
    int min_elev = 0;
    for (i = 1; i < 3; i++) {
        if (total_elev[i] < total_elev[min_elev]) min_elev = i;
    }
    int mid_elev = 3 - max_elev - min_elev; // indice do do meio
    printf("Percentagem do elevador de media utilizacao (%c): %.2f%%\n",
           nomes_elev[mid_elev], (total_elev[mid_elev] / 50.0) * 100);

    return 0;
}
*/

/*
int main() {
    int i, dependentes;
    long long cpf;
    float renda, salario_min, desconto, renda_liquida, aliquota, imposto;

    printf("Digite o valor atual do salario minimo: ");
    scanf("%f", &salario_min);

    for (i = 1; i <= 10; i++) {
        printf("\n--- Contribuinte %d ---\n", i);
        printf("CPF: ");
        scanf("%lld", &cpf);
        printf("Numero de dependentes: ");
        scanf("%d", &dependentes);
        printf("Renda mensal (R$): ");
        scanf("%f", &renda);

        desconto = dependentes * 0.05f * salario_min;
        renda_liquida = renda - desconto;

        if      (renda_liquida <= 2 * salario_min) aliquota = 0.00f;
        else if (renda_liquida <= 3 * salario_min) aliquota = 0.05f;
        else if (renda_liquida <= 5 * salario_min) aliquota = 0.10f;
        else if (renda_liquida <= 7 * salario_min) aliquota = 0.15f;
        else                                        aliquota = 0.20f;

        imposto = renda_liquida * aliquota;

        printf("CPF: %011lld\n", cpf);
        printf("Renda bruta:   R$ %.2f\n", renda);
        printf("Desconto dep.: R$ %.2f\n", desconto);
        printf("Renda liquida: R$ %.2f\n", renda_liquida);
        printf("Aliquota:      %.0f%%\n", aliquota * 100);
        printf("Imposto:       R$ %.2f\n", imposto);
    }

    return 0;
}
*/
