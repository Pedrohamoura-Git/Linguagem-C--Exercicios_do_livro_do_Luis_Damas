#include <stdio.h>
#include <stdlib.h>
/*
Escrever toda a tabela ASCII, apresentando o ASCII e o caractere  correspondente.
Parar a cada 20 linhas para que o pressione a tecla 'c' ou 'C' para continuar a execução;

    Ex:
       65 --> A
       66 --> B
       ...
       85 --> U
       Insira 'c' ou 'C' para continuar:
*/
int main()
{
    printf("Hello world!\n\n");

        int num, cont;
        char letra;

        for (num = 65, cont = 1; num <= 255; num ++, cont ++)
        {
            printf("%d --> %c\n", num, (char) num);

            if (cont % 21 == 0)
            {
                printf("Insira 'c' ou 'C' para continuar a execucao: ");
                scanf(" %c", &letra);
                putchar('\n');
                while (letra != 'c' && letra != 'C')
                {
                    printf("Entrada invalida.\n");
                    printf("\nInsira 'c' ou 'C' para continuar a execucao: ");
                    scanf(" %c", &letra);
                    putchar('\n');
                }

                continue;
            }

            }

    return 0;
}
