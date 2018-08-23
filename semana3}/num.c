#include <stdio.h>

	int main ()
{
	int num1, num2;
	printf("Introduzca dos numeros enteros: ");
	scanf("%i %i", &num1, &num2);
	
	if(num1==num2)
	{
		printf("Resultado: %d = %d",num1,num2);
	}
	
	else if (num1>num2)
	{
		printf("Resultado: %d > %d", num1, num2);
	}
	else
	{
		printf("Resultado: %d < %d",num1, num2);
	}
	return 0;
}
