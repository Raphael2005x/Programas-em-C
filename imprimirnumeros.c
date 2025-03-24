#include <stdio.h>
int main()
{
    int soma = 0;
    int i = 1;

    while (i <= 100){
        printf("%d", i);

        if (i < 100){
            printf(" + ");
        }

        soma += i; // Acumula a soma
        i++;
    }
    printf(" = %d\n", soma); // Exibe o resultado final da soma
    return 0;
}