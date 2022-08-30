#include <stdio.h>
#include <stdlib.h>

int main(void){
	char x[] = "coxinha";

	// putc (pode ser macro) e fputc (funcao) possuem o mesmo funcionamento
	// escrevem caracter em output string especificado
	putc('a', stdout); // normalmente, console = stdout

	/////////////////////

	char x2[] = "pastel";
	FILE * file = fopen("90-texto.txt", "w");

	putc('a', file);

	putc(x[3], stdout);

	////////////////////
	// colocar todos os caracteres no arquivo ou printar
	int i = 0;
	while (x[i] != '\0') {
		//putc(x[i], stdout);

		//putc(x[i], file);
		i++;
	}

	return 0;
}
