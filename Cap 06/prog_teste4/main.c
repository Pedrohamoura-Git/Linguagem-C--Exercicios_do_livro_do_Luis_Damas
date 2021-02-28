#include <stdio.h>
#include <stdlib.h>
#define INDICE 20
/*
                            //Descrição da questão//

 Criar um vetor com 20 espaços os atribuindo valores em seguida.
Criar e imprimir um novo vetor com a posição dos elementos do original invertidas.

    (V) - Funcionando?
*/
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                            //Protótipos das funções//

void funcao();
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo variáveis
    int i=0, j=0;
    int Num[INDICE]={0};
    int Num_Inv[INDICE]={0}; //(1)//

//------ Armazenando o input do usuário
    for(i; i<INDICE; i++)
{
    printf("Insira o %d numero: ", i+1);
    scanf(" %d", &Num[i]);
}

//------ Invertendo os elementos dentro dos dois vetores
    for(i=0, j=INDICE-1; i<INDICE, j>-1; i++, j--)
    {
        Num_Inv[j] = Num[i];
    }

//------ Imprimindo o vetor invertido
    printf("\n");
    for(i=0; i<INDICE; i++)
    {
        printf("NUM: %2d --> NUM_INV: %2d\n", Num[i], Num_Inv[i]);
    }

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

 Esse vetor auxiliar poderia ser fácilmete substituido por uma variável inteira simples.
Assim, ao invés de armazenar todos os números 2 vezes (Num e Num_inv),
a variável armazenaria apenas 1 número por vez e o usaria para substituir dentro
do vetor Num.

//(2)//
"..."

*/
