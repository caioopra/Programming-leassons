#include <stdio.h>

int main(void){
	struct lista{
		int valor;
		struct lista *proximo;  // passa endereco de outra struct lista
	};

	struct lista m1, m2, m3;  // membros
	struct lista *gancho = &m1; // aponta para endereco de m1

	m1.valor = 10;
	m2.valor = 20;
	m3.valor = 30;

	m1.proximo = &m2;
	m2.proximo = &m3;
	m3.proximo = (struct lista *)0; // aponta para estrutura nula; ou 0

	// acessar membros
	while(gancho != (struct lista *)0){
		printf("%i\n", gancho->valor);  // gancho aponta para m1 e o valor de m1 inicialmente = 10
		gancho = gancho->proximo;       // gancho vai apontar para o proximo gancho
	}

	return 0;
}
