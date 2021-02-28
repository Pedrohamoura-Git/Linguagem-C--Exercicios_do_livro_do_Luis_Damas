#include <stdio.h>
#include <stdlib.h>
/*
                        //Descrição da questão://


int is_square(int x, int y)

 Devolve um valor lógico que indica se x é ou não igual a y^2.

    (V) - Funcionando?

*/
//---------------------------------------------------------------------------------------
                        //Protótipos das funções://

int is_square(int x, int y);
//---------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");
//------
    int x, y;
//------
    printf("Insira o valor de x: ");
    scanf(" %d", &x);
    printf("Insira o valor de y: ");
    scanf(" %d", &y);
    printf("x = y^2? %d", is_square(x, y));
//------
    switch(is_square(x, y))
    {
        case 1:
        {
            printf("\nVerdadeiro.\n\n");
        }
        case 0:
        {
            printf("\nFalso.\n\n");
        }
    }
    return 0;
}
//---------------------------------------------------------------------------------------
                        //Funções://

int is_square(int x, int y)
{
    return(x == y * y);
}
