#include <stdio.h>

int main() {
    char texto[1000];
    int inicio, fim;
    int ehPalindromo = 1; 
    
    printf("Digite um texto: ");
    scanf(" %[^\n]", texto);
    fim = 0;
    while (texto[fim] != '\0') {
        fim++;
    }
    fim--; 
    
    inicio = 0;
    
    while (inicio < fim) {
       
        while (texto[inicio] == ' ' && inicio < fim) {
            inicio++;
        }
    
        while (texto[fim] == ' ' && inicio < fim) {
            fim--;
        }
        
        if (texto[inicio] != texto[fim]) {
        
            if (texto[inicio] >= 'A' && texto[inicio] <= 'Z') {
                if (texto[inicio] + 32 != texto[fim]) {
                    ehPalindromo = 0;
                    break;
                }
            } else if (texto[inicio] >= 'a' && texto[inicio] <= 'z') {
                if (texto[inicio] - 32 != texto[fim]) {
                    ehPalindromo = 0;
                    break;
                }
            } else {
                ehPalindromo = 0;
                break;
            }
        }
        
        inicio++;
        fim--;
    }
    
    printf("\nTexto: \"%s\"\n", texto);
    if (ehPalindromo) {
        printf("É um palíndromo!\n");
    } else {
        printf("Não é um palíndromo.\n");
    }
    
    return 0;
}