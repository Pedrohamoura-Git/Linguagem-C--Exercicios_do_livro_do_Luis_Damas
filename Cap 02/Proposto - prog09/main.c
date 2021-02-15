#include <stdio.h>
#include <stdlib.h>
//Ler dia, mês e ano e mostar no formato dd/mm/aaaa.
int main()
{
    int dia, mes, ano;

    printf("Hello world!\n\n");

    printf("Insira o dia desejado: ");
    scanf("%d", &dia);
    printf("Insira o mes desejado: ");
    scanf("%d", &mes);
    printf("Insira o ano desejado: ");
    scanf("%d", &ano);

    printf("A data formatada eh: %d/
           %d/%d", dia, mes, ano);
    return 0;
}
