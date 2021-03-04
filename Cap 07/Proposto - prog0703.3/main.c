#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
----------------- DESCRI��O DA QUEST�O ------------------------------------------------------------------------------------------------------

 Implemente a fun��o abaixo que recebe uma string e a compacta, num �nico caractere,
qualquer conjunto de de caracteres repetidos consecutivos.

        char *strpack(char *s)
        Ex:
        strpack("Arrecadddaccao")           --> "Arecadacao"
        strpack("   AAAaaaBBB   CCCIALFFA") --> " AaB CIALFA"


Funcionando?
    Sim - (V)
    N�o - ()
----------------- COMENT�RIOS ---------------------------------------------------------------------------------------------------------------
//(1)//
 "...."

 char *strpack(char *s)
{
    int i = 0, j = 0, k = 0, l, m, tam = strlen(s);
    char s_aux[strlen(s)];
//Analisa caractere por caractere
    for(i = 0; i <= tam; i =j)
    {
//Analisa a quantidade de caracteres repetidos
        for(j = i; j <= tam; j++)
        {
            if(s[i] != s[j])
            {
//Elimina os caracteres repetidos
                s_aux[k] = s[i];
                k++;
                break;
            }
        }
    }
    s_aux[k] = '\0';
    printf("\ntam_s_aux: %d | s_aux:%s\n", strlen(s_aux), s_aux);
    s = s_aux;
    return s;

//(2)//
 "..."


---------------- PROT�TIPOS DAS FUN��ES -----------------------------------------------------------------------------------------------------
*/

char *strpack(char *s);
//------------------------------------- -----------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo elementos
    char *s = "   AAAaaaBBB   CCCIALFFA";

//------ Armazenando o input do usu�rio

//------ Imprimindo o resultado
    printf("return: %s\n", strpack(s));

//------ The End...?
    return 0;
}
//-------------- FUN��ES ---------------------------------------------------------------------------------------------------------------------

char *strpack(char *s)
{
    int i = 0, j = 0, k = 0, l, tam = strlen(s);
//Analisa caractere por caractere
    for(i = 0; i <= tam; i++)
    {
//Analisa a quantidade de caracteres repetidos
        for(j = i; j <= tam; j++)
        {
            if(s[i] != s[j])
            {
//Elimina os caracteres repetidos
                for(l = i+1; l <= tam; l++)
                {
                    printf("i: %d | l: %d\n", i, l);
                    s[++l] = s[++j];
                    printf("s[%2d] = s[%2d]\n", l, j);
                }
                /*s_aux[k] = s[i];
                k++;
                break;
                */
            }
        }
    }
    printf("\ntam_sx: %d | s:%s\n", strlen(s), s);
    return s;
}


