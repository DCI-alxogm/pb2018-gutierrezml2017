#include <stdio.h>

int main()
{
	int numero;
	printf("Introduzca un numero entre 5-7\n");
	scanf("%i", &numero);

	switch(numero){
		case 5: printf("Es el numero 5\n"); break;
		case 6: printf("Es el numero 6\n"); break;
		case 7: printf("Es el numero 7\n"); break;
		default: printf("no coincide con los numeros solicitados");
}
//este programa se solicitan 3 numeros ya establecidos en caso de que asi no sea se avisara que no fueron los solicitados
return 0;
}


