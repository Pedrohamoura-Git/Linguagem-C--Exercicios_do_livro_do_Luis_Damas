#include <stdio.h>
#include <stdlib.h>
/*
Devolver o VAL para n anos, à taxa t, definido através da equação:
    VAL = x/(1 + t) +  ...  + x/(1 + t)^n
*/
float pot(int n, float x, float t);

int main()
{
    printf("Hello world!\n\n");

    float x, t; //(1)//
    float VAL, div, mult, res_pot; //(2)//
    int cont, cont2; //(3)//
    int n; //(4)//

    //(5)//
    printf("VAL = x/(1 + t) +  ...  + x/(1 + t)^n");
    printf("\n\nInsira o x: ");
    scanf(" %f", &x);
    printf("\nInsira o t: ");
    scanf(" %f", &t);
    printf("\nInsira o n: ");
    scanf(" %d", &n);

    //(6)//
    for(cont = 1; cont <= n; cont ++)
    {
        //(7)//
        for(div = 0, cont2 = 1, mult = 1; cont2 <= cont; cont2 ++)
        {
            res_pot = pot(cont2, x, t); //(8)//
            //!(8.1)!//
            div = x / res_pot; //(9)//
        }
            VAL += div; //(10)//
            printf("\n%d - Ciclo:", cont);
            printf("\nres_pot = %f, div = %f, VAL = %f\n", res_pot, div, VAL);
    }
    return 0;
}

//Função de Potência//
float pot(int n, float x, float t)
{
    float res_pot;
    int cont;

    for(cont = 1, res_pot = 1; cont <= n; cont ++)
    {
        res_pot *= (1 + t);
    }

    return res_pot;
}


/* Index de comentários

//(1)// Variáveis usadas p/input e p/enviar p/as funções;

//(2)// Variáveis usadas para salvar os valores confome a execução das respetições;

//(3)// Contadores para as repetições internas e externas;

//(4)// Números de repetições, equivalente ao expoente;

//(5)// Lendo e armazenando os Inputs do usuário;

//(6)// Responsável por, a cada ciclo, limitar o nº de repetições INTERNAS;

    Ex: n = 10
    1º repetição EXTERNA = 1 repetição INTERNAS;
    2º repetição EXTERNA = 2 repetições INTERNAS;
    ...
    10º repetição EXTERNA = 10 repetições INTERNAS;

//(7)// Responsável por calcular a pot. a soma e salvar o res. na variável certa;

//(8)// Call da função responsável por calcular a potência;

//!(8.1)!// Nunca usar a Call da função para realizar operações complexas;
    Ex:
    int cont2;
    float x, t;
    div = x / pot(cont2, x, t);

O C não aceita todos os elementos de tipos diferentes para essas operações;

//(9)// Resultado das divisões;

//(10)// Soma dos resultados anteriores.

}
*/
