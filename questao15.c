#include <stdio.h>

int main() {
    float n1, n2, n3, n4;
    float mediaSimples, mediaPonderada;

    printf("Digite a nota 1: ");
    scanf("%f", &n1);

    printf("Digite a nota 2: ");
    scanf("%f", &n2);

    printf("Digite a nota 3: ");
    scanf("%f", &n3);

    printf("Digite a nota 4: ");
    scanf("%f", &n4);

    mediaSimples = (n1 + n2 + n3 + n4) / 4.0;

    mediaPonderada = (n1 + n2 + 2 * n3 + 2 * n4) / 6.0;

    printf("Media simples: %.2f\n", mediaSimples);
    printf("Media ponderada: %.2f\n", mediaPonderada);

    return 0;
}