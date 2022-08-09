#include <stdio.h>

int main(void){
	struct horario{
		int horas;
		int minutos;
		int segundos;
	};

	struct horario teste[3] = {
		{10, 20, 30}, {11, 22, 33}, {111, 222, 333}
	};

	teste[0].horas = 10;
	teste[0].minutos = 20;
	teste[0].segundos = 30;

	for (int i = 0; i < 3; i++) {
		printf("%i:%i:%i\n", teste[i].horas, teste[i].minutos, teste[i].segundos);
	}

	return 0;
}
