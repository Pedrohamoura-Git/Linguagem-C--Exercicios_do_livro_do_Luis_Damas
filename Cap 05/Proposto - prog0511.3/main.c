#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
 Verdade caso c seja um digito ou uma letra do alfabeto.
Falso, coso contrário.

    (V) - Funcionando?

*/
//-----------------------------//-----------------------------//-----------------------------
int main()
{
    printf("Hello world!\n\n");
//-----------------------------
    char c;
//-----------------------------
    printf("Escreva qualquer coisa (um caractere): ");
    scanf(" %c", &c);
    printf("\n%c eh um digito ou uma letra?\n", c);
//-----------------------------
    if(isalpha(c) || isalnum(c))
    {
        printf("\nVerdadeiro.\n");
    }
    else
    {
        printf("\nFalso.\n\n");
    }
    return 0;
}
//-----------------------------//-----------------------------//-----------------------------
