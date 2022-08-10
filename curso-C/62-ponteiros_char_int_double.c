#include <stdio.h>

int main(void){
	int x = 10;
	double y = 20.50;
	char z = 'a';

	// int *pX; px = &x	-> cria ponteiro pX e atribui endereco de x ao ponteiro
	// int *px = &x         -> o valor do ponteiroé o valor do endereco

	int *pX = &x;
	double *pY = &y;
	char *pZ = &z;
	// px = endereco do ponteiro; *pX = valor do ponteiro
	printf("End. x = %p - valor x = %i\n", pX, *pX);
	printf("End. y = %p - valor y = %f\n", pY, *pY);
	printf("End. z = %p - valor z = %c\n", pZ, *pZ);

	double soma = *pX + *pY;
	printf("Soma de x e y: %f (end. %p)\n", soma, &soma);

	int *resultado;
	resultado = &x;  // pode pegar manualmente o numero do endereco e trocar &x que ira funcionar
	printf("Valor de x = %i, end = %p\n", *resultado, resultado);

	return 0;
}
