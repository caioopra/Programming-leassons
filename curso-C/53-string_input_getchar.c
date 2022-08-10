#include <stdio.h>

int main(void){
	char linha[100];  // remover limitacao da qtd de palavras
	char caractere;

	int i;
	do {
		caractere = getchar(); // pega um caractere do que é digitado na interface
		linha[i] = caractere;
		i++;
	} while(caractere != '\n');

	linha[i - 1] = '\0';  // i indica pra posição depois de \n

	printf("%s", linha);
	return 0;
}
