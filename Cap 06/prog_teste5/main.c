#include <stdio.h>
#include <stdlib.h>
#define LIM 3
/*
                            //Descrição da questão//

    Escreva um programa que leia dois vetores com 10 elementos cada
e gere um terceiro vetor de 20 elementos,
cujos valores deverão ser compostos pelos elementos intercalados dos dois outros vetores.
    Ao final o programa deverá mostrar os dois vetores originais
e o terceiro vetor com os valores intercalados.

    (V) - Funcionando?
*/
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                            //Protótipos das funções//

void funcao();
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo elementos
    int i, j, k;
    int vetor1[LIM] = {0};
    int vetor2[LIM] = {0};
    int vetor3[LIM * 2] = {0};

//------ Armazenando o input do usuário
    for(i = 0, j = 0; i < (2 * LIM); i++)
    {

//------//------ Primeira metade no vetor1
        if(i < LIM)
        {
            printf("Insira o %d numero inteiro: ", i+1);
            scanf(" %d", &vetor1[i]);
            //printf("Vetor1[%d]: %d\n", i, vetor1[i]); //Debug do vetor1
        }

//------//------ Segunda metade no vetor2
        else
        {
            printf("Insira o %d numero inteiro: ", i+1);
            scanf(" %d", &vetor2[j]);
            //printf("Vetor2[%d]: %d\n", j, vetor2[j]); //Debug do vetor2
            j++;
        }
    }

//------ Intercalando valores no vetor3
    for(i = 0, j = 0; i < (2 * LIM); i++)
    {
        if(i % 2 == 0)
        {
            vetor3[i] = vetor1[j];
            j++;
        }
        else
        {
            vetor3[i] = vetor2[k];
            k++;
        }

    }

//------ Impimindo os Vetores
    printf("\nVetor1:");
    for(i = 0; i < LIM; i++)
    {
        printf(" %d", vetor1[i]);
    }
    printf("\n");
    printf("\nVetor2:");
    for(i = 0; i < LIM; i++)
    {
        printf(" %d", vetor2[i]);
    }
    printf("\n");
    printf("\nVetor3:");
    for(i = 0; i < (2 * LIM); i++)
    {
        printf(" %d", vetor3[i]);
    }
    printf("\n");

//------ The End
    return 0;
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                            //Funções//

void funcao()
{

    return;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*                          //COMENTÀRIOS//

//(1)//
    Ex:
"Quando sair do if...incrementação seja = 0."

//(2)//
"..."

*/
