#include <stdio.h>
#include <stdlib.h>
/*
    int Entre(int x, int lim_inf,int lim_sup);

Verificar se x se encontra no intervalo lim_inf <= x <= lim_sup

    (V)- Funcionando?
*/
//---------------------------//---------------------------//---------------------------

int Entre(int x, int lim_inf,int lim_sup);

//---------------------------//---------------------------//---------------------------
int main()
{
    printf("Hello world!\n\n");

    int x, lim_inf, lim_sup;
    printf("Insira o valor de x: ");
    scanf(" %d", &x);
    printf("Insira o valor de limite inferior: ");
    scanf(" %d", &lim_inf);
    printf("Insira o valor de limite superior: ");
    scanf(" %d", &lim_sup);
//---------------------------
    switch(Entre(x, lim_inf, lim_sup))
       {

        case 0:
        {
            printf("\nx: %d NAO PERTENCE ao intervalo informado: %d e %d\n", x, lim_inf, lim_sup);
            break;
        }
        case 1:
        {
            printf("\nx: %d PERTENCE ao intervalo informado: %d e %d\n", x, lim_inf, lim_sup);
            break;
        }

       }
    return 0;
}
//---------------------------//---------------------------//---------------------------

int Entre(int x, int lim_inf,int lim_sup)
{
    int res;
    if(x >= lim_inf && x <= lim_sup)
    {
        return res = 1;
    }
    else
    {
        return res = 0;
    }
}
