#include <stdio.h>
#include <stdlib.h>
#define LIM 5
/*
                            //Descrição da questão//

Escreva um programa que receba do usuário um vetor com 20 valores inteiros
e apresente o maior, o menor e suas respectivas posições em que os mesmos
foram informados.
Caso existam números iguais mostre a posição da primeira ocorrência.

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
    int i = 0, j = 0, maior = 0, menor = 0, posicao_maior = 0, posicao_menor = 0;
    int vetor[LIM] = {0};

//------ Armazenando o input do usuário
    for(i = 0; i < LIM; i++)
    {
        printf("Insira o %d numero: ", i+1);
        scanf(" %d", &vetor[i]);
    }

//------//------ Procurando o maior e menor valor e suas posições
    maior = vetor[0];
    menor = vetor[0];
    for(i = 1; i < LIM; i++)
    {
        if(vetor[i] > maior)
        {
            maior = vetor[i];
            posicao_maior = i;
        }
        if(vetor[i] < menor)
        {
            menor = vetor[i];
            posicao_menor = i;
        }
    }
//------ Impimindo os Valores
    printf("\nMaior valor: %d", maior);
    printf("\nPosicao: %d", posicao_maior);
    printf("\nMenor valor: %d", menor);
    printf("\nPosicao: %d", posicao_menor);


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
