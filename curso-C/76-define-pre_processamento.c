#include <stdio.h>

#define PI 3.14159
#define NULO 0

double areaCirculo(double raio){
	return raio * raio * PI;
}


int main(void){
	double areaCirculo(double raio);
	double raio;

	for(int i = 3; i != NULO; i--){
		printf("Digite o raio: ");
		scanf("%lf", &raio);
		printf("Area do circulo: %lf\n", areaCirculo(raio));
	}
	return 0;
}
