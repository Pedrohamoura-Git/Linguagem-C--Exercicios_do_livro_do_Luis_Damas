#include <stdio.h>
#include <stdlib.h>
/*
                        //Descrição da questão://

int Minus(Valor);

 Devolver o valor recebido sempre como negativo.
    Ex:
    Minus(10) --> -10
    Minus(-10) --> -10

    (V) - Funcionando?

*/
//---------------------------------------------------------------------------------------
                        //Protótipos das funções://

int Minus(Valor);
//---------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");
//------
    int Valor;
//------
    printf("Insira um numero: ");
    scanf(" %d", &Valor);
//------
    printf("\nO equivalente negativo de %d eh: %d\n", Valor, Minus(Valor));
    return 0;
}
//---------------------------------------------------------------------------------------
                        //Funções://

int Minus(Valor)
{
    if(Valor > 0)
    {
        return(Valor * (-1));
    }
    else
    {
        return Valor;
    }
    return ;
}
