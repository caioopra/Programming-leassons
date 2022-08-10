#include <stdio.h>

int main(void){
	int x;  // reserva espaco na memoria
	x = 10; // atribui valor 10 ao espaco reservado para x

	int *ponteiro_x;
	ponteiro_x = &x;

	// acessar end de memoria da variavel x e seu valor

	// *ponteiro -> valor do que está armazenado no endereco "ponteiro"
	// ponteiro  -> valor do endereço de memória da variável
	printf("Valor: %i, endereco: %p\n", *ponteiro_x, ponteiro_x);

	int var1 = 10;
	int var2 = var1;

	var1 = 20;
	printf("%i %i\n", var1, var2);  // "20 10"

	// ------------------

	int var01 = 10;
	int *ponteiro;
	ponteiro = &var01;  // aponta para o endereco de x

	int var02 = 20;
	*ponteiro = var02;  // valor que esta no ponteiro é atualizado para o de y = 20

	printf("%i %i", var01, var02);

	return 0;
}
