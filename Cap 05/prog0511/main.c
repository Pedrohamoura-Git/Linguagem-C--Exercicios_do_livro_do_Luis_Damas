#include <stdio.h>
#include <stdlib.h>
//Implementar o programa: float pot(float x, int n);
//Devolver o valor de x elevado a n.
    //(V) - Funcionando?

float pot(float x, int n);

int main()
{
    printf("Hello world!\n\n");

    float x, res;
    int n;

    printf("Insira o numero base do calculo: ");
    scanf(" %f", &x);
    printf("Insira o expoente do calculo: ");
    scanf(" %d", &n);

    printf("\n%.2f elevado a %d = %.2f\n", x, n, pot(x, n));
    return 0;
}

float pot(float x, int n)
{
    float res;
    int cont;

    for(cont = 1, res = 1; cont <= n; cont ++)
    {
        res *= x;
    }

    return res;
}




