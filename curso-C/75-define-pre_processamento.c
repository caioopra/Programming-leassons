#include <stdio.h>

#define SIM 100  // SIM vai ser interpretado como 100
#define NAO -100 // NAO vai ser interpretado como -100

int main(void){
	// comentarios sao ignorados no pre-processamento e poe espaco vazio
	// pre-processamento -> compilacao -> assembly -> linking

	int x;
 	printf("Inteiro: ");
	scanf("%i", &x);

	if(x < 10){
		printf("%i", NAO);
	} else{
		printf("%i", SIM);
	}

	return 0;
}
