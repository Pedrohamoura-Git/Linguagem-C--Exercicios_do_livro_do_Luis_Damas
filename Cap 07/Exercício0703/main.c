#include <stdio.h>
#include <stdlib.h>
/*
                            Descri��o da quest�o

 Implemente a fun��o abaixo que copia a string orig para a string dest.

            char *strepy(char *dest, char *orig)


Funcionando?
    Sim - (V)
    N�o - ()
*/
//-------------- PROT�TIPOS DAS FUN��ES ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


char *strepy(char *dest, char *orig);
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo elementos

//------ Armazenando o input do usu�rio

//------ ...

    return 0;
}
//-------------- FUN��ES -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

char *strepy(char *dest, char *orig)
{
    int i;

    for(i = 0; orig[i] != '\0', i++)
    {
        dest[i] = orig[i];
    }
    dest[i] = '\0';

    return dest;
}

//-------------- COMENT�RIOS ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*

//(1)//
    Ex:
"Quando sair do if...incrementa��o seja = 0."

//(2)//
"..."

*/
