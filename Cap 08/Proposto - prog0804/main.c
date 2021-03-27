#include <stdio.h>

/*
----------------- DESCRI��O DA QUEST�O ------------------------------------------------------------------------------------------------------

 Implemente a fun��o abaixo que retorna o endere�o de str1 em que ocorre pela primeira
vez a substring str2. Caso n�o exista, retorna NULL.

        char *strstr(char *str1, char *str2)


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

char    *strstr(char *str1, char *str2);
//------------------------------------- -----------------------------------------------------------------------------------------------------
int     main()
{
    printf("Hello, world!\n\n");

//------ Definindo elementos
    char str1[30];
    char str2[21];
    int *endereco = NULL;

//------ Armazenando o input do usu�rio
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
//-------------- FUN��ES ---------------------------------------------------------------------------------------------------------------------

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
//Se aparecer algum caractere diferente, j volta a apontar para o in�cio de str2 e fecha o loop.
            if(str1[i] != str2[j])
            {
                j  = 0;
                break;
            }
            else
            {
//Se str2 chegar ao final, retorna o endere�o aonde str2 aparece a primeira vez.
                if(str2[j] == '\0')
                {
                    return (&str1[(i-j)]);
                }
            }
//Se str2 n�o chegar ao final, reinicia o seu �ndice e come�a a procurar de novo.
        }
        //printf("str1[%2d]: %c\n", i, str1[i]); //Debug do str1 e do i.
        i++;
    }
    return (0);
}


