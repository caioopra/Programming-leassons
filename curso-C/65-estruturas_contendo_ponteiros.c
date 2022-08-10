#include <stdio.h>

int main(void){
	struct horario {
		int *pHora;
		int *pMinuto;
		int *pSegundo;
	};

	struct horario hoje;

	int hora = 10;
	int minuto = 20;
	int segundo = 30;

	// definindo enderecos para os ponteiros da struct apontarem
	hoje.pHora = &hora;
	hoje.pMinuto = &minuto;
	hoje.pSegundo = &segundo;

	// *hoje.pX = valor; hoje.pX = endereco
	printf("Hora - %i, end. - %p\n", *hoje.pHora, hoje.pHora);
	printf("Minuto - %i, end. - %p\n", *hoje.pMinuto, hoje.pMinuto);
	printf("Segundo - %i, end. - %p\n", *hoje.pSegundo, hoje.pSegundo);

	*hoje.pSegundo = 40;
	printf("Segundo - %i, end. - %p\n", *hoje.pSegundo, hoje.pSegundo);

	return 0;
}
