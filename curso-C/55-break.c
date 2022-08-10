#include <stdio.h>

int main(void){
	for (int i = 1; i <= 20; i++){
		if(i % 3 == 0 && i % 9 == 0){
			printf("Numero %i divisivel por 3 e 9\n", i);
			break;
		} else {
			printf("proximo\n");
		}
	}
	return 0;
}
