#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Digite uma string: ");
    scanf("%s", str);

    i = 0;
    while(str[i] != '\0') {
        i++;
    }

    printf("O tamanho da string é: %d\n", i);
    return 0;
}