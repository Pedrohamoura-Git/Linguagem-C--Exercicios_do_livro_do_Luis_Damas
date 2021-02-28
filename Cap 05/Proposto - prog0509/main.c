#include <stdio.h>
#include <stdlib.h>
/*
Devolver verdade se x for ímpar. Falso, no caso contrário.

int Impar(int x)

    (V) - Funcionando?
*/
//---------------------------//---------------------------//---------------------------
int Impar(int x);
//---------------------------
int main()
{
    printf("Hello world!\n\n");

    int x;

    printf("Insira o valor de x: ");
    scanf(" %d", &x);
//---------------------------
    printf("\nX eh impar?\n");
//---------------------------
    switch(Impar(x))
    {
        case 0:
        {
            printf("\nFalso.\n");
            break;
        }
        case 1:
        {
            printf("\nVerdade.\n");
            break;
        }
        default:
        {
            printf("\nNumero invalido.\n");
        }
    }
    return 0;
}
//---------------------------//---------------------------//---------------------------
int Impar(int x)
{
    int res;

    if(x % 2 != 0)
    {
        res = 1;
    }
    else
    {
        res = 0;
    }
}
