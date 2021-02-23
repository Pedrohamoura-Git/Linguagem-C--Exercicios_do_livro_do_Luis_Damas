#include <stdio.h>
#include <stdlib.h>
//Escrever programa que reconheça se o ano eh bissexto ou não.
int main()
{
    printf("Hello world!\n\n");

    int ano;
    printf("Digite um ano para saber se ele eh bissexto: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) ||  ano % 400 == 0)
    {
        printf("Esse ano eh bissexto.\n");
    }
    else
    {
        printf("Esse ano nao eh bissexto.\n");
    }
    return 0;
}
