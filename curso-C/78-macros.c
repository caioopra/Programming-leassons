#include <stdio.h>

#define PI 3.14159
#define DOIS_PI 2 * PI

// macro; "formula" que faz operacao
#define AREA_CIRCULO(raio) raio * raio * PI

int main(void){
	printf("%f\n", PI);
	printf("%f\n", DOIS_PI);
	printf("%f\n", AREA_CIRCULO(10));

	return 0;
}
