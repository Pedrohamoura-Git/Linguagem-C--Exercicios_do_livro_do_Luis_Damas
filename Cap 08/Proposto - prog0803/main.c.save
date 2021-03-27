#include <stdio.h>

/*
----------------- DESCRIÇÃO DA QUESTÃO ------------------------------------------------------------------------------------------------------

 Implemente a função abaixo que retorna o endereço da última ocorrência de ch em s; caso
não exista, retornar NULL. Note que é o endereço, não o ìndice.

        char *strrchr(char *s, char ch)

 EXTRA: Escreva um programa que solicite um nome completo e escreva na tela apenas o
sobrenome.

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

char *strrchr(char *s, char ch);
void *sobrenome(char *s);
//------------------------------------- -----------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo elementos
    char str[50], ch;
    int *endereco = NULL;

//------ Armazenando o input do usuário
    printf("Insira o seu nome completo: ");
    gets(str);
    printf("Insira o caractere desejado para analise: ");
    scanf(" %c", &ch);

//------ Imprimindo o resultado
    endereco = strrchr(str, ch);
    if(endereco != 0)
    {
        printf("\nO caractere '%c' aparece pela ultima vez no endereco: %d\n", ch, endereco);
    }
    else
    {
        printf("\nNULL - Caractere inexistente na string.\n");
    }
    sobrenome(str);

//------ The End...?
    return 0;
}
//-------------- FUNÇÕES ---------------------------------------------------------------------------------------------------------------------

char    *strrchr(char *s, char ch)
{
    int tam = strlen(s);
    while(tam >= 0)
    {
        //printf("tam: %d\n", tam);
        //printf("%c --> %d\n", s[tam], &s[tam]);
        if(s[tam] == ch)
        {
            return &s[tam];
        }
        tam--;
    }
    return 0;
}

void    *sobrenome(char *s)
{
    int tam_i = strlen(s) - 1, tam_f = tam_i; //Retirando o caractere delimitador.

    //printf("tam_i: %2d | &tam_i: %2d\n", tam_f, &tam_f);
    while(tam_f >= 0)
    {
        //printf("%c --> %2d\n", s[tam_f], &s[tam_f]);
        if(s[tam_f] == ' ')
        {
            //printf("%2d\n", &s[tam_f]);
            tam_f++; //Retirando o espaço em branco.
            break;
        }
        else
        {
            tam_f--;
        }
    }
    printf("\nSobrenome: ");
    while(tam_f <= tam_i)
    {
        printf("%c", s[tam_f]);
        tam_f++;
    }
    printf("\nFim da analise.\n");
}
