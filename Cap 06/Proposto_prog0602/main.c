#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
/*
                            //Descrição da questão//

    float max(float v[], int n)
A função recebe um vetor de números reais e o número de elementos a considerar.
Retornar o maior número entre os n primeiros elementos do vetor.


    (V) - Funcionando?
*/
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                            //Protótipos das funções//

float max(float v[], int n);

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo variáveis
    float v[TAM] = {0};
    int i, n;

//------ Plantando a semente da função rand()
    srand(time(NULL));

//------ Gerando os números reais aleatórios
    for(i = 0; i < TAM; i++)
    {
        v[i] = rand()%TAM;
        printf("v[%d] = %.1f\n", i, v[i]); //Debug do vetor v[i]
    }

//------ Armazenando o Input do usuário
    printf("Quantos numeros deseja considerar? ");
    scanf(" %d", &n);

//------ Chamando a função
    printf("O maior dos %d primeiros elementos = %.2f\n", n, max(v, n));

    return 0;
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                            //Funções//

float max(float v[], int n)
{
//------ Definindo variáveis
    int i;
    float maior = 0;

//------ Obtendo maior número
    for(i = 1; i < n; i++)
    {
        if(v[i] > maior)
        {
            maior = v[i];
            //printf("Maior: %.2f\n", maior); //Debug do maior
        }
    }

//------ retornando valor encontrado
    return maior;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*                          //COMENTÀRIOS//

//(1)//
    Ex:
"Quando sair do if...incrementação seja = 0."

//(2)//
"..."

*/
