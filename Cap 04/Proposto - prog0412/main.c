#include <stdio.h>
#include <stdlib.h>
/*
Ler dois números inteiros e mostrar os ASCII equivalentes entre os dois;
*/
int main()
{
    printf("Hello world!\n\n");


    int num, num2, cont;
    char ascii;

    printf("Insira o primeiro numero: ");
    scanf(" %d", &num);
    printf("Insira o segundo numero: ");
    scanf(" %d", &num2);
    //crescente
    if (num < num2)
    {
        for (num, num2; num <= num2; num++)
        {
            printf("%d --> %c\n", num, (char) num);
        }
    }
    //decrescente
    if (num > num2)
    {
        for (num, num2; num >= num2; num--)
        {
            printf("%d --> %c\n", num, (char) num);
        }
    }
    //igual
    else
    {
        printf("%d --> %c\n", num, (char) num);
    }
    return 0;
}
