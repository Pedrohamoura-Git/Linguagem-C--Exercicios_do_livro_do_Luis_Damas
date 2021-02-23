#include <stdio.h>
#include <stdlib.h>
//Ler número de dias existentes em um mês (fev = 28 dias);
    //Usando apenas If-else.
int main()
{
    printf("Hello world!\n\n");


    int mes;
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

    if (mes == 1 || 5 || 7 || 8 || 10 || 12)
    {
        printf("\n31 - dias\n");
    }
    if (mes == 3 || 4 || 6 || 9 || 11)
    {
        printf("\n30 - dias\n");
    }
    if (mes == 2)
    {
        printf("\n28 - dias\n");
    }
    else
    {
        printf("\nDigite um dos numeros listados acima.\n");
    }

    return 0;
}
