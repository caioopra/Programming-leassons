#include <stdio.h>

int main(void){
	int tamanhoString(char string[]);
	char stringUsuario[20];

	printf("Digite uma palavra(string):\n");
	scanf("%s", stringUsuario);

	int tamanho = tamanhoString(stringUsuario);
	printf("Tamanho da string com o carac. nulo = %i\n", tamanho);
	printf("Tamanho de %s = %i\n", stringUsuario, --tamanho);
	return 0;
}

int tamanhoString(char string[]){
	int numCaracteres = 0;
	while(string[numCaracteres] != '\0'){
		numCaracteres++;
	}
	numCaracteres++;

	return numCaracteres;
}
