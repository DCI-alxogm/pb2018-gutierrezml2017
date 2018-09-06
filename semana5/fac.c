#include<stdio.h>
int main ()
{
	int i,fc=1,n,op=1;
	while(op==1){

	printf("Ingrese un numero para calcular su factorial \n");
	scanf("%i",&n);
	
	for(i=1;i<=n;i++){
	fc*=i;
	}
	
	printf("\n El factoria del numero %i es %i\n",n,fc );
	fc=1;
	printf("Quieres volver a ejecutar el programa? teclee 1 para si u otro numero para no\n");
	scanf("%i",&op);
	}
	return 0;
	}

