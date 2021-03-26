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
    Sim - ()
    N�o - (X)
----------------- COMENT�RIOS ---------------------------------------------------------------------------------------------------------------
//(1)//
 O comando if(s[i] != s[j]) (linha 61) encerra o programa por algum motivo.



//(2)//
 "..."
  char *strpack(char *s)
{
    int i = 0, j = 0, tam = strlen(s);
//Analisa caractere por caractere
    for(i = 0; i <= tam; i = j)
    {
//Analisa a quantidade de caracteres repetidos
        for(j = i; j <= tam; j++)
        {
            printf("i: %d | j: %d\n", i, j);
           //(1)// if(s[i] != s[j])
            {
//Elimina os caracteres repetidos
                s[++i] = s[j];
                printf("s[%d] =  s[%d] = %c\n", i, j, s[j]);
                break;
            }
        }
    }
    printf("s_aux: %s\n", s);
    return s;



 int strpack(char *s)
{
    int i = 0, j = 0, tam = strlen(s);
    if(tam == 0) return -1;
    //Analisa caractere por caractere
    for(i = 0; i <= tam; i = j)
    {
    //Analisa a quantidade de caracteres repetidos
        for(j = i; j <= tam; j++)
        {
            if(s[i] != s[j])
            {
                //Elimina os caracteres repetidos
                s[++i] = s[j];
                //break;
            }
        }
    }
    return 0;
}

---------------- PROT�TIPOS DAS FUN��ES -----------------------------------------------------------------------------------------------------
*/

int strpack(char *s);
//------------------------------------- -----------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo elementos
    char s[] = "   AAAaaaBBB   CCCIALFFA";

//------ Armazenando o input do usu�rio

//------ Imprimindo o resultado
    strpack(s);
    printf("return: %s\n", s);

//------ The End...?
    return 0;
}
//-------------- FUN��ES ---------------------------------------------------------------------------------------------------------------------
 int strpack(char *s)
{
    int i = 0, j = 0, tam = strlen(s);
    if(tam == 0)
        return -1;
    //Analisa caractere por caractere
    for(i = 0; i <= tam; i = j)
    {
    //Analisa a quantidade de caracteres repetidos
        for(j = i; j <= tam; j++)
        {
            if(s+i != s+j)
            {
                //Elimina os caracteres repetidos
                s[++i] = s[j];
                //break;
            }
        }
    }
    return 0;

}


