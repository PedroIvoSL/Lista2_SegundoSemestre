#include <stdio.h>

void converterKG(float pesoKG);
void apresentaGrama(float pesoG);
void apresentaTonelada(float pesoT);

int main()
{
    float pesoKG;
    printf("Digite o um peso em KG: ");
    scanf("%f", &pesoKG);
    converterKG(pesoKG);
}
void converterKG(float pesoKG)
{
    float pesoG, pesoT;
    pesoG = pesoKG * 1000;
    pesoT = pesoKG / 1000;
    apresentaGrama(pesoG);
    apresentaTonelada(pesoT);
}
void apresentaGrama(float pesoG)
{
    printf("O peso em gramas: %f",pesoG);
}
void apresentaTonelada(float pesoT)
{
    printf("O peso em tonelada: %f",pesoT);
}