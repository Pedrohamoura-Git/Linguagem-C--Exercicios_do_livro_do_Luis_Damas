#include <stdio.h>
#include <stdlib.h>
//Leia um programa, de quatro formas distintas, que leia um inteiro e indique se esse inteiro é ou não igual a 0.

int main()
{
    printf("Hello world!\n\n");

    int num;
    printf("Escreva um numero inteiro: ");
    scanf("%d", &num);

    printf("\nEsse numero eh igual a 0?\n");
    num == 0 ? printf("\nVerdadeiro!\n") : printf("\nFalso!\n");

    if (num == 0)
    {
        printf("\nVerdadeiro!\n");
    }
    else
    {
        printf("\nFalso!\n");
    }
    if (num != 0)
    {
        printf("\nFalso!\n");
    }
    else
    {
        printf("\nVerdadeiro!\n");
    }
    switch (num)
    {
        case 0:
            printf("\nVerdadeiro!\n");
            break;
        default:
            printf("\nFalso!\n");
    }

/* (1)
        switch (num)
        {
            case num = '0':
                printf("\nVerdadeiro!\n");
                break;
            default:
                printf("\nFalso!\n");
        }
*/
    return 0;
}
/*
!Erro: Por algum motivo a função switch (1) não funcionou.

!Solução: O problema estava na sintaxe que eu utilizei.
Quando eu chamei a função switch eu já havia especificado, entre parênteses, que o 'x' seria o elemento de analise.
Por isso, ficou redundante quando eu utilizei a mesma variável 'x' no case e o programa não aceitou.
Função corrigida:

    switch (num)
    {
        case 0:
            printf("Verdadeiro!\n");
            break;
        default:
            printf("Falso!\n");
    }
*/
