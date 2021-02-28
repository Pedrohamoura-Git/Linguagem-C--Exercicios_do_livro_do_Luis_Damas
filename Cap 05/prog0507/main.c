#include <stdio.h>
#include <stdlib.h>
//Ler dois números e mostrar a soma e o dobro de cada um deles.
    //(V) - Funcionado.

soma ();
dobro ();
int main()
{
    printf("Hello world!\n\n");

    int num1, num2;
    printf("Insira o primeiro numero: ");
    scanf(" %d", &num1);
    printf("Insira o segundo numero: ");
    scanf(" %d", &num2);

    printf("\nA soma dos valores informados eh: %d\n", soma(num1, num2));
    printf("\nO dobro de %d eh: %d\n", num1, dobro(num1));
    printf("O dobro de %d eh : %d\n", num2, dobro(num2));

    return 0;
}

soma (int num1, int num2)
{
    int res;
    res = num1 + num2;
    return res;
}

dobro (int num)
{
    int res;
    res = 2 * num;
    return res;
}
