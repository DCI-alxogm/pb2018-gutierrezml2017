#include <stdio.h>
#include <math.h>
int main()
{

float X,y1,y2,y3,pi,rad;

	printf("Ingresa un número real: \n");
	scanf("%f",&X);
	pi=3.1416;
	rad=(X*pi)/180;
	y1=exp(-X);
	y2=(cos(rad))+(2*tan(rad/2));
	y3=(log(X))+(3*(X*X));
	
	
	printf("exp(-x)=%f \n",y1);
	printf("((cos(rad))+(2*tan(rad/2))=%f \n",y2);
	printf("log10(x)+(3*x^2)=%f \n",y3);

return 0;
}
