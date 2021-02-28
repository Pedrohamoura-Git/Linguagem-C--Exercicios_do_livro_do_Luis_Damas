#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIM 3
/*
                            //Descrição da questão//

 Crie um programa que permite jogar o jogo da velha de forma que ele termine quando um
jogador complete alguma linha, coluna ou diagonal.


                if(coluna_cpu == rand()%LIM)
                {
                    printf("\nRepetido.");
                }
                linha_cpu = rand()%LIM;
                printf("\nlinha_cpu: CPU: %d", linha_cpu);
                if(linha_cpu == rand()%LIM)
                {
                    printf("\nRepetido.");
                }


    (V) - Funcionando?
*/
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                            //Variáveis globais//

    char velha[LIM][LIM] = {{' ', ' ', ' '},
                            {' ', ' ', ' '},
                            {' ', ' ', ' '}};
    int resultado = 0;
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                            //Protótipos das funções//

void Imprimir_Velha();
int Verificar_Vitoria_jogador();
int Verificar_Vitoria_CPU();
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");
    printf("Vamos jogar o jogo da velha!\n");
    printf("Voce controla o 'X'.\n");

//------ Definindo elementos
    int coluna = 0, coluna_cpu = 0, flag, i, j, linha = 0, linha_cpu = 0;

//------ Chamando a função da velha
    while(resultado == 0)
    {
        Imprimir_Velha(coluna, linha);
//------//------ Armazenando o imput do usuário
        flag = 0;
        while(flag == 0)
        {
            printf("\nInsira o numero da linha que deseja colocar o X: ");
            scanf(" %d", &linha);
            if(linha < 0 || linha >= 3)
            {
                printf("\nOpcao Invalida!\nTente novamente.\n");
            }
            else
            {
                flag = 1;
                    //printf("flag: %d\n", flag);
            }
        }
        flag = 0;
        while(flag == 0)
        {
            printf("Insira o numero da coluna que deseja colocar o X: ");
            scanf(" %d", &coluna);
            if(coluna < 0 || coluna >= 3)
            {
                printf("\nOpcao Invalida!\nTente novamente.\n");
            }
            else
            {
                velha[linha][coluna] = 'X';
                flag = 1;
                //printf("flag: %d\n", flag);
            }
        }
    }
//------//------ Gerando jogada da CPU
//! Não permitir que a CPU subsitua um 'X' ou 'O' existente !
            srand(time(NULL));
            for(j = 0; j < 1; j++)
            {
                flag = 0;
                while(flag == 0)
                {
                    coluna_cpu = rand()%LIM;
                    //printf("\ncoluna_cpu: CPU: %d", coluna_cpu);
                    linha_cpu = rand()%LIM;
                    //printf("\nlinha_cpu: CPU: %d", linha_cpu);
//------//------ Verificando se o espaço selecionado está vazio
                    if(velha[linha_cpu][coluna_cpu] == ' ')
                    {
                        velha[linha_cpu][coluna_cpu] = 'O';
                        flag = 1;
                    }
                    //printf("\nflag_cpu: %d\n", flag);
                }
            }


//------//------ Verificando vitória do jogador
        Verificar_Vitoria_jogador();
        //printf("\nResultado: %d", resultado);
        if(resultado == 1)
        {
            Imprimir_Velha(coluna, linha);
            printf("\nParabens! Voce ganhou!\n");
        }

//------//------  Verificando vitória da CPU
        Verificar_Vitoria_CPU();
        //printf("\nResultado: %d", resultado);
        if(resultado == 2)
        {
            Imprimir_Velha(coluna, linha);
            printf("\nQue pena! A CPU ganhou...!\n");
        }
    }

//------ The end...?

    return 0;
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                            //Funções//

void Imprimir_Velha()
{
//------ Definindo elementos
    int i, j;


//------ Imprimindo Layout
    printf("\n\n          Colunas\n");
    printf("         %d   %d   %d\n", 0, 1, 2);
    printf("         |   |   |\n");
    printf("         v   v   v\n");

    printf("Linhas\n");
    for(i = 0; i < LIM; i++)
        {
            printf(" %d -->", i);
            for(j = 0; j < LIM; j++)
            {
                if(j != LIM)
                {
                    printf(" |");
                }
//------//------ Imprimindo os elementos dentro do vetor
                printf(" %c", velha[i][j]);

//------ Imprimindo Layout
                if(j == LIM - 1)
                {
                    printf(" |\n");
                }
            }
        }

    return;
}

int Verificar_Vitoria_jogador()
{

//------ Verificando vitória por Linhas
//------//------ Linha 0 - Colunas variáveis
    if(velha[0][0] == 'X' && velha[0][1] == 'X' && velha[0][2] == 'X')
    {
        return resultado = 1;
    }
//------//------ Linha 1 - Colunas variáveis
    if(velha[1][0] == 'X' && velha[1][1] == 'X' && velha[1][2] == 'X')
    {
        return resultado = 1;
    }
//------//------ Linha 2 - Colunas variáveis
    if(velha[2][0] == 'X' && velha[2][1] == 'X' && velha[2][2] == 'X')
    {
        return resultado = 1;
    }

//------ Verificando vitória por Colunas
//------//------ Coluna 0 - Linhas variáveis
    if(velha[0][0] == 'X' && velha[1][0] == 'X' && velha[2][0] == 'X')
    {
        return resultado = 1;
    }
//------//------ Coluna 1 - Linhas variáveis
    if(velha[0][1] == 'X' && velha[1][1] == 'X' && velha[2][1] == 'X')
    {
        return resultado = 1;
    }
//------//------ Coluna 2 - Linhas variáveis
    if(velha[0][2] == 'X' && velha[1][2] == 'X' && velha[2][2] == 'X')
    {
        return resultado = 1;
    }

//------ Verificando vitória por Diagonais
//------//------ Linhas e colunas de 0 a 2
    if(velha[0][0] == 'X' && velha[1][1] == 'X' && velha[2][2] == 'X')
    {
        return resultado = 1;
    }
//------//------ Linhas e colunas de 2 a 2
    if(velha[0][2] == 'X' && velha[1][1] == 'X' && velha[2][0] == 'X')
    {
        return resultado = 1;
    }
}

int Verificar_Vitoria_CPU()
{
//------ Verificando vitória por Linhas
//------//------ Linha 0 - Colunas variáveis
    if(velha[0][0] == 'O' && velha[0][1] == 'O' && velha[0][2] == 'O')
    {
        return resultado = 2;
    }
//------//------ Linha 1 - Colunas variáveis
    if(velha[1][0] == 'O' && velha[1][1] == 'O' && velha[1][2] == 'O')
    {
        return resultado = 2;
    }
//------//------ Linha 2 - Colunas variáveis
    if(velha[2][0] == 'O' && velha[2][1] == 'O' && velha[2][2] == 'O')
    {
        return resultado = 2;
    }

//------ Verificando vitória por Colunas
//------//------ Coluna 0 - Linhas variáveis
    if(velha[0][0] == 'O' && velha[1][0] == 'O' && velha[2][0] == 'O')
    {
        return resultado = 2;
    }
//------//------ Coluna 1 - Linhas variáveis
    if(velha[0][1] == 'O' && velha[1][1] == 'O' && velha[2][1] == 'O')
    {
        return resultado = 2;
    }
//------//------ Coluna 2 - Linhas variáveis
    if(velha[0][2] == 'O' && velha[1][2] == 'O' && velha[2][2] == 'O')
    {
        return resultado = 2;
    }

//------ Verificando vitória por Diagonais
//------//------ Linhas e colunas de 0 a 2
    if(velha[0][0] == 'O' && velha[1][1] == 'O' && velha[2][2] == 'O')
    {
        return resultado = 2;
    }
//------//------ Linhas e colunas de 2 a 2
    if(velha[0][2] == 'O' && velha[1][1] == 'O' && velha[2][0] == 'O')
    {
        return resultado = 2;
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
