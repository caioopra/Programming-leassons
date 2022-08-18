#include <stdio.h>

#define MAIOR(x, y) x > y ? x : y  // se x maior que y, retorna x, se nao, y
#define E_MINUSCULO(carac) carac >= 'a' && carac <= 'z'  // retorna bool

int main(void){
	char caracter = 'a';

	if (E_MINUSCULO(caracter)){
		printf("Minusculo\n");
	} else {
		printf("Maiusculo\n");
	}

	printf("%i", MAIOR(4, 50));

	return 0;
}
