#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero[5];
    int i;
    int par = 0;
    int impar = 0;
    int soma = 0;
    float media;
    int somapares = 0;
    float mediapares;
    int positivo = 0;
    int negativo = 0;
    int maiorNumero = 0;
    int menorNumero = 9999;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %dº número: \n", i + 1);
        scanf("%d", &numero[i]);

        if (numero[i] % 2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }

        soma = soma + numero[i];
        somapares = somapares + par;



        if (numero[i] > 0)
        {
            positivo++;
        }
        else
        {
            negativo++;
        }

        if (numero[i] > maiorNumero)
        {
            maiorNumero = numero[i];
        }
        if (numero[i] < menorNumero)
        {
            menorNumero = numero[i];
        }
    }



    printf("\n");

    media = soma / 5;
    mediapares = somapares / par;

    printf("\n");
    printf("Quantidade de impares: %d\n", impar);
    printf("Quantidade de números negativos: %d\n", negativo);

    printf("\n");
    printf("Média dos pares: %.2f\n", mediapares);
    printf("Média dos números inseridos: %.2f \n", media);
    printf("\n");
    printf("Maior número: %d\n", maiorNumero);
    printf("Menor número: %d\n", menorNumero);
    printf("\n");


    return 0;
}