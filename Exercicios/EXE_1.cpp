#include <stdio.h>

int main() {
    char str[100];
    int tamanho = 0;

    printf("Digite uma string: ");
    scanf("%s", str);

    while(str[tamanho] != '\0') {
        tamanho++;
    }

    printf("O tamanho da string é: %d\n", tamanho);
    return 0;
}