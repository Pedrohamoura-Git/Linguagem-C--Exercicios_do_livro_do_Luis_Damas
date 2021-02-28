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
//(V) - switch - break;
//(V) - Funcionando?

//------------------------------//------------------------------//------------------------------
//Protótipos das funções

long int h_minutos(int num_horas);
long int h_segundos(int num_horas);
float min_horas(float num_min);
float min_segundos(float num_min);
float seg_horas(float num_seg);
float seg_minutos(float num_seg);
//------------------------------//------------------------------//------------------------------
int main()
{
    printf("Hello world!\n\n");

    char escala_ini, escala_fin;
    float num_min, num_seg;
    int num_horas;
//------------------------------
    printf("Insira a escala do tempo inicial - 'h', 'm' ou 's': ");
    scanf(" %c", &escala_ini);
//------------------------------
    switch (escala_ini)
    {
        case 'h':   //(V)//
        {
            printf("\nEscreva um valor em %c: ", escala_ini);
            scanf(" %d", &num_horas);
//------------------------------
            printf("\nAgora escolha para escala deseja converte-lo - 'm' ou 's': ");
            scanf(" %c", &escala_fin);
//------------------------------
                switch(escala_fin)
                {
                    case 'm':
                    {
                        printf("\n  %d h equivale(m) a %ld min\n", num_horas, h_minutos(num_horas));
                        break;
                    }
                    case 's':
                    {
                        printf("\n  %d h equivale(m) a %ld s\n", num_horas, h_segundos(num_horas));
                        break;
                    }
                    default:
                    {
                        printf("\n  Entrada invalida!\n");
                        break;
                    }
                }
            break;
        }
//------------------------------
        case 'm':   //(V)//
        {
            printf("\nEscreva um valor em %c: ", escala_ini);
            scanf(" %f", &num_min);
//------------------------------
            printf("\nAgora escolha para escala deseja converte-lo - 'h' ou 's': ");
            scanf(" %c", &escala_fin);
//------------------------------
                switch(escala_fin)
                {
                    case 'h':
                    {
                        printf("\n  %.2f min equivale(m) a %.4f h\n", num_min, min_horas(num_min));
                        break;
                    }
                    case 's':
                    {
                        printf("\n  %.2f min equivale(m) a %.4f s\n", num_min, min_segundos(num_min));
                        break;
                    }
                    default:
                    {
                        printf("\n  Entrada invalida!\n");
                        break;
                    }
                }
            break;
        }
//------------------------------
        case 's':   //(V)//
        {
            printf("\nEscreva um valor em %c: ", escala_ini);
            scanf(" %f", &num_seg);
//------------------------------
            printf("\nAgora escolha para escala deseja converte-lo - 'h' ou 'm': ");
            scanf(" %c", &escala_fin);
//------------------------------
                switch(escala_fin)
                {
                    case 'h':
                    {
                        printf("\n%.0f s equivale(m) a %f h\n", num_seg, seg_horas(num_seg));
                        break;
                    }
                    case 'm':
                    {
                        printf("\n%.0f s equivale(m) a %f min\n", num_seg, seg_minutos(num_seg));
                        break;
                    }
                    default:
                    {
                        printf("\nEntrada invalida!\n");
                        break;
                    }
                }
        }
        default:
        {
        printf("\nEntrada invalida!\n");
        }
        break;
    }
//------------------------------
    return 0;
}

//------------------------------
long int h_minutos(int num_horas)
{
    long int res;
    res = num_horas * 60;
    return res;
}
//------------------------------
long int h_segundos(int num_horas)
{
    long int res;
    res = num_horas * 3600; //(1)//
    return res;
}
//------------------------------
float min_horas(float num_min)
{
    float res;
    res = num_min / 60;
    printf("%f", res);
    return res;
}
//------------------------------
float min_segundos(float num_min)
{
    float res;
    res = num_min * 60;
    return res;
}
//------------------------------
float seg_horas(float num_seg)
{
    float res;
    res = num_seg / 3600;
    printf("%f", res);
    return res;
}
//------------------------------
float seg_minutos(float num_seg)
{
    float res;
    res = num_seg / 60;
    return res;
}
