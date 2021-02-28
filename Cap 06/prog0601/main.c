#include <stdio.h>
#include <stdlib.h>
/*
                        //Descrição da questão://

 Ler os salários equivalente á 12 meses e mostrar os valores mensais e anuais.

    (V) - Funcionando?
*/
//---------------------------------------------------------------------------------------
                        //Protótipos das funções://

//---------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");
//------
    float salarios[13], total;
    int i;
//------
    for(i = 1
        ; i <= 13; i ++)
    {
        printf("Insira o salario do %d mes: R$", i);
        scanf(" %f", &salarios[i-1]);
    }
//------
        printf("\nMes    -     Valor\n");
//------
    i = 1;
    while(i <= 13)
    {
        printf("%2d     -    R$%.2f\n", i, salarios[i-1]);
        total += salarios[i-1];
        i ++;
    }
    printf("\nTotal do ano = %.2f\n", total);

    return 0;
}
//---------------------------------------------------------------------------------------
                            //Funções://
