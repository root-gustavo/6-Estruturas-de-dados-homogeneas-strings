#include <stdio.h>

int main() {
    char nome[100];
    int idade;
    float peso;
    char bemAlimentado;
    char resfriado;
    int i;
    int apto = 1; 

    printf("Digite seu nome: ");
    scanf(" %[^\n]", nome);
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);
    
    printf("Voce esta bem alimentado? (S/N): ");
    scanf(" %c", &bemAlimentado);
    
    printf("Voce esta resfriado? (S/N): ");
    scanf(" %c", &resfriado);
    
    
    
    if (idade < 16 || idade > 69) {
        apto = 0;
    }
    
    if (peso < 50) {
        apto = 0;
    }
    
    if (bemAlimentado != 'S' && bemAlimentado != 's') {
        apto = 0;
    }
    
    if (resfriado == 'S' || resfriado == 's') {
        apto = 0;
    }
    
    printf("\n RESULTADO DA AVALIACAO\n");
    printf("Nome: %s\n", nome);
    
    if (apto) {
        printf("Situacao: APTO para doar sangue!\n");
    } else {
        printf("Situacao: NAO APTO para doar sangue\n");
    }
    
    return 0;
}