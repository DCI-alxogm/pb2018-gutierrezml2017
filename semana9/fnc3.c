//Función con argumentos de entrada pero sin argumentos de salida
#include<stdio.h>
void cuadrado (float x);
int main()
{
	float a;
	printf("Introduce un numero\n");
	scanf("%f",&a);
	cuadrado(a);
}
void cuadrado (float x){//Argumento de entrada
float xx;
xx=x*x;
printf("El cuadrado de %f es%f\n",x,xx);
}
