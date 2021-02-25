#include <stdio.h>
#include <stdlib.h>
//Input de um número; mostrar todos inteiros a partir dele, exceto x 3;
//Parar execução ao encontrar x 10.
int main()
{
    printf("Hello world!\n\n");

    int num, num_cresc;
    printf("Insira um numero inteiro: ");
    scanf(" %d", &num);

    for (num; num > 0; num ++)
    {
        if (num % 10 == 0)
        {
            break;
        }
        else if (num % 3 != 0)
        {
            printf("%d\n", num);
        }
    }
    return 0;
}
