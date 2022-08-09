#include <stdio.h>
//#include <string.h>  // permite trabalhar mais facilmente com string

int main(void){
	char teste[] = {'a', 'b', 'c'};

	for (int i = 0; i < 3; i++){
		printf("%c", teste[i]);
	}
	printf("\n");
	return 0;
}
