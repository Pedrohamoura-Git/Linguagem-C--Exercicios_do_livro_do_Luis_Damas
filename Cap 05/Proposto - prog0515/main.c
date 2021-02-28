#include <stdio.h>
#include <stdlib.h>
/*
                        //Descrição da questão://

int Cubo(int x);
 Devolver o valor de x^3.


    (V) - Funcionando?
*/
//---------------------------------------------------------------------------------------
                        //Protótipos das funções://

int Cubo(int x);
//---------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");
//------
    int x;
//------
    printf("Insira o valor de x: ");
    scanf(" %d", &x);
//------
    printf("X^3 = %d", Cubo(x));
    return 0;
}
//---------------------------------------------------------------------------------------
                            //Funções://

int Cubo(int x)
{

    return(x * x * x);
}
