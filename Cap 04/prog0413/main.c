#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n\n");

    int num, cont = 1;

    for (cont = 1; cont <= 10; cont ++)
    {
       for (num = 1; num <= cont; num ++)
        {
            printf("%d ", num);w
        }
    putchar('\n');
    }
    return 0;
}
