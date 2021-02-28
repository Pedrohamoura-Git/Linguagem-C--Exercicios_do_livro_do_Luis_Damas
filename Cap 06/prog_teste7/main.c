#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIM 6
/*
                            //Descrição da questão//

Escreva um programa que leia um vetor de 100 elementos.
O programa deve informar a quantidade de números ímpares existentes no vetor.
Os  valores armazenados no vetor serão gerados pelo  computador.

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
    int i = 0, quant_impares = 0;
    int vetor[LIM] = {0};

//------ Randomizando a semente
    srand(time(NULL)); //(2)//

//------ Atribuindo números aleatórios ao vetor
    for(i = 0; i < LIM; i++)
    {
        vetor[i] = rand()%LIM; //(1)//
        //printf("%d ", vetor[i]); //Debug do vetor
    }

//------ Identificando e contando os números ímpares
    for(i = 0; i < LIM; i++)
    {
        if(vetor[i] % 2 != 0)
        {
            quant_impares++;
            //printf("\nImpar: %d", vetor[i]); //Debug números ímpares
        }
    }

//------ Impimindo os Valores
    printf("\nQuantidade de numeros impares informados: %d\n", quant_impares);

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
 Quando for necessário definir um valor máximo para a geração do número aleatório,
pode-se fazer isso utilizando '% num' junto a função rand() - responsável por gerar
os números aleatório -, porque o resto da divisão de qualquer número por 'num' vai
gerar um número menor que o máximo definido 'num'.

    Ex - Qualquer número menor que 3:
    vetor[i] = rand()%3;
Saída: Entre 0 e 2

    Ex2 - Qualquer número menor que 10:
    vetor[i] = rand()%6;
Saída: Entre 0 e 9

    Ex3 Qualquer número entre 1 e 6:
    vetor[i] = rand()%6 + 1;
Saída: Entre 1 e 6

                                    !!!

 O Problema é que os números gerados serão sempre iguais, sempre que o programa for
executado porque ele está gerando os número aleatórios a partir da mesma semente.
 É necessário, portanto, também randomizar a semente á qual a função rand()
está associada.

//(2)//
 A função srand() serve para plantar uma nova semente de referência para a função rand().
Mas, como o número gerado é sempre baseado na semente, é necessário então também
randomizá-la para que rand() gere números diferentes sempre que chamada. Para tal,
uma tática efetica é incluir a biblioteca <time.h> e chamar a função time(NULL) que
gera um segundo aleatório desde 01/01/1970 até o momento atual - desde que atribuida
com o parâmetro NULL.
 Logo, ao associar a função time(NULL) com a função srand(), é possível gerar uma semente
aleatória, porém finita, sempre que as funções srand() e, por consequência, rand() foram
chamadas.

Referência: https://www.youtube.com/watch?v=FvsKVLqvWWg&feature=youtu.be
*/
