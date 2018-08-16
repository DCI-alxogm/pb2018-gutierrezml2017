#include <stdio.h>
int main()
{
//Los numeros reales pueden incluir tanto a racionales o irracionales de manera finita o infinita
	//Si guardaramos las variables como enteros el resultado no incluiría los puntos decimales, ya que son números irracionales

	double a,b,c,d,e;
	printf("Este programa realiza 4 operaciones distintas \n");
	printf("Indique 4 numeros reales: \n");
	scanf("%lf %lf %lf %lf",&a,&b,&c,&d);

	
	e=(a+b)*c/d;
	printf("\nEl resultado de e=(a+b)*c/d es: %lf",e);
	e=((a+b)*c)/d;
	printf("\nEl resultado de e=((a+b)*c)/d es: %lf",e);
	e=(a+b)*c/d;
	printf("\nEl resultado de e=(a+b)*c/d es: %lf",e);
	e=a+(b*c)/d;
	printf("\n el resultado de e=a+(b*c)/d es: %lf",e);
	return 0;
}
