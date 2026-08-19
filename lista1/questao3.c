/*
 * Este programa solicita o ano de nascimento
 * do usuário e exibe o ano informado.
 *
 * Programa de exemplo
 ************************************************/

/* Prog1.C */

#include <stdio.h>  /* Biblioteca para printf e scanf */

int main()  /* Função principal */
{
    int ano;  /* Variável para armazenar o ano */

    printf("Digite seu ano de nascimento: ");  /* Solicita o ano */
    scanf("%d", &ano);  /* Lê o ano informado */

    printf("Seu ano de nascimento é: %d\n", ano);  /* Exibe o ano */

    return 0;  /* Finaliza o programa */
}  /* Fim do corpo da função main */