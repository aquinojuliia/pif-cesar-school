#include <stdio.h>
#include <math.h>

int main() {
    float alturaDegrau, alturaTotal;
    int degraus;

    printf("Altura de cada degrau em cm: ");
    scanf("%f", &alturaDegrau);

    printf("Altura total em metros: ");
    scanf("%f", &alturaTotal);

    alturaTotal = alturaTotal * 100;

    degraus = (int)ceil(alturaTotal / alturaDegrau);

    printf("Numero minimo de degraus: %d\n", degraus);

    return 0;
}