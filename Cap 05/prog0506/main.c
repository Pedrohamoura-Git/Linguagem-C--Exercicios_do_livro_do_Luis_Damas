#include <stdio.h>
#include <stdlib.h>
//A função linha() deve escrever qualquer caractere.
    //(V) - Função fucionando.

linha(int num, char caract);

int main()
{
    printf("Hello world!\n\n");

    char caract;
    printf("Escolha o caractere desejado: ");
    scanf(" %c", &caract);
    putchar('\n');

    linha(3, '+');
    linha(5, '-');
    linha(7, caract);
    linha(5, '-');
    linha(3, '+');

    return 0;
}

linha(int num, char caract)
{
    int cont;
    for(cont = 1; cont <= num; cont ++)
    {
       putchar(caract);
    }
    putchar('\n');
}

