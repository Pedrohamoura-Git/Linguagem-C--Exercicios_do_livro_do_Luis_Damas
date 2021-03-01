#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
----------------- DESCRIÇÃO DA QUESTÃO ------------------------------------------------------------------------------------------------------

 Implemente a função abaixo que apaga todas as ocorrências do caractere ch na string s.

        char *strdelc(char *s, char ch)

 (!)Nota: Apagar um caractere não é substituí-lo por um espaço em branco, mas retirá-lo
efetivamente da string.


Funcionando?
    Sim - ()
    Não - (X)
----------------- COMENTÁRIOS ---------------------------------------------------------------------------------------------------------------
//(1)//
 Por algum motivo o loop para de funcionar quando o código s[j] = s[j+1]; é executado.
Sem ele todas as repetições são realizadas normalmente.

//(2)//
 "..."


---------------- PROTÓTIPOS DAS FUNÇÕES -----------------------------------------------------------------------------------------------------
*/

char *strdelc(char *s, char ch);
//------------------------------------- -----------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo elementos
    char *s = "12345";
    char ch;

//------ Armazenando o input do usuário
    printf("Dada a string: \"%s\"\nInsira qual caractere voce deseja remover: ", s);
    scanf(" %c", &ch);

//------ Imprimindo o resultado
    strdelc(s, ch);

//------ The End...?
    return 0;
}
//-------------- FUNÇÕES ---------------------------------------------------------------------------------------------------------------------

char *strdelc(char *s, char ch)
{
    int i, j, tam = strlen(s);
    //printf("tam: %d\n", tam); //Debug tam
//Loop para procurar o ch dentro da *s;
    for(i = 0; i < tam; i++)
    {
        //printf("i: %d\n", i); //Debug i
        if(s[i] == ch)
        {
            for(j = i; j < tam; j++)
            {
                printf("j: %d\n", j); //Debug j
                //(1)//s[j] = s[j+1];
                printf("s[j] = s[j+1] --> s[%d] = %c\n", j, s[j+1]);
            }
        }
    }
    return s;
}


