#include <stdio.h>

void apresentaClassificacao(int anoNasimento, int anoAtual);
void obtemNivel(int idade);

int main()
{
    int anoNasimento, anoAtual;
    printf("Digite o seu ano de nascimento: ");
    scanf("%d", &anoNasimento);
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);
    apresentaClassificacao(anoNasimento, anoAtual);
}
void apresentaClassificacao(int anoNasimento, int anoAtual)
{
    int idade;
    idade = anoAtual - anoNasimento;
    printf("A idade media do usuario: %d\n", idade);
    obtemNivel(idade);
}
void obtemNivel(int idade)
{
    if (idade <= 10)
    {
        printf("Crianca\n");
    }
    else if (idade > 10 && idade < 18)
    {
        printf("Adolescente");
    }
    else if (idade >= 18 && idade < 25)
    {
        printf("Jovem");
    }
    else if (idade >= 25 && idade < 58)
    {
        printf("Adulto");
    }
    else
    {
        printf("Idoso");
    }
}