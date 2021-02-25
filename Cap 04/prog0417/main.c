#include <stdio.h>
#include <stdlib.h>
//Ler um num e caractere. Preencher n linhas com n caracteres.
/*
Ex:
num = 3;
caract = *;

    ***
    ***
    ***
*/
int main()
{
    printf("Hello world!\n\n");

    int num, cont, cont2;
    char caract;
    printf("Insira um numero inteiro: ");
    scanf(" %d", &num);
    printf("Agora insira um caractere qualquer: ");
// (" %c") - o espaço antes do %c é importante para limpar o buffer do teclado depois da última entrada.
    scanf(" %c", &caract);

    for (cont = 1; cont <= num; cont ++)
    {
        for (cont2 = 1; cont2 <= num; cont2 ++)
        {
            printf("%c ", caract);
        }
        putchar('\n');
    }

    return 0;
}
