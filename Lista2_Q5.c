#include <stdio.h>

void apresentaClassificacao(int quantHabitante, char *nomeCidade);
void obtemNivel(int habitantes);

int main()
{
    int quantHabitante;
    char nomeCidade[100];
    printf("Digite o nome da cidade: ");
    fgets(nomeCidade, 100, stdin);
    printf("Digite a quantidade de habitantes atual: ");
    scanf("%d", &quantHabitante);
    apresentaClassificacao(quantHabitante, nomeCidade);
}
void apresentaClassificacao(int quantHabitante, char *nomeCidade)
{

    obtemNivel(quantHabitante);
    printf(" %s tem %d habitantes",nomeCidade,quantHabitante);
}
void obtemNivel(int habitantes)
{
    if (habitantes <= 5000)
    {
        printf("Vila");
    }
    else if (habitantes > 5000 && habitantes <= 15000)
    {
        printf("Distrito");
    }
    else if (habitantes > 15000 && habitantes < 1000000)
    {
        printf("cidade");
    }
    else
    {
        printf("Metropoli");
    }
}