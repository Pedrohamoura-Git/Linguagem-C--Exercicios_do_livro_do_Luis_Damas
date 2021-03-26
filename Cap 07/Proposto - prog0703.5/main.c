#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
----------------- DESCRI��O DA QUEST�O ------------------------------------------------------------------------------------------------------

 Implemente a fun��o abaixo que coloca um espa�o depois de cada caractere na string.
 Ignore os espa�os j� existentes.


        char *xspace(char *s)
        EX:
        strcpy(str, "ERA_UMA_VEZ");
        xspace(str) --> "E R A  U M A  V E Z"

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

char *xspace(char *s);
//------------------------------------- -----------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo elementos
    char *s = "ERA UMA VEZ";

//------ Armazenando o input do usu�rio

//------ Imprimindo o resultado
    printf("s: %s\n", xspace(s));

//------ The End...?
    return 0;
}
//-------------- FUN��ES ---------------------------------------------------------------------------------------------------------------------

char *xspace(char *s)
{
    char aux, aux2;
    int i, tam = strlen(s);
    for(i = 1; i <= tam; i++)
    {
        printf("i: %d\n", i);//Verificar o n� de repeti��es
        if(i % 2 != 0)
        {
            aux = s[i];
            s[i] = ' ';
        }
        else
            if(i % 2 == 0)
            {
                aux2 = s[i];
                s[i] = aux;
            }
    }
    return s;
}


