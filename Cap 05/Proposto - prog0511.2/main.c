#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
 Verdade caso c seja uma letra do alfabeto, maiúscula ou minúscula.
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
    printf("Escreva uma letra do alfabeto: ");
    scanf(" %c", &c);
    printf("\n%c eh uma letra?\n", c);
//-----------------------------
    if(isalpha(c))
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
