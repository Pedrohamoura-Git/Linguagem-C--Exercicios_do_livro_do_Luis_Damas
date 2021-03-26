#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
----------------- DESCRIÇÃO DA QUESTÃO ------------------------------------------------------------------------------------------------------

 Implemente a função abaixo que retorna o endereço da primeira ocorrência de ch em s,
caso não exista, retornar NULL. Note que é endereço, não índice.


        char *strchr(char *s, char ch)


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

char *strchr(char *s, char ch);
//------------------------------------- -----------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo elementos
    char nome[50], ch;
    int *endereco = NULL;

//------ Armazenando o input do usuário
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
//-------------- FUNÇÕES ---------------------------------------------------------------------------------------------------------------------

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


