#include<stdio.h>
int main ()
{
	float temp_c,temp_k;
	float inicial,final,delta;
	int n,i,op=1;
	while(op==1){
	printf("Ingrese una temperatura inicial a convertir: \n");
	scanf("%f",&inicial);
	printf("Ingrese una temperatura final a convertir: \n");
	scanf("%f",&final);
	printf("Ingrese el número de iteraciones: \n");
	scanf("%i",&n);

	delta=(final-inicial)/n;
	temp_c=inicial;
	for(i=0;i<=n;i++){
	temp_k=temp_c+273.15;
	printf("%f %f\n" ,temp_c,temp_k);
	temp_c=temp_c+delta;	// temp_c+=delta;
	}
	printf("Quieres volver a correr el programa?, presiona 1 para si o cualquier otro número para terminarlo\n");
	scanf("%i",&op);
	
	}
	return 0;
}
		
