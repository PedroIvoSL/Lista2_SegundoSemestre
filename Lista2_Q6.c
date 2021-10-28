#include <stdio.h>

void apresentaPorcentagem(float quantidadeAluno, float quantidadeAprovados, float quantidadeReprovados);
int main()
{
    float quantAlunos, alunoAprovados, alunoReprovados;
    printf("Digite a quantidade de alunos: ");
    scanf("%f", &quantAlunos);
    printf("Digite a quantidade de alunos aprovados: ");
    scanf("%f", &alunoAprovados);
    alunoReprovados = quantAlunos - alunoAprovados;
    apresentaPorcentagem(quantAlunos, alunoAprovados, alunoReprovados);
    return 0;
}
void apresentaPorcentagem(float quantidadeAluno, float quantidadeAprovados, float quantidadeReprovados)
{
    float porcentagem;
    porcentagem = quantidadeAprovados / quantidadeAluno;
    printf("A porcentagem de alunos aprovados: %f\n", porcentagem * 100);
    printf("A porcentagem de alunos reprovados: %f", porcentagem * 100);
}