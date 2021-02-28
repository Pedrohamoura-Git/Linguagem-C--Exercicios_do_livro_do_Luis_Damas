#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
 Verdade caso c seja um digito ou uma letra maiúscula.
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
    scanf(" %c", &c);
    printf("\n%c eh uma letra maiuscula?", c);
//-----------------------------
    if(isupper(c))
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
