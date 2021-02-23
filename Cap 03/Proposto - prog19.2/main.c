#include <stdio.h>
#include <stdlib.h>
//Ler número de dias existentes em um mês (fev = 28 dias);
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

    printf("Escolha o mes para saber a quantidade de dias referente a ele: ");
    scanf("%d", &mes);

    switch (mes)
    {
        case 1:
            printf("\nJaneiro - 31 dias\n");
            break;
        case 2:
            printf("\nFevereiro - 28 dias\n");
            break;
        case 3:
            printf("\nMarco - 31 dias\n");
            break;
        case 4:
            printf("\nAbril - 30 dias\n");
            break;
        case 5:
            printf("\nMaio - 31 dias\n");
            break;
        case 6:
            printf("\nJunho - 30 dias\n");
            break;
        case 7:
            printf("\nJulho - 31 dias\n");
            break;
        case 8:
            printf("\nAgosto - 31 dias\n");
            break;
        case 9:
            printf("\nSetembro - 30 dias\n");
            break;
        case 10:
            printf("\nOutubro - 31 dias\n");
            break;
        case 11:
            printf("\nNovembro - 30 dias\n");
            break;
        case 12:
            printf("\nDezembro - 31 dias\n");
            break;
    }

    return 0;
}
/*
Percebi depois, que era possível escrever este programa de uma forma muito mais simples.

    case 1 || 5 || 7 || 8 || 10 || 12:
        printf("\n31 - dias\n");
        break;
    case 3 || 4 || 6 || 9 || 11:
        printf("\n30 - dias\n);
        break;
    case 2:
        printf("\n28 - dias\n");
        break;
*/
