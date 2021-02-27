#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
                            Descrição da questão

 Implemente a função abaixo que inverte a string e devolve-a invertida.

        char *strrev(char *s)


Funcionando?
    Sim - ()
    Não - (X)
*/
//-------------- PROTÓTIPOS DAS FUNÇÕES ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

char *strrev(char *s);
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main()
{
    printf("Hello world!\n\n");

//------ Definindo elementos
    //char *s = "'Cos life, life is like a meme: if you take it to serious, you get a brain disease.";
    char *s = "0123456789abc";
//------ Armazenando o input do usuário

//------ Imprimindo o resultado
    printf("s_inv: %s\n", strrev(s));//(1)//

//------ The End...?
    return 0;
}
//-------------- FUNÇÕES -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

char *strrev(char *s)
{
    int i, j;
    int tam = strlen(s);
    //printf("tam: %d\n", tam); //Debug tamanho
//o strlen ignora o caractere delimitador. Por isso +1: para add o '\0' no final.
    char *s_inv[tam+1];

//Atrasando o i para que o s_inv[tam], a posição do '\0', não seja ocupado pelo s[0].
    for(i = -1, j = tam; i < tam, j >= 0; i++, j--)
    {
        if(i == -1)
            s_inv[tam] = '\0';
        else
            s_inv[j] = s[i];
        //printf("s_inv[%2d] = s[%2d] --> '%c' = '%c'\n", j, i, s_inv[j], s[i]); //Debug indices e caracteres
    }
    /*putchar('\n');
    for(i = 0; i <= tam; i++)
    {
        printf("s_inv[%2d] = s[%2d] --> '%c' = '%c'\n",i, i, s_inv[i], s[i]); //Debug indices e caracteres
    }
    */
    return s_inv;//(1)//
}

//-------------- COMENTÀRIOS ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*

//(1)//

 Dentro da função "*strrev(char *s)" a string "s_inv" está correta, mas, por algum motivo,
quando eu a retorno à função "main", ela se modifica.

Acontece algo entre:
    61 - return s_inv;
e
    31 - printf("s_inv: %s\n", strrev(s));

que modifica a string. Além disso, a mensagem que aparece no "Build log" é a seguinte:

"warning: function returns address of local variable [-Wreturn-local-addr]"

 Não tenho certeza o que o problema, mas acredito que no próximo capítulo (ponteiros) eu
devo encontrar algum resposta sobre o por quê disso acontecer.

//(2)//
"..."

*/
