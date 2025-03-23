#include <stdio.h>

int main() {

    int x; // Declara uma variável para armazenar um número
    int y; // Outra variável para armazenar um número
    printf("Digite o primeiro valor: ");
    scanf("%d", &x); // Lê um número do usuário e guarda em x

    printf("Digite o segundo valor: ");
    scanf("%d", &y); // Lê outro número e guarda em y

    int resultado = x * y; // Multiplica os dois números

    printf("A multiplicação de %d vezes %d da o resultado de %d\n", x, y, resultado);
}