#include <stdio.h>
#include <stdlib.h>

//Imprimindo a soma e o produto de dois números inseridos pelo usuário


int main()
{
    printf("Hello world!\n\n");

    int num, cont, soma, produto;

    printf("Insira um numero inteiro: ");
    scanf("%d", &num);

    for (num != 0, soma = 0, produto = 1, cont = 1; cont <= num; cont ++)
    {
        soma = soma + cont;
        produto = produto * cont;
        printf("%d\\%d\\%d\\%d\n\n", num, cont, soma, produto);
    }

    return 0;
}

