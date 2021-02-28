#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
 Verdade caso c seja uma letra minúscula.
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
    printf("\n%c eh uma letra minuscula?\n", c);
//-----------------------------
    if(islower(c))
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
