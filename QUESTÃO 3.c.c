#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char numero[999][11];
    char nome[999][200];
    int numero;
    int numero2;
    int i;

    printf("| 1 - Adicionar um novo número\n");
    printf("| 2 - Mostrar números cadastrados\n");
  printf("\n")
  printf("Digite um número:")
    scanf("%d", &numero);
    system("cls||clear");

    switch (numero)
    {
    case 1:
        for (i = 0; i < 999; i++)
        {
            printf("digite o nome da %d° pessoa: ", i + 1);
            scanf("%s", &nome[i]);
            system("cls||clear");

            printf("digite o número da %d° pessoa: ", i + 1);
            scanf("%s", &numero[i]);
            system("cls||clear");

            
            scanf("%d", &numero2);
            system("cls||clear");

            switch (numero2)
            {
            case 1:
                printf("digite o nome da %d° pessoa: ", i + 1);
                scanf("%s", &nome[i]);
                system("cls||clear");

                printf("digite o número da %d° pessoa: ", i + 1);
                scanf("%s", &numero[i]);
                system("cls||clear");
                break;

            case 2:
                printf("| 1 - Adicionar um novo número\n");
                  printf("| 2 - Mostrar números cadastrados\n");
                printf("\n")
                printf("Digite um número:");
                  scanf("%d", &numero);
                system("cls||clear");

                for (i = 0; i < 999; i++)
                {
                    printf("nome: %s\n", nome[i]);
                    printf("número: %s\n\n", numero[i]);
                }
                break;

            default:
                printf("opção invalida");
                break;
            }
        }
        break;

    case 2:
        printf("sem números ou nomes registrados.");

        break;

    default:
        printf("opção invalida.");
        break;
    }
    return 0;
}