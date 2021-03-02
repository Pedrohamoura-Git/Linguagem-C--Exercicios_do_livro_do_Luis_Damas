#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
----------------- DESCRIÇÃO DA QUESTÃO ------------------------------------------------------------------------------------------------------

 Implemente a função abaixo que devolve o último índice em que encontrou o caractere 'c'
em *s. Caso não exista, devolve -1.

        int ult_ind(char *s, char c)

        Ex:
        ult_ind_chr("alface", 'a') --> 3
        ult_ind_chr("alface", 'g') --> -1


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

int ult_ind(char *s, char c);
//------------------------------------- -----------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo elementos
    char *s = "alface, cebola e tudo que ha de bom.";
    char c;

//------ Armazenando o input do usuário
    printf("Dada a string: \"%s\".\n", s);
    printf("Insira o caractere que voce deseja saber o ultimo indice (diferencie maiusculo de minusculo): ");
    scanf(" %c", &c);

//------ Imprimindo o resultado
    switch(ult_ind(s, c))
    {
        case -1:
            {
                printf("'%c' nao existe na string.\n", c);
                break;
            }
        default:
            {
                printf("'%c' aparece a ultima vez no indice: %d\n", c, ult_ind(s, c));
                break;
            }
    }

//------ The End...?
    return 0;
}
//-------------- FUNÇÕES ---------------------------------------------------------------------------------------------------------------------

int ult_ind(char *s, char c)
{
    int i = 0, cont = -1;

    for(; s[i] != '\0'; i++)
    {
        if(s[i] == c)
        {
            cont = i;
        }
    }
    return cont;
}


