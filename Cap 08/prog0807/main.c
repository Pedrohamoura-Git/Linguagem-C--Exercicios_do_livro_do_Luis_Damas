#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
----------------- DESCRI��O DA QUEST�O ------------------------------------------------------------------------------------------------------

 Declare e inicie um vetor de strings e mostre-as, uma a uma, recorrendo simplesmente a
ponteiros.


Funcionando?
    Sim - (V)
    N�o - ()
----------------- COMENT�RIOS ---------------------------------------------------------------------------------------------------------------
//(1)//
 "...."

//(2)//
 "..."


---------------- PROT�TIPOS DAS FUN��ES -----------------------------------------------------------------------------------------------------
*/
//------------------------------------- -----------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo elementos
    char string[] = "Pedro Henrique";
    char *ptr = string;

//------ Armazenando o input do usu�rio

//------ Imprimindo o resultado
    while(*ptr != '\0')
    {
        printf("%c --> %d\n", *ptr, ptr);
        ptr++;
    }

//------ The End...?
    return 0;
}
//-------------- FUN��ES ---------------------------------------------------------------------------------------------------------------------


