#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
                            //Descrição da questão//

Faça um programa C para calular o número de lâmpadas 60 watts necessárias para um determinado cômodo.
O programa deverá ler um conjunto de informações, tais como: tipo, largura e comprimento do cômodo.
 O programa termina quando o tipo de cômodo for igual -1. A tabela abaixo mostra, para cada tipo de cômodo, a quantidade de watts por metro quadrado.

Dica: Use uma estrutura struct para agrupar logicamente as informações de um comodo (int tipo de comodo, float largura e float altura).
Usar uma função (float CalulaArea) para calcular a área do cômodo. Os atributos de entrada serão a largura e comprimento do cômodo.
Usar uma função (float Lampada) para calcular a quantidade de lâmpadas necesárias para o cômodo. Os atributos de entrada serão o tipo de cômodo e a metragem (em m2) do cômodo.

Obs: Utilize a função ceil(numero) em #include math.h para realizar o arrendondamento para cima.


    (V) - Funcionando?
*/
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                            //Protótipos das funções//

float Calcular_Area(float largura, float comprimento);
float N_Lampadas(float area, int potencia_lampada, int tipo_comodo);
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo variáveis
    float area;
    float largura, comprimento;
    int potencia_lampada = 0;
    int tipo_comodo = 0;

//------ Armazenando o input do usuário
    while(tipo_comodo != -1)
    {
        printf("\nInsira o comprimento do comodo(m): ");
        scanf(" %f", &comprimento);
        printf("\nInsira a largura do comodo(m): ");
        scanf(" %f", &largura);
        printf("\nInsira o tipo do comodo (0-4): ");
        scanf(" %d", &tipo_comodo);
        printf("\nInsira a potencia da lampada desejada: ");
        scanf(" %d", &potencia_lampada);

//------//------ Calculando a área
    area = Calcular_Area(largura, comprimento);
    printf("\nArea: %.2fm2", area);

//------//------ Calculando a quantidade de lâmpadas
    printf("\nNumero de lampadas para o comodo informado: %.1f", N_Lampadas(area, potencia_lampada, tipo_comodo));

//------ Menu: continuar ou sair
    printf("\n\nContinuar: [Qualquer numero]  |  Sair: [-1]");
    printf("\nNumero: ");
    scanf(" %d", &tipo_comodo);

    }
    return 0;
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                            //Funções//

float Calcular_Area(float largura, float comprimento)
{
//------ Definindo variáveis
    float area;

//------ Calculando area
    area = largura * comprimento;

//------ Retornando valor
    return area;
}

float N_Lampadas(float area, int potencia_lampada, int tipo_comodo)
{
//------ Definindo variáveis
    int Potencia_Tipo_Comodo[5] = {12, 15, 18, 20, 22};
    float pot_total = 0;
    float quant = 0;

//------ Calculando quantidade de lâmpadas necessárias
    pot_total = (area * Potencia_Tipo_Comodo[tipo_comodo]);
    quant = pot_total / potencia_lampada;
    printf("\npot_t: %f\nquant: %f", pot_total, quant);

//------ Retornando valor
    return ceil(quant);
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*                          //COMENTÀRIOS//

//(1)//
    Ex:
"Quando sair do if...incrementação seja = 0."

//(2)//
"..."

*/
