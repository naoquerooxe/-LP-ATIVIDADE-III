#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char nome[5][100];
    float altura[5];
    float peso[5];
    int idade[5];
    int i;
    float maioraltura = 0;
    float menoraltura = 9999;
    int maioridade = 0;
    int menoridade = 9999;
    float maiorpeso = 0;
    float menorpeso = 9999;

    for (i = 0; i < 5; i++)
    {

        fflush(stdin);
        printf("Digite o seu nome: \n");
        gets(nome[i]);

        printf("Digite a sua altura: \n");
        scanf("%f", &altura[i]);

        printf("Digite a sua idade: \n");
        scanf("%d", &idade[i]);

        printf("Digite o seu peso: \n");
        scanf("%f", &peso[i]);

        printf("\n");

        maioridade = idade[i] > maioridade ? idade[i]: maioridade;
        menoridade = idade[i] < menoridade ? idade[i] : menoridade;

        maioraltura = altura[i] > maioraltura ? altura[i] : maioraltura;
        menoraltura = altura[i] < menoraltura ? altura[i] : menoraltura;

        maiorpeso = peso[i]> maiorpeso ? peso[i] : maiorpeso;
        menorpeso = peso[i] < menorpeso ? peso[i] : menorpeso;
    }

    system("clear");

    for (i = 0; i < 5; i++)
    {

        printf("Nome: %s \n", nome[i]);
        printf("Altura: %.1f \n", altura[i]);
        printf("Peso: %.1f \n", peso[i]);
        printf("Idade: %d \n", idade[i]);
        printf("\n");
    }

    printf("Maior altura: %.1f \n", maioraltura);
    printf("Menor altura: %.1f \n", menoraltura);
    printf("\n");
    printf("Maior peso: %.1f \n", maiorpeso);
    printf("Menor peso: %.1f \n", menorpeso);
    printf("\n");
    printf("Maior idade: %d \n", maioridade);
    printf("Menor idade: %d \n", menoridade);

    return 0;
}