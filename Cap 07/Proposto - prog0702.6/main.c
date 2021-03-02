#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
----------------- DESCRIÇÃO DA QUESTÃO ------------------------------------------------------------------------------------------------------

 Implemente a função abaixo que faz o mesmo que a função strcmp, mas realiza a comparação
ignorando se os caracteres estão em maiúsculas ou minúsculas (ignore case).

        int stricmp(char *s1, char *s2)


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

int stricmp(char *s1, char *s2);
//------------------------------------- -----------------------------------------------------------------------------------------------------
int main()
{
int stricmp(char *s1, char *s2);

//------ Definindo elementos
    char *s1 = "Pedro";
    char *s2 = "Pedru";
//------ Armazenando o input do usuário

//------ Imprimindo o resultado
    printf("Result: %d\n", stricmp(s1, s2));

//------ The End...?
    return 0;
}
//-------------- FUNÇÕES ---------------------------------------------------------------------------------------------------------------------

int stricmp(char *s1, char *s2)
{
    int i = 0;

    while(tolower(s1[i]) == tolower(s2[i] && s1 != '\0')
            i++;
    return (tolower(s1[i]) - tolower(s2[i]);
}


