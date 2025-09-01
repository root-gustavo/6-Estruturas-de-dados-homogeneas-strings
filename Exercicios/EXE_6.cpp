#include <stdio.h>

int main() {
    char frase[31];
    int i;

    printf("Digite uma frase (max 30 caracteres): ");
    scanf(" %30[^\n]", frase);

    printf("Frase sem espacos: ");
    for (i = 0; frase[i] != '\0'; i++) {
        if (frase[i] != ' ') {
            printf("%c", frase[i]);
        }
    }

    printf("\n");
    return 0;
}