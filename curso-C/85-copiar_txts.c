#include <stdio.h>
#include <stdlib.h>

int main(void){
	void copiarConteudo(FILE *file1, FILE *file2);
	// para linux /users/nome/....txt
	FILE *file1 = fopen("85-arquivo1.txt", "r");
	if (file1 == NULL){
		printf("Nao foi possivel abrir o arquivo1");
		return -1;
	}

	FILE *file2 = fopen("85-arquivo2.txt", "w");

	copiarConteudo(file1, file2);

	fclose(file1);
	fclose(file2);

	return 0;
}

void copiarConteudo(FILE *file1, FILE *file2){
	char leitor[1000];

	while(fgets(leitor, 1000, file1) != NULL){
		fputs(leitor, file2);
	}
}
