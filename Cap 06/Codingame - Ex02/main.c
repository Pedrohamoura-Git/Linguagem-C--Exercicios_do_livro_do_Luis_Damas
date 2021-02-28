#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
                            //Descrição da questão//

 O programa deverá ler o número da linha e da coluna,
correspondente ao produto no armazém, e a quantidade a ser retirada do estoque.
 Caso a quantidade solicitada for menor ou igual a quantidade em estoque,
o programa deverá emitir uma mensagem de atendimento e dar baixa no estoque.
 Do contrário, emitir mensagem,
"Estoque com quantidade insuficiente para atender ao pedido".
 O programa termina quando o número da linha for igual a -1.
Utilize a declaração abaixo para resolver o exercício:

    int estoque[5][5]= {{150,0,100,150,200},
    {200,300,230,100,90}, {250,300,0,200,150},
    {300,100,90,450,0},{350,300,400,250,200}};





    (V) - Funcionando?
*/
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                            //Protótipos das funções//


//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo variáveis
    int armazem, i, j, produto, quantidade, resposta;
    int estoque[5][5]= {{150,0,100,150,200},
    {200,300,230,100,90}, {250,300,0,200,150},
    {300,100,90,450,0},{350,300,400,250,200}};

//------ Imprimindo a tabela
    while(resposta != -1)
    {

//------//------ Layout da tabela
    printf("                       Produto");
    printf("\n\n");
    printf("                0    1    2    3    4\n");
    printf("                |    |    |    |    |\n");
    printf("                v    v    v    v    v\n");
    printf("               ");
    for(j = 0; j < 24; j++)
    {
        printf("_");
    }
    printf("\n");

//------//------ Imprimindo as linha do vetor 'estoque[i][]'
    for(i = 0; i < 5; i++)
    {

//------//------ Imprimindo as colunas do vetor 'estoque[i][j]'
        printf("\nArmazem %d --> ", i);
        for(j = 0; j < 5; j++)
        {
            printf(" %3d|", estoque[i][j]);
        }
        printf("\n               ");
        for(j = 0; j < 24; j++)
        {
            printf("_");
        }
        printf("\n");
    }

//------ Armazenando o input do usuário
    printf("\n\nInsira o numero do produto a ser retirado: ");
    scanf(" %d", &produto);
    printf("Insira o numero do armazem a ser retirado: ");
    scanf(" %d", &armazem);
    printf("\nQuantidade disponivel: %d", estoque[armazem][produto]);
    printf("\nQuantos deseja retirar? ");
    scanf(" %d", &quantidade);

//------ Conferindo se existe a quantidade informada no estoque
    if(quantidade > 0 && quantidade <= estoque[armazem][produto])
    {
        printf("\nSeparado para retirada.\nEstoque disponivel: %d\n", (estoque[armazem][produto] - quantidade));
    }
    else
    {
        printf("\nEstoque em quantidade insuficiente para atender ao pedido.\n");
    }

//------ Acrescentando a nova quantidade do produto no estoque
    estoque[armazem][produto] -= quantidade;

//------ Menu: continuar ou sair
    printf("\nDeseja retirar mais algum produto?");
    printf("\nSim = Qualquer numero  |  Nao = -1");
    printf("\nResposta: ");
    scanf(" %d", &resposta);
    }

//------ The End
    return 0;
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                            //Funções//


//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*                          //COMENTÀRIOS//

//(1)//
    Ex:
"Quando sair do if...incrementação seja = 0."

//(2)//
"..."

*/
