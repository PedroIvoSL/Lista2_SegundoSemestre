#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float potencia(int n, float x);

int main()
{
    int n;
    float x, total;
    printf("Digite a base da potencia: ");
    scanf("%f", &x);
    printf("Digite o expoente: ");
    scanf("%d", &n);
    total = potencia(n, x);
    printf("A potencia entre %f e %d = %f", x, n, total);
}
float potencia(int n, float x)
{
    return pow(x, n);
}