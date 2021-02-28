#include <stdio.h>
#include <stdlib.h>

#define LIM 4
/*
                            Descrição da questão

 int memcmp(char *s1, char *s2, int n)

 Implemente a função acima que verifica se as n primeiras posições dos vetores s1 e s2
são ou não iguais.


    (V) - Funcionando?
*/
//-------------- PROTÓTIPOS DAS FUNÇÕES ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


int memcmp(char *s1, char *s2, int n);
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo elementos
    char s1[LIM], s2[LIM];
    int i, n = -1;


//------ Armazenando o input do usuário
    for(i = 0; i < LIM; i++)
    {
        printf("Insira o %d caractere do vetor s1:  ", i+1);
        scanf(" %c", &s1[i]);
        //printf("s1[%d]: %c\n", i, s1[i]);
    }
    putchar('\n');
    for(i = 0; i < LIM; i++)
    {
        printf("Insira o %d caractere do vetor s2:  ", i+1);
        scanf(" %c", &s2[i]);
        //printf("s2[%d]: %c\n", i, s2[i]);
    }
    while(n < 0 || n > LIM)
    {
        printf("\nInsira a quantidade de caracteres que deseja verificar: ");
        scanf(" %d", &n);
        if(n < 0 || n > LIM)
        {
            printf("\nO valor deve ser entre 0 e %d.\nTente novamente.\n", LIM);
        }
    }

//------ Verificando se os n primeiro caracteres dos vetores s1 e s2 são iguais
    if(memcmp(s1, s2, n) == 1)
    {
        printf("\nO %d primeiros elementos dentro de ambos os vetores sao iguais.\n", n);
    }
    else
    {
        printf("\nQuando comparados, os ambos os vetores possuem caracteres diferentes.\n");
    }

    return 0;
}
//-------------- FUNÇÕES -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

int memcmp(char *s1, char *s2, int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(s1[i] != s2[i])
        {
            return 0;
        }
    }
    return 1;
}

//-------------- COMENTÀRIOS ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*

//(1)//
    Ex:
"Quando sair do if...incrementação seja = 0."

//(2)//
"..."

*/

