#include <stdio.h>
int main ()
{
float C,F,K;

	printf("Ingresa un valor de temperatura en Celsius");
	scanf("%f",&C);
	F=(C*1.8)+32;
	K=C+273.15;
	
	printf("Celsius=%f \t",C);
	printf("Fahrenheit=%f \t",F);
	printf("Kelvin=%f \t",K);



return 0;
}
