#include<stdio.h>
#include<math.h>

int main ()
{
	FILE *arc;
	float x, ex, sen, cs, sq, lg;
	int in, fn, it;
	
	printf("Ingresa un valor inicial: "),
	scanf("%i",&in);
	printf("Ingresa un valor final: "),
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
	
	//printf("exp=%f \t sen=%f \t cos=%f \t sqrt=%f \t log=%f \n",ex,sen,cs,sqrt,lg);
	
	}
	arc = fopen("fnc.txt","w");
	fputs("El resultado de las funciones evaluadas es:\t",arc);
	for(x=0;x<=it;x++){
	fprintf(arc,"exp=%f \t sen=%f \t cos=%f \t sqrt=%f \t log=%f \n",ex,sen,cs,sqrt,lg);
	}
	return 0;
}
	
