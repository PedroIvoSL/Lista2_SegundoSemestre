#include <stdio.h>

void algoritmoPrincipal(int *valorInteiro);
void verificarParImpar(int total);
int main()
{
    int valorInteiro[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Digite o %d valor: ", i);
        scanf("%d", &valorInteiro[i]);
    }
    algoritmoPrincipal(valorInteiro);
}
void algoritmoPrincipal(int *valorInteiro)
{
    int total;
    total = (valorInteiro[0] + valorInteiro[1] * valorInteiro[2]);
    verificarParImpar(total);

}
void verificarParImpar(int total)
{
    int verificar = (total % 3);
    if (verificar != 0)
    {
        printf("O total %d e impar",total);
    }
    else
    {
        printf("O total %d e par",total);
    }
}