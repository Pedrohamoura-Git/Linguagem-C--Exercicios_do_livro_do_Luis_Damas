#include <stdio.h>
#include <stdlib.h>
/*
Ler um valor em horas e devolver em segundos;
    Ex:
    n_segundos(0) --> 0
    n_segundos(2) --> 7200
*/
//(V) - Funcionando?

long int n_segundos(int n_horas);

int main()
{
    printf("Hello world!\n\n");

    int n_horas;

    printf("Escreva um valor em horas: ");
    scanf(" %ld", &n_horas);

    printf("\n%d h equivale(m) a %ld s\n", n_horas, n_segundos(n_horas));

    return 0;
}

long int n_segundos(int n_horas)
{
    long int res;
    res = n_horas * 3600; //(1)//
    return res;


}


/* Index de comentários

//(1)// Horas --> min = x60
        min --> seg = x60
        Horas --> seg = x3600
*/
