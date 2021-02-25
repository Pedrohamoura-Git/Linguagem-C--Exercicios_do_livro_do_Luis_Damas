#include <stdio.h>
#include <stdlib.h>
//Ler um número e mostrar simultaneamente a sequência crescente e decrescente dele.
//Mostrar até 1.
int main()
{
    printf("Hello world!\n\n");

    int num, cres, decres;
    printf("Insira um numero inteiro: ");
    scanf("%d", &num);

    for (cres = 1, decres = num, num; cres <= num, decres >= 1; cres ++, decres --)
    {
        printf("%2d %2d\n", cres, decres);
    }

    return 0;
}
