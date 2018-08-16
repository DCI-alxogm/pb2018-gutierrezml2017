#include <stdio.h>
int main()
{
//Se declaran las variables
//Las primeras 3 operaciones son exactamente las mismas
	//Por jerarquía de operaciones primero hará lo que hay en los (), después *,/.% y al 	último lo que tenga que ver con =
		
	int a,b,c,d,e;
	printf("Este programa realiza 4 operaciones distintas\n");
	printf("Indique 4 numeros reales: \n");
	scanf("%i %i %i %i",&a,&b,&c,&d);

	
	e=(a+b)*c/d;
	printf("\nEl resultado de e=(a+b)*c/d es: %i",e);
	e=((a+b)*c)/d;
	printf("\nEl resultado de e=((a+b)*c)/d es: %i",e);
	e=(a+b)*c/d;
	printf("\nEl resultado de e=(a+b)*c/d es: %i",e);
	e=a+(b*c)/d;
	printf("\n el resultado de e=a+(b*c)/d es: %i",e);
	return 0;
}

