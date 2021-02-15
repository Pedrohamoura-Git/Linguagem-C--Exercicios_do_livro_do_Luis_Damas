#include <stdio.h>
#include <stdlib.h>
//Ler data no formato aaaa-mm-dd e transformar para dd/mm/aaaa.
int main()
{
    int dia, mes, ano;

    printf("Hello world!\n\n");

    printf("Insira o ano desejado: ");
    scanf("%d", &ano);
    printf("Insira o mes desejado: ");
    scanf("%d", &mes);
    printf("Insira o dia desejado: ");
    scanf("%d", &dia);

    printf("Data informada: %d-%d-%d\n", ano, mes, dia);
    printf("Dara reformatada: %d/%d/%d\n", dia, mes, ano);
    return 0;
}
