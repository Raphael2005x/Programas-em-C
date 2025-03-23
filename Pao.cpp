#include <stdio.h>
#include <iostream>

int main() {
    std::cout << "Ola mundo" << std::endl;
    int a[5];
    for(int i = 0; i < 5; i++) {
        a[i] = i + 10;
    }

    for(int i = 0; i < 5; i++) {
        std::cout << a[i] << " ";
    }
    return 0;
}