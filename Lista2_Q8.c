#include <stdio.h>

void bubble(int *peso);
int main()
{
    int peso[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Digite o peso da pessoa %d : ", i+1);
        scanf("%d", &peso[i]);
    }
    bubble(peso);
    for (int i = 0; i < 3; i++)
    {
        printf("O peso da pessoa %d : %d\n", i+1, peso[i]);
    }
}
void bubble(int *peso)
{
    int swap;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (peso[i] < peso[j])
            {
                swap = peso[i];
                peso[i] = peso[j];
                peso[j] = swap;
            }
}