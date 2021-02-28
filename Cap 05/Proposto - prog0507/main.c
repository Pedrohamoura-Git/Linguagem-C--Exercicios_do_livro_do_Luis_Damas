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
*/
//(V) - if-else;
//(V) - Funcionando?

//------------------------------//------------------------------//------------------------------
//Protótipos das funções

long int h_minutos(int num);
long int h_segundos(int num);
long int min_horas(int num);
long int min_segundos(int num);
long int seg_horas(int num);
long int seg_minutos(int num);
//------------------------------//------------------------------//------------------------------
int main()
{
    printf("Hello world!\n\n");

    char escala_ini, escala_fin;
    int num;
//------------------------------
    printf("Insira a escala do tempo inicial - 'h', 'm' ou 's': ");
    escala_ini = getchar();
    printf("\nEscreva um valor em %c: ", escala_ini);
    scanf(" %ld", &num);
//------------------------------
    if(escala_ini == 'h')
    {
        printf("\nAgora escolha para escala deseja converte-lo - 'm' ou 's': ");
        escala_fin = getchar();

        if(escala_fin == 'm')
        {
            printf("\n%d h equivale(m) a %ld min\n", num, h_minutos(num));
        }
        if(escala_fin == 's')
        {
            printf("\n%d h equivale(m) a %ld min\n", num, h_segundos(num));
        }
        else
        {
            printf("\nEntrada invalida!\n");
        }
    }
//------------------------------
    if(escala_ini == 'm')
    {
        printf("\nAgora escolha para escala deseja converte-lo - 'h' ou 's': ");
        escala_fin = getchar();

        if(escala_fin == 'h')
        {
            printf("\n%d min equivale(m) a %.2ld h\n", num, min_horas(num));
        }
        if(escala_fin == 's')
        {
            printf("\n%d min equivale(m) a %.2ld s\n", num, min_segundos(num));      }
        else
        {
            printf("\nEntrada invalida!\n");
        }
    }
//------------------------------
    if(escala_ini == 's')
    {
        printf("Agora escolha para escala deseja converte-lo - 'h' ou 'm': ");
        escala_fin = getchar();

        if(escala_fin == 'h')
        {
            printf("\n%d s equivale(m) a %.2ld h\n", num, seg_horas(num));
        }
        if(escala_fin == 'm')
        {
            printf("\n%d s equivale(m) a %.2ld min\n", num, seg_minutos(num));
        }
        else
        {
            printf("\nEntrada invalida!\n");
        }
    }
//------------------------------
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
    res = num * 3600; //(1)//
    return res;
}
//------------------------------
long int min_horas(int num)
{
    long int res;
    res = num / 60;
    return res;
}
//------------------------------
long int min_segundos(int num)
{
    long int res;
    res = num * 60;
    return res;
}
//------------------------------
long int seg_horas(int num)
{
    long int res;
    res = num / 3600;
    return res;
}
//------------------------------
long int seg_minutos(int num)
{
    long int res;
    res = num / 60;
    return res;
}
