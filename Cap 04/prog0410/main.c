#include <stdio.h>
#include <stdlib.h>
//Mostrar os 10 primeiros números pares.
int main()
{
    printf("Hello world!\n\n");

    int num, pares;

    for (num = 1, pares = 1; pares <= 10; num ++)
    {
        if (num % 2 == 0)
        {
            pares ++;
            printf("%d eh um numero par.\n\n", num);
        }
    }

    return 0;
}
