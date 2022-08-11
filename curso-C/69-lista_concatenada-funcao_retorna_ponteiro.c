#include <stdio.h>

struct lista{
	int valor;
	struct lista *proximo;
};

// @param *pLista: ponteiro para struct lista
// @param valor  : valor informado pelo usuario
// @return       : ponteiro para struct lista (end. de struct lista)

struct lista *procurarValor(struct lista *pLista, int valor) {
	while(pLista != (struct lista *)0){
		if (pLista->valor == valor){
			return pLista;
		} else {
			pLista = pLista -> proximo;
		}
	}
	return (struct lista *) 0;
}

int main(void){
	struct lista *procurarValor(struct lista *pLista, int valor);
	struct lista m1, m2, m3;
	struct lista *resultado, *gancho = &m1; // *gancho = &m1
	int valor;

	m1.valor = 5;
	m2.valor = 10;
	m3.valor = 15;

	m1.proximo = &m2;
	m2.proximo = &m3;
	m3.proximo = 0;

	printf("Digite um valor: ");
	scanf("%i", &valor);

	// gancho ja aponta para m1 inicialmente
	resultado = procurarValor(gancho, valor);

	if (resultado == (struct lista *)0){
		printf("Valor nao encontrado");
	} else {
		printf("Valor %i encontrado", resultado->valor);
	}

	return 0;
}
