#include <stdio.h>

int main() {
    char letra;

    printf("Letras de A a Z:\n");
    for(letra = 'A'; letra <= 'Z'; letra++) {
        printf("%c ", letra);
    }
    printf("\n");

    return 0;
}