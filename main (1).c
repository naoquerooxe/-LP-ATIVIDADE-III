#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{



    int linha = 999;
    char produto[linha][250];
    int quantidade[linha];
    float preco[linha]; 
    int numero;
    int i, j;

    do
    {
        printf("**********-MENU-**********\n");
        printf("1 - Adicionar venda\n");
        printf("2 - Exibir total de vendas\n");
        printf("**********------**********\n");
       printf("\n");
        printf("Digite um número: \n ");
        scanf("%i", &numero);
        system("cls || clear");
        fflush(stdin);

        switch (numero)
        {
        case 1:
            printf("Nome do produto:\n ");
            gets(produto[j]);

            printf("Quantidade:\n ");
            scanf("%i",&quantidade[j]);

            printf("Preço do produto:\n ");
            scanf("%f",&preco[j]);

            system("cls || clear");
            j++;

            break;
        case 2:
            for (i = 0; i < j; i++)
            {
                printf("Produto: %s \n", produto[i]);
                printf("Quantidade: %i \n", quantidade[i]);
                printf("Valor: %.1f \n", preco[i]);
                printf("\n");
            }

            break;
        default:
           printf("Opção inválida!\n");
            break;
        }

    } while (numero == 1);

    return 0;
}