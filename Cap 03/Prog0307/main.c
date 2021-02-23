#include <stdio.h>
#include <stdlib.h>
//Ler salário e calcular salário bruto, líquido e imposto a ser pago;
    //(X) - Salário < 1000, imposto = 5%;
    //(X) - Salário >= 1000 e < 5000, imposto = 11%;
    //(X) - Salário >= 5000, imposto = 35%.
int main()
{
    printf("Hello world!\n\n");

    float salario_bruto, salario_liquido, imposto;
    printf("Vamos calacular o seu imposto.\n");
    printf("Insira o seu salario: R$");
    scanf("%f", &salario_bruto);

    if (salario_bruto <= 0)
    {
        printf("\a\nValor invalido.\n");
    }
    else
    {

        if (salario_bruto < 1000) /*(1)*/
        {
            imposto = salario_bruto * 0.05;
            salario_liquido = salario_bruto - imposto
        }
        if (salario_bruto >= 1000 && salario_bruto < 5000)
        {
            imposto = salario_bruto * 0.11;
            salario_liquido = salario_bruto - imposto;
        }
        if (salario_bruto >= 5000)
        {
            imposto = salario_bruto * 0.35;
            salario_liquido = salario_bruto - imposto;
        }

       /*
       else (2)
        {
            imposto = salario_bruto * 0.35;
            salario_liquido = salario_bruto - imposto;
            printf("\n Salario bruto: R$%.2f\n Salario liquido: R$%.2f\n Imposto: R$%.2f\n", salario_bruto, salario_liquido, imposto);
        }
        */
         printf("\n Salario bruto: R$%.2f\n Salario liquido: R$%.2f\n Imposto: R$%.2f\n", salario_bruto, salario_liquido, imposto);
    }
    return 0;
}
/* (1)
Por algum motivo, a primeira condicional if (1) também ativa a condicional else (2). Não sei aonde está o erro.
*/
