#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
 Devolve o valor do caractere transformado em maiúsculas.

    (V) - Funcionando?

*/
//-----------------------------//-----------------------------//-----------------------------
int main()
{
    printf("Hello world!\n\n");
//-----------------------------
    char c;
//-----------------------------
    printf("Escreva uma letra minuscula: ");
    scanf(" %c", &c);
    printf("\n%c em maiusculo eh: %c\n\n", c, toupper(c));

    return 0;
}
//-----------------------------//-----------------------------//-----------------------------
