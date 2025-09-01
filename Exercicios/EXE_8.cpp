#include <stdio.h>

int main(){
	
	char nome[20];
	int i, contador = 0;
	
	printf("Digite seu nome: ");
	scanf("%s", nome);
	printf("Vamos calcular quantas vogais tem em: %s\n", nome);
	printf("Calculando...\n");
	
	for(i = 0; nome[i] != '\0'; i++){
		if(nome[i] == 'A' || nome[i] == 'a' || 
		   nome[i] == 'E' || nome[i] == 'e' || 
		   nome[i] == 'I' || nome[i] == 'i' || 
		   nome[i] == 'O' || nome[i] == 'o' || 
		   nome[i] == 'U' || nome[i] == 'u') {
		   	contador ++;
		   }
	}
	
	printf("O nome tem %d, vogais!", contador);
    
}