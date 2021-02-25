#include <stdio.h>
#include <stdlib.h>
//Escreva um programa que leia e calcule a soma e o produto dos n primeiros numeros naturais;

int main()
{
    printf("Hello world!\n\n");

    int n, num, soma, produto;
    printf("Insira um numero inteiro: ");
    scanf("%d", &num);
    for (soma = 0, n = produto = 1; n <= num; n = n + 1)
    {
        soma = soma + n;
        produto = produto * n;
    }
    printf("Soma = %d\nProduto = %d\n", soma, produto);

    return 0;
}
