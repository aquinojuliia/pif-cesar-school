#include <stdio.h>

int main() {
    int dias;
    float bruto, liquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    bruto = dias * 30.0;
    liquido = bruto * 0.92;

    printf("Salario bruto: R$ %.2f\n", bruto);
    printf("Salario liquido: R$ %.2f\n", liquido);

    return 0;
}