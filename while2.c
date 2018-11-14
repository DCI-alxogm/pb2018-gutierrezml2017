#include<stdio.h>
#include<math.h>
int main ()
{
	int num,cs=1;
	float x,y,z,ro,the,phi,o1,p1,x2,y2,z2,C,F,K;


	while (cs==1){
	printf("Introduzca el programa a compilar. 1 para cambio de temperatura y 2 para coordenadas:\n");
	scanf("%i",&num);
	switch(num){
		case 1:
			printf("Ingresa temperatura en celsius: \n");
			scanf("%f",&C);
			F=(C*1.8)+32;
			K=C+273.15;
			printf("c=%f \t",C);
			printf("f=%f \t",F);
			printf("k=%f \n",K);

			

			break;

		case 2:
		printf(" Ingresa un valor para x: \n");
		scanf("%f",&x);
		printf(" Ingresa un valor para y: \n");
		scanf("%f",&y);
		printf(" Ingresa un valor para z: \n");
		scanf("%f",&z);
		ro=sqrt((x*x)+(y*y)+(z*z));
		the=acos(z/ro);
		phi=atan(y/x);
		o1=the*57.296;
		p1=phi*57.296;
		printf("\nEl valor para Ro es: %f",ro);
		printf("\nEl valor para theta es:%f",o1);
		printf("\nEl valor para fi es:%f",p1);

		x2=ro*sin(o1)*cos(p1);
		y2=ro*sin(o1)*sin(p1);
		z2=ro*cos(o1);
		printf("\n El valor de x es: %f",x2);
		printf("\n El valor de y es: %f",y2);
		printf("\n El valor de z es: %f",z2);
  
		break;
		default: printf("Error ingresa otro numero");
}

	printf("Presiona 1 para correr\n");
	printf("Ingrese otro número para acabar con el programa: \n");
	scanf("%i", &cs);
	}

	printf("el pgrograma ha conluido: \n");
return 0;
}
