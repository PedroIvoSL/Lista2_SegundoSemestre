#include <stdio.h>

struct dados
{
    char nome[50];
    float notas[2];
};

void calcularMedia(struct dados aluno);
void mostraMedia(struct dados aluno, float media);

int main()
{
    struct dados alunos;
    printf("Digite seu nome: ");
    fgets(alunos.nome, 50, stdin);
    printf("Digite a nota da prova teorica: ");
    scanf("%f", &alunos.notas[0]);
    printf("Digite a nota da prova pratica: ");
    scanf("%f", &alunos.notas[1]);
    calcularMedia(alunos);
}
void calcularMedia(struct dados aluno)
{
    float media;
    media = ((aluno.notas[0] * 3) + (aluno.notas[1] * 7)) / 10;
    mostraMedia(aluno, media);
}
void mostraMedia(struct dados aluno, float media)
{
    if (media < 7)
    {
        printf("O aluno %s foi reprovado com media %f", aluno.nome, media);
    }
    else
    {
        printf("O aluno %s foi aprovado com media %f", aluno.nome, media);
    }
}