#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 5
/*
                            //Descrição da questão//

    void transpor(int v[MAX][MAX])
A função transpõe a matriz v com MAX por MAX elementos, ou seja, transpor os elementos
do primeiro MAX para o segundo MAX e vice-versa.


    (V) - Funcionando?
*/
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                            //Protótipos das funções//

void transpor(int v[MAX][MAX]);
void imprime(int v[][MAX]);

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo variáveis
    int v[MAX][MAX] = {0};
    int v_aux[MAX] = {0};
    int i, j;

//------ Plantando a semente da função rand()
    srand(time(NULL));

//------ Gerando os números reais aleatórios para v[i][0]
    printf("v[i][0]\n\n");
    for(i = 0; i < MAX; i++)
    {
        //printf("v[%d][0] - Insira o %d numero: ", i, i+1);
        //scanf(" %d", &v[i][0]);
        v[i][0] = rand()%MAX;
        printf("v[%d][%d] = %d\n", i, 0, v[i][0]); //Debug do vetor v[i]

    }
//------ Gerando os números reais aleatórios para v[0][j]
    printf("\nv[0][j]\n\n");
    for(j = 1; j < MAX; j++)
    {
        v[0][j] = rand()%MAX;
        printf("v[%d][%d] = %d\n",0, j, v[0][j]); //Debug do vetor v[j]
    }

//------ Imprimindo o vetor transposto
    imprime(v);
    transpor(v);



//------ The End
    return 0;
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                            //Funções//

void transpor(int v[MAX][MAX])
{
//------ Definindo variáveis
    int i = 0, j = 0;
    int v_aux[MAX] = {0};

//------ Transpondo a primeira metade de v[MAX][MAX]
    //putchar('\n');
//------//------ Armazenando a segunda dimensão do vetor v no v_aux
    for(j = 0; j < MAX; j++)
    {
        v_aux[j] = v[0][j];
        //printf("v[%d][%d] = %d\n", 0, j, v[0][j]);
        //printf("v_aux[%d] = %d\n", j, v_aux[j]);
    }
//------//------ Copiando a primeira dimensão para a segunda dimensão do vetor v
    //putchar('\n');
    for(i = 1, j = 1; i < MAX; i++, j++)
    {
        v[0][j] = v[i][0];
        //printf("v[0][%d] = v[%d][0] --> v[0][%d] = %d\n", j, i, j, v[0][j]);

    }

//------ Transpondo a segunda metade de v[MAX][MAX]
    //putchar('\n');
//------//------ Copiando o vetor v_aux para a primeira dimensão do vetor v
    for(i = 1; i < MAX; i++)
    {
        v[i][0] = v_aux[i];
        //printf("v[%d][0] = v_aux[%d] --> v[%d][0] = %d\n", i, i, i, v_aux[i]);
    }

//------ retornando valor encontrado
    return;
}

void imprime(int v[][MAX])
{
    int i, j;
    for(i = 0; i < MAX; i++)
    {
        for(j = 0; j < MAX; j++)
        {
            printf("%d ", v[i][j]);
            putchar('\n');
        }
    }
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*                          //COMENTÀRIOS//

//(1)//
    Ex:
"Quando sair do if...incrementação seja = 0."

//(2)//
"..."

*/
