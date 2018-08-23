#include <stdio.h>
#include <math.h>

	int main ()
	{
	float x,y,z,r,o,p,o1,p1;
	float x1,y1,z1,R,O,P;

	printf("Ingrese coordenada en eje x\n");
	scanf("%f",&x);
	printf("Ingrese coordenada en eje y\n");
	scanf("%f",&y);
	printf("Ingrese coordenada en eje z\n");
	scanf("%f",&z);

	r=sqrt((x*x)+(y*y)+(z*z));
	o=acos(z/r);
	p=atan(y/x);
	o1=o*57.296;
	p1=p*57.296;
	
	printf("\n El valor para r es:%f",r);
	printf("\n El valor para teta en grados es:%f",o1);
	printf("\n El valor para phi en grados es:%f",p1);
	
	//A partir de aqui pasaremos de coor esfericas a cartesianas
	
	x1=r*sin(o1)*cos(p1);
	y1=r*sin(o1)*sin(p1);
	z1=r*cos(o1);

	printf("\n El valor de X es:%f",x1);
	printf("\n El valor de Yes:%f",y1);
	printf("\n El valor de Z es:%f",z1);

	return 0;
}




