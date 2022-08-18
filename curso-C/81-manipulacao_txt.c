#include <stdio.h>

int main(void){
	FILE *file; // tipo de dado FILE
	//file = fopen("/home/caio/Programming-leassons/curso-C/81-teste.txt", "w");  // r, w, a (podem ter b na frente)
	file = fopen("81-teste2.txt", "w");

	fprintf(file, "teste uso de txt"); // ponteiro, "..."
	//fprint(file, "nova mensagem");  // sobrescreve o que está no txt pois esta usando "w"
	fclose(file); // "fechar" arquivo e salvar
	return 0;
}
