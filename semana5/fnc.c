#include<stdio.h>
#include<math.h>

int main ()
{
	float x, ex, sen, cs, sq, lg;
	int in, fn, it;
	
	printf("Ingresa un valor inicial: "),
	scanf("%i",&in);
	printf("Ingresa un valor inicial: "),
	scanf("%i",&fn);
	printf("Ingresa el numero de iteraciones: "),
	scanf("%i",&it);

	x=it;
	for(x=0;x<=it;x++){
	ex=exp(x);
	sen=sin(x);
	cs=cos(x);
	sq=sqrt(x);
	lg=log(x);
	
	printf("exp=%f \t sen=%f \t cos=%f \t sqrt=%f \t log=%f \n",ex,sen,cs,sqrt,lg);
	
	}
	return 0;
}
	
