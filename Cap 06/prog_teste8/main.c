#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
/*
                            //Descrição da questão//

 Dadas as temperaturas que foram registradas diariamente durante uma semana,
deseja-se determinar em quantos dias dessa semana a temperatura esteve acima da média
destas temperaturas.
Escreva um programa (utilizando vetores) para calcular esta informação.


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
    float temperaturas[TAM] = {0};
    float media = 0;
    int acima_media = 0, i;

//------ Plantando a semente da função rand()
    srand(time(NULL));

//------ Gerando aleatoriamente as temperaturas
    for(i = 0; i < TAM; i++)
    {
        temperaturas[i] = rand()%TAM;
        //printf("Temperaturas: %.1f\n", temperaturas[i]); //Debug temperaturas
        media += temperaturas[i];
    }

//------ Calculando a média e conferindo as temperaturas acima da média
    media = media / TAM;
    for(i = 0; i < TAM; i++)
    {
        if(temperaturas[i] > media)
        {
            acima_media++;
        }
    }

//------ Imprimindo o resultado
    printf("Media: %.1f\nTemperaturas acima da media: %d", media, acima_media);

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
