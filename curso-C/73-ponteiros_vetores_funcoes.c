#include <stdio.h>

int somarVetor(int vetor[], const int n){
	int soma = 0;
	int *ponteiro;
	int *const finalVetor = vetor + n; // final vetor aponta para o primeiro valor do vetor + num de el. = end do ultimo valor do vetor

	// comeca a percorrer do endereco do primeiro valor do vetor ate o end. do ultimo
	for(ponteiro = vetor; ponteiro < finalVetor; ponteiro++){
		soma += *ponteiro;  // soma o valor indicado pelo ponteiro
	}

	return soma;
}

int main(void){
	int somarVetor(int vetor[], const int n);
	int vetor[10] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5};

	printf("Soma dos membros do vetor = %i", somarVetor(vetor, 10));

	return 0;
}
