#include <stdio.h>
#include <stdlib.h>
/*
                        //Descrição da questão//

    Leia um vetor de 16 posições e troque os 8 primeiros valores pelos 8 últimos e vice e versa.
Escreva ao final o vetor obtido.

*/
//---------------------------------------------------------------------------------------
                       //Protótipos das funções//

//---------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");
//------ Definindo variáveis
    int i, j;
    int vetor4[16], vetor4_inv[16] = {0};
//------ Armazenando o input do usuário
    for(i = 0; i <= 15; i++)
    {
        printf("Insira o %d valor: ", i+1);
        scanf(" %d", &vetor4[i]);
    }
//------ Primeira metade do vetor4 na última metade do vetor invetido
    for(i = 15, j = 7; i <= 7, j >=15; i--, j++)
    {
        vetor4_inv[i] = vetor4[j];
    }
//------ Última metade do vetor4 na primeira metade do vetor invetido
    for(i = 0, j = 15; i <= 7, j >= 0; i++, j--)
    {
        vetor4_inv[i] = vetor4[j];
    }
//------ Imprimindo os dois vetores
    printf("\nVetor inicial --> Vetor invertido\n");
    for(i = 0; i <= 15; i++)
    {
        printf("\n%6d     -->     %8d\n", vetor4[i], vetor4_inv[i]);
    }
    return 0;
}
//---------------------------------------------------------------------------------------
