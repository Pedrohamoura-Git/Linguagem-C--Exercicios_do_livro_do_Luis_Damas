#include <stdio.h>
#include <stdlib.h>
/*
Ler dois parametros: valor e tempo. Realizar a conversão e devolver o valor na escala correta.
    'h' - horas; 'm' - minutos e 's' - segundos.
    Ex:
    num(3, 'h') --> 3
    num(3, 'm') --> 180
    num(3, 's') --> 10800

! Resolver de tres formas: if-else, switch com break e sem break. !

    (V) - switch - sem break; simplificado como no ex.
    (V) - Funcionando?

*/
//------------------------------//------------------------------//------------------------------
//Protótipos das funções

long int h_minutos(int num);
long int h_segundos(int num);
long int num_horas(int num);
//------------------------------//------------------------------//------------------------------
int main()
{
    printf("Hello world!\n\n");

    char escala_fin;
    int num, num_fin = 1;
//------------------------------
    printf("\nEscreva um valor em h: ");
    scanf(" %d", &num);
//------------------------------
    printf("\nAgora escolha para escala deseja converte-lo - 'h', 'm' ou 's': ");
    scanf(" %c", &escala_fin);
//------------------------------
    switch(escala_fin)
        {
            case 's':   //(V)//
                {
                    num_fin = h_segundos(num);

                }

            case 'm':   //(V)//
                {
                    num_fin = h_minutos(num);
                }
            case 'h':   //(V)//
                {
                    num_fin *= 1;
                }

            printf("\n  %d h equivale(m) a %ld %c\n", num, num_fin, escala_fin);
/*
            default:
                {
                    printf("\n  Entrada invalida!\n");
                }
*/
        }

    return 0;
}

//------------------------------
long int h_minutos(int num)
{
    long int res;
    res = num * 60;
    return res;
}
//------------------------------
long int h_segundos(int num)
{
    long int res;
    res = num * 60; //(1)//
    return res;
}
//------------------------------
long int num_horas(int num)
{
    int res;
    res = num * 1;
    printf("%ld", res);
    return res;
}
