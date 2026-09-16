#include <stdio.h>

int main() {
    float comprimento, largura, preco;
    float perimetro, metrosArame, custo;

    printf("Digite o comprimento: ");
    scanf("%f", &comprimento);

    printf("Digite a largura: ");
    scanf("%f", &largura);

    printf("Digite o preco por metro de arame: ");
    scanf("%f", &preco);

    perimetro = 2 * (comprimento + largura);
    metrosArame = perimetro * 3;
    custo = metrosArame * preco;

    printf("Metros de arame: %.2f\n", metrosArame);
    printf("Custo total: R$ %.2f\n", custo);

    return 0;
}