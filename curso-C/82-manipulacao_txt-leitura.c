#include <stdio.h>
#include <stdlib.h>

int main(void){
	FILE *file;
	file = fopen("82-numero.txt", "r"); // se arquivo nao existisse, da erro na execucao

	if (file == NULL){ // se ponteiro esta apontando para local nulo
		printf("Arquivo inexistente\n");
		return -1;
	}
	int x, y, z;
	fscanf(file, "%i %i %i", &x, &y, &z);
	printf("%i %i %i\n", x, y, z);
	fclose(file);

	return 0;
}
