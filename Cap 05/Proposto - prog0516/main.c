#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
                        //Descrição da questão://

int IsVogal(char ch);
 Verificar se ch é uma das vogais do alfabeto (minúscula ou maiúscula).



    (V) - Funcionando?
*/
//---------------------------------------------------------------------------------------
                        //Protótipos das funções://

int IsVogal(char ch);
//---------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");
//------
    char ch;
//------
    printf("Insira um caractere: ");
    scanf(" %c", &ch);
    printf("%c eh uma vogal? \n", ch);
//------
    switch(IsVogal(ch))
    {
        case 0:
        {
            printf("\nFalso.\n");
            break;
        }
        case 1:
        {
            printf("\nVerdadeiro.\n");
            break;
        }
    }
    return 0;
}
//---------------------------------------------------------------------------------------
                            //Funções://

int IsVogal(char ch)
{
    ch = tolower(ch);
//------
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'u';w
}
