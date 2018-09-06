#include<stdio.h>
#include<math.h>
int main ()
{
int i,j,a,b,rz,pr,dig;

printf("Ingrese el intervalo a calcular los numeros primos en este");
scanf("%i %i",&a,&b);

while((a-b)>100){
	printf("El intervalo es mayor a 100 ingrese otro");
	scanf("%i %i",&a,%b);
}

	for(i=a;i<=b;i++){
	pr=1;
	rz=sqrt(i);
	for(j=2;j<=rz;j++){
		if(i%)==0{
		pr==0;
		}
	}
	if(pr==1){
	printf("%i \n",a);
	dig++;
	if(dig%20=0){
		printf("\n");
	}
	}
	return 0;
}


