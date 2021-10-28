#include <stdio.h>

float media(float *altura, int pessoas);

int main()
{
    float altura[5], total;
    int pessoas;
    do{
        printf("Digite a quantidade de pessoas que vao ter a altura calculada (LIMITE DE 5):");
        scanf("%d", &pessoas);
    }while (pessoas > 5);

    for (int i = 0; i < pessoas; i++)
    {
        printf("Digite a altura da pessoa %d: ", i+1);
        scanf("%f", &altura[i]);
    }
    total = media(altura, pessoas);
    printf("A media das alturas: %.2f", total);
}
float media(float *altura, int pessoas)
{
    return ((altura[0] + altura[1] + altura[2] + altura[3] + altura[4]) / pessoas);
}