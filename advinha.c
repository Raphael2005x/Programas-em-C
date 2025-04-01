#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("+++++++++++++++++++++++++++++++++++++\n");
    printf("+ Bem vindo ao programa de adivinhar +\n");
    printf("+++++++++++++++++++++++++++++++++++++\n");

    srand(time(0));

    int numero_secreto = rand() % 40;
    int tentativa = 1;
    int chute;
    double pontos = 1000;
    int numerotentativas;
    int acertou = 0;

    int nivel;
    printf("Qual o nivel de dificuldade?\n");
    printf("(1) Facil (2) Medio (3) Dificil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);
    switch (nivel)
    {
    case 1:
        numerotentativas = 15;
        break;
    case 2:
        numerotentativas = 10;
        break;
    case 3:
        numerotentativas = 6;
        break;

    default: printf("Numero invalido!");
    return nivel;
    }

    for (int i = 1; i <= numerotentativas; i++)

    {
        printf("%dº Tentativa\n", tentativa);
        printf("Qual seu chute? ");
        scanf("%d", &chute);

        if (chute < 0)
        {

            printf("O número digitado não pode ser negativo!\n");
            continue;
        }

        if (chute == numero_secreto)
        {
            printf("Parabéns você acertou o número Secreto!\n");
            printf("Você acertou na %dº tentativa, O número secreto era o (%d)\n", tentativa, numero_secreto);
            acertou = 1;
            break;
        }
        else if (chute < numero_secreto)
        {
            printf("Seu chute foi menor que o número secreto\n");
        }
        else
        {
            printf("Seu chute foi maior que o número secreto\n");
        }
        tentativa++;
        double pontosperdidos = (abs(chute - numero_secreto)) / (double)2;
        pontos = pontos - pontosperdidos;
    }
    if(!acertou){
        printf("Fim de jogo, Você perdeu!\n");
    }
    printf("Quantidade de pontos: %.2f", pontos);
    return 0;
}
