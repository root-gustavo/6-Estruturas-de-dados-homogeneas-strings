#include <stdio.h>
#include <string.h>

int main() {
    char str1[31], str2[31];

    printf("Digite a primeira string: ");
    scanf(" %30[^\n]", str1);

    getchar();

    printf("Digite a segunda string: ");
    scanf(" %30[^\n]", str2);

    if (strcmp(str1, str2) == 0) {
        printf("As strings sao iguais.\n");
    } else {
        printf("As strings sao diferentes.\n");
    }

    return 0;
}