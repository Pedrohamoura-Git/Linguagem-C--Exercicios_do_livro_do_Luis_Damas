#include <stdio.h>
#include <stdlib.h>
/*
//Alterar programa abaixo para mostrar letras em cada nível;

    printf("Hello world!\n\n");

    int num, n_espacos, n_asteriscos;
    printf("Insira um numero inteiro: ");
    scanf(" %d", &num);

    for (n_espacos = 1; n_espacos <= num; n_espacos ++)
    {
        for (n_asteriscos = 1; n_asteriscos <= n_espacos; n_asteriscos ++)
        {
            printf("* ");
        }
        putchar('\n');
    }

//Começar pela letra 'A'.
    Ex:
            A
            BB
            CCC
            DDDD
*/
int main()
{

    printf("Hello world!\n\n");

    int num, n_espacos, n_asteriscos;
    char letra;
    printf("Insira um numero inteiro: ");
    scanf(" %d", &num);

    for (n_espacos = 1; n_espacos <= num; n_espacos ++)
    {
        for (n_asteriscos = 1; n_asteriscos <= n_espacos; n_asteriscos ++)
        {
    //(1)// printf(" %c ", (char) n_asteriscos);
            putchar('A' + n_espacos - 1);
        }
        putchar('\n');
    }
    return 0;
}
/* (1)
Não faço ideia do por quê a expressão não funcionou.
Por algum motivo ela imprime sinais ao invés das letras.
*/

