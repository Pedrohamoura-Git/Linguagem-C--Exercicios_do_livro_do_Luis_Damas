#include <stdio.h>
#include <stdlib.h>
#define N 4
/*
                            //Descrição da questão//

 7.  (MAT 88) Dada uma seqüência de n números reais, determinar os números que compõem a seqüência e o número de vezes que cada um deles ocorre na mesma.

Exemplo: n = 8
Seqüência: -1.7,  3.0,  0.0,  1.5,  0.0, -1.7,  2.3, -1,7
Saída:       -1.7 ocorre 3 vezes
                   3.0 ocorre 1 vez
                   0.0 ocorre 2 vezes
                   1.5 ocorre 1 vez
                   2.3 ocorre 1 vez.

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

    float sequencia[N] = {0};
    float sequencia2[N] = {0};
    int quant_repeticoes[] = {0};
    int cont, flag, i, j, k;

//------ Armazenando o input do usuário

    printf("Limite de numeros: %d\n", N);
    for(i = 0; i < N; i++)
    {
        printf("Insira o %d numero real da sequencia: ", i+1);
        scanf(" %f", &sequencia[i]);
        sequencia2[i] = sequencia[i];
        //printf("Sequencia: %f\n", sequencia[i]); // Debug da sequencia
    }

//------ Conferindo a quantidade de repetições dos números

    for(i = 0; i < N; i++)
    {
        cont = 0;
        for(j = 0; j < N; j++)
        {
            if(sequencia[i] == sequencia[j])
            {
                cont++;
                //printf("\nCont: %d", cont); //Debug do interno do contador
            }
        }
        quant_repeticoes[i] = cont;
        //printf("\n%.2f aparece %dx", sequencia[i], quant_repeticoes[i]); //Debug do externo do contador

//------//------ Verificando se o mesmo número aparece mais de uma vez dentro da 'sequencia'
        if(i >= 1)
        {
            for(k = (i-1); k >= 0; k--)
            {
                flag = 0;
                if(sequencia[i] == sequencia[k])
                {
                    flag++;
                }
                printf("\ni: %d -- k: %d", i, k);
                //printf("\nSequencia[k] = %.1f", sequencia[k]);
                printf("\n%.1f -- %.1f -- flag: %d", sequencia[i], sequencia[k], flag);
                if(flag = 0)
                {
                    printf("\n%2.2f aparece %2dx", sequencia[i], quant_repeticoes[i]);
                }
           }
        }
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
    Ex:
    Verificar a quantidade de cada elemento da sequencia.
    Salvar os já verificados em uma lista.
    Se verificados[i] == sequencia[j] --> flag++.
    Se flag != 0 não imprimir o número na tela.
    Se flag == 0, imprimir verificado e quantidade.



//(2)//
"..."




    for(i = 0; i < N; i++)
    {
        //printf("\nDebug do %.2f\n", sequencia[i]);
        for(j = i + 1, cont = 0; j <= N; j++)
        {
            //printf("Posicao %d == posicao %d\n", i, j);
            if(sequencia[i] == sequencia[j])
            {
                cont++;
                //printf("contador: %d\n", cont); // Debug do contador
            }
            else
            {
                cont += 0;
                //printf("contador: %d\n", cont); // Debug do contador
            }
        }
        n_repetidos[i] = cont;
        //printf("N. %.2f repetidos: %d\n", sequencia[i], n_repetidos[i]); // Debug do n_repetidos

//------//------ Imprimindo o número de repetições por elemento na sequência
        printf("\n%.2f ", sequencia[i]);

//------//------ Saída personalizada a depender do Nº de repetições
        if(cont == 0)
        {
            printf("ocorre 0 vezes.\n");
        }
        if(cont == 1)
        {
            printf("ocorre 1 vez.\n");
        }
        else
        {
            printf("ocorrem %d vezes.\n", cont);
        }


    }


*/
