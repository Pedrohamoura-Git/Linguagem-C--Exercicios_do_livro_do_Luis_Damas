#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
----------------- DESCRI��O DA QUEST�O ------------------------------------------------------------------------------------------------------

 Implemente a fun��o abaixo que retorna o endere�o da primeira ocorr�ncia de ch em s,
caso n�o exista, retornar NULL. Note que � endere�o, n�o �ndice.


        char *strchr(char *s, char ch)


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

char *strchr(char *s, char ch);
//------------------------------------- -----------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo elementos
    char nome[50], ch;
    int *endereco = NULL;

//------ Armazenando o input do usu�rio
    printf("Insira seu nome: ");
    gets(nome);
    printf("Agora insira o caractere que deseja analisar: ");
    scanf(" %c", &ch);
    //printf("nome: %s\ncaractere: %c\n", nome, ch);
//------ Imprimindo o resultado
    endereco = strchr(nome, ch);
    if(endereco != 0)
    {
        printf("\nO caractere '%c' aparece a primeira vez no endereco: %d", ch, endereco);
    }
    else
    {
        printf("\nNULL - Caractere inexistente na string.\n");
    }

//------ The End...?
    return 0;
}
//-------------- FUN��ES ---------------------------------------------------------------------------------------------------------------------

char *strchr(char *s, char ch)
{
    while(*s != '\0')
    {
        if(*s == ch)
        {
            return s;
        }
        s++;
    }
    return NULL;
}


