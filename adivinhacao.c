#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// #define NUMERO_DE_TENTATIVAS 5

int main()
{
    printf("******************************************\n");
    printf("* Bem viando ao nosso jogo de advinhação *\n");
    printf("******************************************\n");

    srand(time(NULL)); // inicia o sistema de numeros aleatorios

    int numero_secreto = rand() % 45; // numeros aleatorios de 0 a 45
    int chute = 0;
    int tentativa = 1;
    int acertou = 0;

    while (acertou == 0)
    {
        // for (tentativa = 1; tentativa <= NUMERO_DE_TENTATIVAS; tentativa++) { // a pessoa tem 5 tentativas
        printf("Você está tentando pela %dº vez\n: ", tentativa); // mostra em qual tentativa voce estia
        printf("Digite seu chute: ", chute);
        scanf("%d", &chute);

        if (chute < 0)
        {
            printf("Você não pode chutar numeros negativos!");
            // tentativa--;
            continue;
        }

        if (chute == numero_secreto)
        {
            printf("Parabéns! Você acertou o número secreto %d!\n", numero_secreto);
            printf("Você acertou em %d tentativas", tentativa);
            acertou = 1; // se a pessoa acerta o numero ele nao vai rodar o (if !acertou)
            break;       // se a pessoa acertar ele encerra o programa
        }
        else if (chute < numero_secreto)
        {
            printf("O número secreto é maior que %d\n", chute);
        }
        else
        {
            printf("O número secreto é menor que %d\n", chute);
        }
        tentativa = tentativa + 1;
    }
    // if (!acertou)
    // { // o (!) indica a negativa.
    //     printf("Que pena! Você não conseguiu adivinhar. O número secreto era %d.\n", numero_secreto);
    // }
}