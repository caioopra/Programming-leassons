#include <stdio.h>
#include <stdlib.h>

int main(void){
	FILE *file;
	file = fopen("83-string.txt", "r");

	if (file == NULL){
		printf("Nao foi possivel abrir o arquivo");
		return -1;
	}

	char frase[100];
	// fgets retorna string; fscanf() se tiver certeza da formatacao dos dados da entrada e tipo, pode ser usada (precisa de controle, nao precisa de manipular o tipo de dado)
	while(fgets(frase, 100, file) != NULL){  // fgets(vetor, tamanhoVetor, ponteiro)
		printf("%s", frase);
	}
	fclose(file);

	printf("\n");
	return 0;
}
