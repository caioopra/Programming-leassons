#include <stdio.h>

int main(void){
	int idade;
	printf("Idade: \n");
	scanf("%i", &idade);

	if(idade >= 20 && idade <= 40){
		printf("Entre 20 e 40");
	}
	else {
		printf("Else");
	}
	// ||
	return 0;
}
