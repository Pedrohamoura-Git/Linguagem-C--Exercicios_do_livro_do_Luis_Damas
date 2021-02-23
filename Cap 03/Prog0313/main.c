#include <stdio.h>
#include <stdlib.h>
/*
Ler estado civil e reconhecer  o Input independentemente de ser maiúscula ou minúscula.
*/
int main()
{
    printf("Hello world!\n\n");

    char est_civil;
    printf("Qual o seu estado civil? ");
    scanf("%c", &est_civil);

    switch (est_civil)
    {
        case 'c':
        case 'C':
            printf("\nCasada(o).\n");
            break;
        case 'd':
        case 'D':
            printf("\nDivorciada(o).\n");
            break;
        case 's':
        case 'S':
            printf("\nSolteira(o).\n");
            break;
        case 'v':
        case 'V':
            printf("\nViuva(o).\n");
            break;
        default:
            printf("\n\7Opcao invalida.\n");
    }
    return 0;
}
/*)
A função switch não aceita operadores lógicos. É uma limitação da linguagem.
    Ex:
    switch (est_civil)
    {
        case'c' || 'C':
            printf("\nCasada(o).\n");
            break;
    }
*/
