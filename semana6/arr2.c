#include<stdio.h>

int main ()
{
int i, N;

printf("Ingrese el numero de elementos que desea: \n");
scanf("%d",&N);

for(i=0;i<N;i++){
	float numeros[i];
	scanf("%f",&numeros[i]);
	numeros[i]*=2;
	printf("%f\n",numeros[i]); 
	}	//Ej 4
return 0;
}
