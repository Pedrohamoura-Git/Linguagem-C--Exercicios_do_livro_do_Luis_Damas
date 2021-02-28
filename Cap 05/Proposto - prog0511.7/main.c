#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
 Devolve o valor do caractere transformado em minúsculas.

    (V) - Funcionando?

*/
//-----------------------------//-----------------------------//-----------------------------
int main()
{
    printf("Hello world!\n\n");
//-----------------------------
    char c;
//-----------------------------
    printf("Escreva uma letra maiusculo: ");
    scanf(" %c", &c);
    printf("\n%c em minusculo eh: %c\n\n", c, tolower(c));

    return 0;
}
//-----------------------------//-----------------------------//-----------------------------
