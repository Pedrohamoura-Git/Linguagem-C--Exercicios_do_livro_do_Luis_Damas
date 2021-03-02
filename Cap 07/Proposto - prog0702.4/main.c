#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
----------------- DESCRIÇÃO DA QUESTÃO ------------------------------------------------------------------------------------------------------

 Implemente a função abaixo que coloca todos os caracteres de str em minúsculas.

        char *strlwr(char *str)


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

char *strlwr(char *str);
//------------------------------------- -----------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo elementos
    char *str = "PokEmoOND";

//------ Armazenando o input do usuário

//------ Imprimindo o resultado
    printf("str: %s\n", strlwr(str));

//------ The End...?
    return 0;
}
//-------------- FUNÇÕES ---------------------------------------------------------------------------------------------------------------------

char *strlwr(char *str)
{
    int i;

    for(i = 0; str[i] != '\0'; i++)
    {
        str[i] = tolower(str[i]);
    }
    return str;
}


