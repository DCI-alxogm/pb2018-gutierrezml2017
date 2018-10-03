#include <stdio.h>
int main (){
	int var = 20;
	int *ip;
	ip = &var;

	printf("La dirección de la variable var es: %x\n",&var );
	printf("Dirección guardada en el apuntador ip: %x\n", ip );
	printf("El valor de *ip: %d\n", *ip);
	return 0;
	}
