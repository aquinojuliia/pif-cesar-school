#include <stdio.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    printf("Caractere: %c\n", caractere);
    printf("Codigo ASCII: %d\n", caractere);

    // O numero representa o codigo do caractere na tabela ASCII.

    return 0;
}