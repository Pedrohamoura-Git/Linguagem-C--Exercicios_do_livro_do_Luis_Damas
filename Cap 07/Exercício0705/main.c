#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
                            Descrição da questão

 Implemente a função abaixo que devolve o número de ocorrências do caractere ch na
string s.

            int strcountc(char *s, char ch)

    Ex:
    strcountc("abacate", 'a') --> 3
    strcountc("abacate", 'y') --> 0



    (V) - Funcionando?
*/
//-------------- PROTÓTIPOS DAS FUNÇÕES ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

int strcountc(char *s, char ch);
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo elementos
    char *s = "'Cos life, life is like a meme: if you take it to serious, you get a brain disease.";
    char *nome = "Moura, Pedro";
    char ch;
//------ Armazenando o input do usuário
    printf("Dado a string: \n\"%s\n %s.\"", s, nome);
    printf("\n\nQual letra voce deseja deseja conferir o numero de ocorrencia? ");
    scanf(" %c", &ch);
//------ Imprimindo o resultado
    printf("A letra '%c' aparece %dx na string.\n", ch, strcountc(s, ch));

//------ .The End...?
    return 0;
}
//-------------- FUNÇÕES -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

int strcountc(char *s, char ch)
{
    int i, cont;

    for(i = 0, cont = 0; s[i] != '\0'; i++)
    {
        if(s[i] == ch)
        {
            cont++;
        }
    }

    return cont;
}

//-------------- COMENTÀRIOS ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*

//(1)//
    Ex:
"Quando sair do if...incrementação seja = 0."

//(2)//
"..."

*/
