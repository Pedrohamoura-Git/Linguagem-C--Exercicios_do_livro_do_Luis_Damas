#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
----------------- DESCRIÇÃO DA QUESTÃO ------------------------------------------------------------------------------------------------------

 Implemente a função que devolve o nº de caracteres alfabéticos em s.

        int strcounta(char *s)
        Ex:
        strcounta("15 abacates") --> 8
        strcounta("quinze (15) abacates") --> 14



Funcionando?
    Sim - (V)
    Não - ()
----------------- COMENTÁRIOS ---------------------------------------------------------------------------------------------------------------
//(1)//
 "...."

//(2)//
 "..."


---------------- PROTÓTIPOS DAS FUNÇÕES -----------------------------------------------------------------------------------------------------
*/

int strcounta(char *s);
//------------------------------------- -----------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo elementos
    char *s = "Hello World!";

//------ Armazenando o input do usuário

//------ Imprimindo o resultado
    printf("Quant: %d\n", strcounta(s));

//------ The End...?
    return 0;
}
//-------------- FUNÇÕES ---------------------------------------------------------------------------------------------------------------------

int strcounta(char *s)
{
    int i, cont = 0;

    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
            cont++;

        if(s[i] >= 'A' && s[i] <= 'Z')
            cont++;
    }
    return cont;
}


