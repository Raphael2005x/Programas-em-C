#include <stdio.h>

int main()
{
    int multiplicado = 0;
    int tabuada = 0;
    scanf("%d", &tabuada);


    for(multiplicado = 0; multiplicado <= 10; multiplicado++){
        printf("%d x ",tabuada);
        printf("%d = ", multiplicado);
        printf("%d \n", tabuada * multiplicado);
    }
    return 0;
}