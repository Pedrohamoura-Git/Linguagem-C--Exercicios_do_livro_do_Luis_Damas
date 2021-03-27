#include <stdio.h>

/*
----------------- DESCRIÇÃO DA QUESTÃO ------------------------------------------------------------------------------------------------------

 Implemente a função abaixo que retorna o endereço de str1 em que ocorre pela primeira
vez a substring str2. Caso não exista, retorna NULL.

        char *strstr(char *str1, char *str2)


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

char    *strstr(char *str1, char *str2);
//------------------------------------- -----------------------------------------------------------------------------------------------------
int     main()
{
    printf("Hello, world!\n\n");

//------ Definindo elementos
    char str1[30];
    char str2[21];
    int *endereco = NULL;

//------ Armazenando o input do usuário
    printf("Insira a primeira string: ");
    gets(str1);
    printf("Insira a segunda string: ");
    gets(str2);

//------ Imprimindo o resultado
    endereco = strstr(str1, str2);
    if(endereco != 0)
    {
        printf("\nA substring 'str2' ocorre a primeira vez no endereco: %d\n", endereco);
        printf("%c\n", *endereco);
    }
    else
    {
        printf("\nNULL - Endereco inexistente.\n");
    }

//------ The End...?
    return 0;
}
//-------------- FUNÇÕES ---------------------------------------------------------------------------------------------------------------------

char    *strstr(char *str1, char *str2)
{
    int i, j;
    i = 0;
    j = 0;

    while(str1[i] != '\0')
    {
//Conferindo quando str2 aparece em str1.
        while(str1[i] == str2[j])
        {
            //printf("str1[%2d]: %c --> str2[%2d]: %c\n", i, str1[i], j, str2[j]); //Debug da str1, str2, i e j
            i++;
            j++;
//Se aparecer algum caractere diferente, j volta a apontar para o início de str2 e fecha o loop.
            if(str1[i] != str2[j])
            {
                j  = 0;
                break;
            }
            else
            {
//Se str2 chegar ao final, retorna o endereço aonde str2 aparece a primeira vez.
                if(str2[j] == '\0')
                {
                    return (&str1[(i-j)]);
                }
            }
//Se str2 não chegar ao final, reinicia o seu índice e começa a procurar de novo.
        }
        //printf("str1[%2d]: %c\n", i, str1[i]); //Debug do str1 e do i.
        i++;
    }
    return (0);
}


