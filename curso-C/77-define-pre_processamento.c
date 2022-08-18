#include <stdio.h>

#define NUMERO_MAXIMO 1000

void umaFuncao(void){
	printf("%i\n", NUMERO_MAXIMO);
}

void umaOutraFuncao(void){
	printf("%i\n", NUMERO_MAXIMO);
}

int main(void){
	void umaFuncao(void);
	void umaOutraFuncao(void);

	printf("%i\n", NUMERO_MAXIMO);
	umaFuncao();
	umaOutraFuncao();

	return 0;
}
