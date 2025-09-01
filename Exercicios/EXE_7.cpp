#include <stdio.h>

int main(){

    char nome[20], letra;
    int i, contador = 0;
	
    printf("Digite seu primeiro nome: ");
    scanf("%s", nome);
	
    printf("Digite uma letra, que vou mostrar quantas vezes ela aparece no nome: ");
    scanf(" %c", &letra);
	
    for(i = 0; nome[i] != '\0'; i++){
	    if(nome[i] == letra) contador ++;
    }
	
    printf("A letra: %c, aparece: %d, vezes!", letra, contador);
    
}