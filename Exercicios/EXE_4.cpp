#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    int i;

    printf("String original: %s\n", str);

    printf("String invertida: ");
    for (i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}