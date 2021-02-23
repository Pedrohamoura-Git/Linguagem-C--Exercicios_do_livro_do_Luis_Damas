#include <stdio.h>
#include <stdlib.h>
//Input do salário e monstrar imposto a pagar;
    //Não aceitar salário negativo o igual a 0;
    //Se salário > R$1000, imposto = 10%, se não imposto = 5%;
int main()
{
    printf("Hello world!\n\n");

    float salario, imposto;
    printf("Vamos calacular o seu imposto.\n");
    printf("Insira o seu salario: R$");
    scanf("%f", &salario);

    if (salario <= 0)
    {
        printf("\a\nValor invalido.\n");
    }
    else
    {
         if (salario > 1000)
        {
        imposto = salario * 0.1;
        printf("\nCom base no salario informado, o imposto a pagar equivale a: R$%.2f\n", imposto);
        }
        else
        {
        imposto = salario * 0.05;
        printf("\nCom base no salario informado, o imposto a pagar equivale a: R$%.2f\n", imposto);
        }
    }

    return 0;
}
