#include <stdio.h>

int main(void){
	int matriz[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	void funcaoPrint(int x[][3]);
	funcaoPrint(matriz);

	return 0;
}

// informar ao menos segunda parte (pode colocar a primeira, opcionalmente
void funcaoPrint(int matriz[][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%i ", matriz[i][j]);
		}
		printf("\n");
	}
}
