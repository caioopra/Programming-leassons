#include <stdio.h>

int main(void){
	int vetor[5] = {4, 1, 5, 2, 8};

	void ordemCrescente(int vetor[], int n);

	ordemCrescente(vetor, 5);

	for (int i = 0; i < 5; i++){
		printf("%i", vetor[i]);
	}
	return 0;
}

void ordemCrescente(int vetor[], int n){
	int i, j, temporaria;

	for (i = 0; i < n; i++){
		for (j = i+1; j < n; j++){
			if (vetor[i] > vetor[j]) {
				temporaria = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = temporaria;
			}
		}
	}
}
