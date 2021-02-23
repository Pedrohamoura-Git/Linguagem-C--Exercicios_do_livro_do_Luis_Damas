#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n\n");

    int mes, n_dias = 0;
    printf("\nJaneiro   - 1\n");
    printf("Fevereiro - 2\n");
    printf("Marco     - 3\n");
    printf("Abril     - 4\n");
    printf("Maio      - 5\n");
    printf("Junho     - 6\n");
    printf("Julho     - 7\n");
    printf("Agosto    - 8\n");
    printf("Setembro  - 9\n");
    printf("Outubro   - 10\n");
    printf("Novembro  - 11\n");
    printf("Dezembro  - 12\n");

    printf("Escolha um mes para saber a quantidade de dias referente a ele: ");
    scanf("%d", &mes);

    switch (mes)
    {
    case 1:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
       n_dias = n_dias + 1;
    case 3:
    case 4:
    case 6:
    case 9:
    case 11:
        n_dias = n_dias + 2;

    case 2:
        n_dias = n_dias + 28;
    }
    printf("\n%d - dias\n", n_dias);
    return 0;
}
