#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("+++++++++++++++++++++++++++++++++++++\n");
    printf("+ Bem vindo ao programa de advinhar +\n");
    printf("+++++++++++++++++++++++++++++++++++++\n");

    srand(time(NULL));

    int numero_secreto = rand() % 5;
    int tentativa = 1;
    int chute;

    while (1)
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
    }
}
