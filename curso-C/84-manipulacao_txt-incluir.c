#include <stdio.h>
#include <stdlib.h>

int main(void){
	FILE *file;
	file = fopen("84-string.txt", "a");

	if (file == NULL){
		printf("Erro ao abrir arquivo");
		return -1;
	}
	//fprintf(file, "Primeira linha\n");

	char frase[] = "Segunda linha";
	fputs(frase, file); // funciona para a e r

	char caractere = '3';
	fputc(caractere, file);

	fclose(file);
	return 0;
}
