#include <stdio.h>

// ponteiro que aponta em vetor
int main(void){
	int vetor[3] = {1, 2, 3};

	// int = 4 bits
	int *ponteiro = &vetor[0];
	printf("%p\n", ponteiro);

	ponteiro = &vetor[1];
	printf("%p\n", ponteiro);

	ponteiro = &vetor[2];
	printf("%p\n", ponteiro);

	ponteiro = vetor;     // volta o valor pra primeira posicao do vetor
	printf("%i\n", vetor[1]);
	*(ponteiro + 1) = 10;  // altera valor na segunda posicao do vetor
	printf("%i\n", vetor[1]);
	return 0;
}
