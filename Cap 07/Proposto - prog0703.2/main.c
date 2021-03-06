#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
----------------- DESCRI��O DA QUEST�O ------------------------------------------------------------------------------------------------------

 Implemente a fun��o abaixo que devolve o n-�simo caractere da string s.

        char n_esimo(char *s, int n)
        Ex:

        n_esimo("EraUmaVez", 1) --> E
        n_esimo("EraUmaVez", 3) --> a


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

char n_esimo(char *s, int n);
//------------------------------------- -----------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo elementos
    char *s = "EraUmaVez";
    int n;
//------ Armazenando o input do usu�rio
    while(1)
    {
        printf("Dada a string: \"%s\".\n", s);
        printf("Insira a posicao do caractere que deseja obter (1, 2, ..., n): ");
        scanf(" %d", &n);
        if(n > strlen(s) || n < 0)
                printf("\nPosicao inexistente na string.\nTente Novamente.\n\n");
        else
            break;
    }

//------ Imprimindo o resultado
    printf("return: %c\n", n_esimo(s, n));

//------ The End...?
    return 0;
}
//-------------- FUN��ES ---------------------------------------------------------------------------------------------------------------------

char n_esimo(char *s, int n)
{
    return s[n-1];
}


