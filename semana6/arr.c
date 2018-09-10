#include<stdio.h>

int main ()
{
	int i, N=10;
	float numeros[N];
	

	for(i=0;i<N;i++){
	numeros[i]=0;
	}	//Ej 1, 

	for(i=0;i<N;i++){
	scanf("%f",&numeros[i]);
	}	//Ej 2 variable flotante (del arreglo)


	for(i=0;i<N;i++){
	printf("%f \n",numeros[i]); 
	}	//Ej 3
	
return 0;
}
	
