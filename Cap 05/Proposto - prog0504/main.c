#include <stdio.h>
#include <stdlib.h>
//Implementar int Abs(int x) e devolver o valor absoluto de x.
    //(V) - Funcionando?

int abs(int x);
int main()
{
    printf("Hello world!\n\n");

    int x;

    printf("Insira um numero inteiro: ");
    scanf("%d", &x);
    printf("\nO valor absoluto de %d eh: %d\n", x, abs(x));
    return 0;
}

int abs(int x)
{
    int res;

    if(x > 0)
    {
        res = x * (-1);
    }
    else
    {
        x = res;
    }
    return res;
}
