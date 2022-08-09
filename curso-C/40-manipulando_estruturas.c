#include <stdio.h>

int main(void){
	struct horario
	{
		int horas;
		int minutos;
		int segundos;
		double teste;
		char letra;
	};

	struct horario agora;
	agora.horas = 21;
	agora.minutos =  17;
	agora.segundos = 35;
	agora.teste = 15.4;
	agora.letra = 'b';

	struct horario depois;
	depois.horas = agora.horas + 1;
	depois.minutos = agora.minutos + 25;
	depois.segundos = 22;
	depois.teste = agora.teste / 2;
	depois.letra = 'a';
	printf("%i:%i:%i - %f, %c", depois.horas, depois.minutos, depois.segundos, depois.teste, depois.letra);

	return 0;
}
