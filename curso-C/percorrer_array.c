#include <stdio.h>

int main(void){

	int vetor[5] = {1, 2, 3, 4, 5};
	for (int i = 0; i < sizeof(vetor) / sizeof(int); i++){
		printf("%i ", vetor[i]);
	}

	return 0;
}
