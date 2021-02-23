#include <stdio.h>
#include <stdlib.h>
//Leia um programa, de quatro formas distintas, que leia um inteiro e indique se esse inteiro é ou não igual a 0.
int main()
{
    printf("Hello world!\n\n");

    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    printf("\nO numero informado eh igual a 0?\n");
    switch (num)
    {
        case 0:
            printf("\nSim!\n");
            break;
        default:
            printf("\nNao!\n");
    }
    return 0;
}
