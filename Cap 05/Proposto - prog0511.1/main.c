#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
int isdigit(char c)

Retornar verdade caso c seja um dígito. Falso, caso contrário.

    (V) - Funcionando?
*/
//---------------------------//---------------------------//---------------------------
int main()
{
    printf("Hello world!\n\n");
//---------------------------
    char c; //(!1!)//

    printf("Insira o valor de 0 a 9: ");
    scanf(" %c", &c);

    if(isdigit(c))
    {
        printf("Digito: %c\n\n", c);
    }
    else
    {
        printf("Voce nao digitou um numero!\n\n");
    }
    return 0;
}
//---------------------------//---------------------------//---------------------------
/*
/(!1!)/
Não entendi porquê esse função precisa ler um char para reconhecer um dígito.


*/
