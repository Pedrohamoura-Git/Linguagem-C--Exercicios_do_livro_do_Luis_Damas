#include <stdio.h>
#include <stdlib.h>
//Mostrar as 5 primeiras tabuadas, parando a tela depois de cada uma delas ser escrita.
int main()
{
    printf("Hello world!\n\n");

    int cont, num;

    for (num = 1; num <= 5; num ++)
    {
        printf("%d\n\n", num);
        for (cont = 0; cont <= 10; cont ++)
        {
            printf("%d x %d = %d\n", num, cont, num * cont);
        }
        if (num != 5)
        {
        /*(1)*/
            printf("\nPressione <ENTER> para continuar...");
            getchar();
        }

        printf("\n\n");
    }
    return 0;
}
/* (1)
A função getchar() vai reconhecer a tecla pressionada;
e reproduzir a próxima tabuada.
Como não precisamos armazenar o input da tecla ENTER,
não é necessário atribuir nenhuma variável.
Ex:
    getchar(tecla_pressionada);
*/
