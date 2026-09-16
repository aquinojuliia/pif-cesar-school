#include <stdio.h>

int main() {
    char letra;

    printf("Digite uma letra maiuscula: ");
    scanf(" %c", &letra);

    if (letra >= 'A' && letra <= 'Z') {
        letra = letra + 32;
        printf("Letra minuscula: %c\n", letra);
    } else {
        printf("Digite uma letra maiuscula.\n");
    }

    return 0;
}