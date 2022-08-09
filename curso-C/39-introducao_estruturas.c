#include <stdio.h>

int main(void){
	// definicao
	struct horario
	{
		int horas;
		int minutos;
		int segundos;
	};

	struct horario agora;  // estrutura "agora" do tipo horario
	agora.horas = 21;
	agora.minutos =  17;
	agora.segundos = 35;

	printf("%i:%i:%i", agora.horas, agora.minutos, agora.segundos);

	return 0;
}
