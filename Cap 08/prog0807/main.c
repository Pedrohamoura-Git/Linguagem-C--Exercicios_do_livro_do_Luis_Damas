#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
----------------- DESCRIÇÃO DA QUESTÃO ------------------------------------------------------------------------------------------------------

 Declare e inicie um vetor de strings e mostre-as, uma a uma, recorrendo simplesmente a
ponteiros.


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
//------------------------------------- -----------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo elementos
    char string[] = "Pedro Henrique";
    char *ptr = string;

//------ Armazenando o input do usuário

//------ Imprimindo o resultado
    while(*ptr != '\0')
    {
        printf("%c --> %d\n", *ptr, ptr);
        ptr++;
    }

//------ The End...?
    return 0;
}
//-------------- FUNÇÕES ---------------------------------------------------------------------------------------------------------------------


