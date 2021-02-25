#include <stdio.h>
#include <stdlib.h>
/*
Reescrever o seguinte programa em while:

for (i = 1; i <= 20; i++)
`{
    if (i == 10)
    {
        continue;
    }
    else
        printf(" %d\n", i);
 }
*/
int main()
{
    printf("Hello world!\n\n");

    int i = 1;

    while (i <= 20)
    {
        if (i != 10)
        {
            printf(" %d\n", i);
            i ++;
        }
        else
        {
            i ++;
            continue;
        }
    }

    return 0;
}
