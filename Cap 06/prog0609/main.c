#include <stdio.h>
#include <stdlib.h>
#define NUM_SENA 49
/*
#define APOSTA_MIN 6
#define APOSTA_MAX 49
*/
/*
                            //Descrição da questão//

 Escreva um programa que permita gerar uma jogada para um tipo de sena,
indicando os números a apostar, os quais deverão ser criados aleatoriamente.



    (X) - Funcionando?
 Porquê? - Não consegui fazer os números serem gerados automaticamente.
*/
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                            //Protótipos das funções//

void funcao();
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main()
{
    printf("Vamos jogar uma sena!\n\n");

//------ Definindo variáveis
    int aposta_usuario, i = 1;

//------ Imprimindo Sena
    for(i; i <= NUM_SENA; i++)
    {
        printf("%2d ", i);
//------//------ Saltando uma linha
        if(i % 7 == 0)
        {
            printf("\n");
        }
    }

//------ Laço para Armazenar o Input do usuário
    aposta_usuario = -1; //(1)//
    while(aposta_usuario != 0)
    {
        printf("\nQuantos numeros quer apostar? (0 - Terminar)\n");
        printf("Numeros: ");
        scanf(" %d", &aposta_usuario);
//------//------ Valor do Input MENOR do que o permitido
        if(aposta_usuario < 6)
        {
            printf("\nAposta MINIMA = 6");
            printf("\nTente novamente.\n");
        }
//------//------ Valor do Input MAIOR do que o permitido
        if(aposta_usuario > 49)
        {
            printf("\nAposta MAXIMA = 49");
            printf("\nTente novamente.\n");
        }
    }

//------ ...

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

aposta_usuario = -1 para que o laço while seja executado ao menos 1x
antes de receber o input do usuário.

//(2)//
"..."

*/
