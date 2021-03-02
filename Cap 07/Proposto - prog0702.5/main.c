#include <stdio.h>
#include <stdlib.h>

#include <ctype.h>

/*
----------------- DESCRIÇÃO DA QUESTÃO ------------------------------------------------------------------------------------------------------

 Implemente a função abaixo que coloca o caractere 'ch' apenas nas primeiras n posições
da string s. Se n > strlen(s), então n recebe o valor de strlen(s).

        char *strnset(char *s, char ch, int n);


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
char *strnset(char *s, char ch, int n);
//------------------------------------- -----------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo elementos
    char *s = "PoofselfjJ@Jfn";
    char ch;
    int n;

//------ Armazenando o input do usuário
    printf("Dada a string: \"%s\".\n", s);
    printf("Insira o ch: ");
    scanf(" %c", &ch);
    printf("Agora insira o n: ");
    scanf(" %d", &n);

//------ Imprimindo o resultado
    printf("Nova string: \"%s\".\n", strnset(s, ch, n));

//------ The End...?
    return 0;
}
//-------------- FUNÇÕES ---------------------------------------------------------------------------------------------------------------------
char *strnset(char *s, char ch, int n)
{
    int i;

    for(i = 0; s[i] != '\0' && i < n; i++)
    {
        printf("i: %d\n", i);
        s[i] = ch;
    }
    return s;
}


