#include <stdio.h>

// ponteiro que aponta em vetor
int main(void){
	// ponteiro que aponta para int
	int x = 10;
	int *pnt_x = &x;

	int vetor[3] = {1, 2, 3};
	int *ponteiro_vetor = vetor;  // nao precisa do tamaho e nem & para vetores
	// ponteiro automaticamente aponta para o primeiro membro do vetor que esta relacionado
	// forma alternativa: = &vetor[0]; pode especificar outro index se quiser
	printf("%i", *ponteiro_vetor);

	return 0;
}
