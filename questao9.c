#include <stdio.h>

int main() {
    int a, b;
    float divisao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("Soma: %d\n", a + b);
    printf("Subtracao: %d\n", a - b);
    printf("Multiplicacao: %d\n", a * b);

    if (b != 0) {
        divisao = (float)a / b;
        printf("Divisao: %.2f\n", divisao);
    } else {
        printf("Nao e possivel dividir por zero.\n");
    }

    return 0;
}