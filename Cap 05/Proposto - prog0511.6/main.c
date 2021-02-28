#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
 Verdade caso c tenha um TAB ou espaço.
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
    printf("Escreva uma letra: ");
    scanf("%c", &c);
    printf("\nA entrada do usuario tem um TAB ou espaco?", c);
//-----------------------------
    if(isspace(c))
    {
        printf("\nVerdadeiro.\n");
    }
    else
    {
        printf("\nFalso.\n");
    }
    return 0;
}
//-----------------------------//-----------------------------//-----------------------------
