#include <stdio.h>
#include <stdlib.h>

struct dados
{
    int notas[2];
};
void media(struct dados *aluno, int peso1, int peso2);
int main()
{
    struct dados aluno[20];
    for (int i = 0; i < 20; i++)
    {
        printf("Digite a 1 nota do %d aluno: ", i+1);
        scanf("%d", &aluno[i].notas[1]);
        printf("Digite a 2 nota do %d aluno: ", i+1);
        scanf("%d", &aluno[i].notas[2]);
    }
    printf("A media simples\n");
    media(aluno, 1, 1);
    system("pause");
    printf("A media com peso 4 e 6\n");
    media(aluno, 4, 6);
    system("pause");
    printf("A media com peso 3 e 7\n");
    media(aluno, 3, 7);
    system("pause");
}
void calcularMedia(struct dados *aluno, int peso1, int peso2)
{
    float mediaTotal;
    for (int i = 0; i < 20; i++)
    {
        mediaTotal = (((aluno[i].notas[1] * peso1) + (aluno[i].notas[2] * peso2)) / 2);
        printf("A media das notas do aluno %d: %f\n", i+1, mediaTotal);
    }
}