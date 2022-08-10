#include <stdio.h>

int main(void){
	void testeVariavel(int x);
	void testePonteiro(int *pX);

	int teste = 1;
	int *pTeste = &teste;

	printf("%i - %p\n", teste, pTeste);

	testeVariavel(teste);
	testePonteiro(pTeste);  // recebe um endereco, logo sem * (seria o valor se usasse)
	// como não cria copia para esse endereco ou valor, vai direto no endereco e consegue alterar o valor
	// pode criar eficiencia de memoria, nao criaria uma copia das variaveis, mas sim manipular direto
	printf("%i - %p", teste, pTeste);


	return 0;
}

void testeVariavel(int x){
	x++; // recebe variavel
}

void testePonteiro(int *pX){
	++*pX;  // recebe ponteiro e aumenta valor que esta no endereco
}
