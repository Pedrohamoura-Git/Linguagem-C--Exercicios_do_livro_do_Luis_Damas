#include <stdio.h>
#include <stdlib.h>
/*
float Max(float x, float y, float w)
Devolver o maior dos valores de x, y e w.

    (V) - Funcionando?
*/
//------------------------------//------------------------------//------------------------------
float Max(float x, float y, float w);
//------------------------------
int main()
{
    printf("Hello world!\n\n");

    float x, y, w;

    printf("Insira o valor de x: ");
    scanf(" %f", &x);
    printf("Insira o valor de y: ");
    scanf(" %f", &y);
    printf("Insira o valor de w: ");
    scanf(" %f", &w);
//------------------------------
    printf("\nO maior valor informado foi: %.2f\n", Max(x, y, w));
    return 0;
}

float Max(float x, float y, float w)
{
    float res;

    if(x > y && x > w)
    {
        res = x;
    }
    if(x == y && x > w)
    {
        res = x;
    }
    if(x == w && x > y)
    {
        res = x;
    }
//------------------------------
    if(y > x && y > w)
    {
        res = y;
    }
    if(y == w && y > x)
    {
        res = y;
    }
//------------------------------
    if(w > x && w > y)
    {
        res = w;
    }
    return res;
}
