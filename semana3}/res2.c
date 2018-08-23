#include <stdio.h>

int main()
{
	int a,b;
	printf("Este programa sumará el número 1 a un número par para convertirlo a impar\n");
	printf("Ingresa un numero\n");
	scanf("%i",&a);
	
	
	if(a%2==0){ 
	b=a+1;
	printf(" b=%i ya es impar\n",b);}

	else{
	printf(" a=%i ya era impar\n",a);}

return 0;
}	
