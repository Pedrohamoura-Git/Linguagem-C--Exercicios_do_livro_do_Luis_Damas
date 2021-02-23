#include <stdio.h>
#include <stdlib.h>
//Ler data informada e verificar se é válida ou não.
int main()
{
    printf("Hello world!\n\n");

    int dia, mes, ano;
    printf("Vou analisar uma data...\n");
    printf("Informe o dia: ");
    scanf("%d", &dia);
    printf("Informe o mes: ");
    scanf("%d", &mes);
    printf("Infome o ano: ");
    scanf("%d", &ano);

    if (dia < 0 || dia > 31 || mes == 2 && dia > 29)
    {
        printf("\nDia invalido.\n");
    }
    if (mes < 0 || mes > 12)
    {
        printf("\nMes invalido.\n");

    }
    if (ano < 0 || ano > 2999)
    {
        printf("\nAno invalido.\n");
    }
    else
    {
        printf("\nData correta.\n");
    }
    return 0;
}
