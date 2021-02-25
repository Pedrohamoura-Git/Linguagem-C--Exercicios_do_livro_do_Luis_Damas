#include <stdio.h>
#include <stdlib.h>
//Apresentar menu: Clientes, Fornecedores, Encomendas e Sair.
int main()
{
    printf("Hello world!\n\n");

    int opcao_selecionada;

    do
    {
        printf("1 - Clientes\n");
        printf("2 - Fornecedores\n");
        printf("3 - Encomendas\n");
        printf("4 - Sair\n\n");
        printf("Escolha a sua opcao:  ");
        scanf("%d", &opcao_selecionada);
        switch (opcao_selecionada)
        {
            case 1:
                printf("\nOpcao Clientes selecionada.\n\n");
                break;
            case 2:
                printf("\nOpcao Fornecedores selecionada.\n\n");
                break;
            case 3:
                printf("\nOpcao Encomendas selecionada.\n\n");
                break;
            case 4:
                printf("\nPrograma encerrado.\n\n");
                break;
            default:
                printf("\nOpcao invalida.\n\n");
                break;
        }
    }
    while (opcao_selecionada != 4);

    return 0;
}
