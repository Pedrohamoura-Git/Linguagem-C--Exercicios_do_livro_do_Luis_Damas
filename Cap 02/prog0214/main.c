#include <stdio.h>
#include <stdlib.h>
//Input de um inteiro (entre 0 e 255), mostrar o valor seguinte e o char equivalente.

int main()
{
    int num;
    printf("Hello world!\n\n");

    printf("Insira um numero inteiro (0 a 255): ");
    scanf("%d", &num);

    printf("\nO caractere equivalente ao valor informado e o numero seguinte, sao: %c, %d.\n", (char)num, num + 1);
    return 0;
}
