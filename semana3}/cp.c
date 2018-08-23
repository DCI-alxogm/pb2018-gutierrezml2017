#include <stdio.h>
#include <math.h>
int main ()
{
float x,y,r,PI=3.1416,a1,a2,a3,a4;

//Este programa pasara de coordenadas cartesianas a polares

printf("Ingresa un numero para el eje x:\n");
scanf("%f",&x);
printf("Ingresa un numero para el eje y:\n");
scanf("%f",&y);
printf("La coordenada ingesada es: (%f,%f)\n",x,y);

//En esta parte se encuentran comandos de la librería math.h
r=sqrt(pow(x,2)+pow(y,2));
a1=atan(y/x)*(180/PI);
a2=(atan(y/x)*(180/PI))+180;
a3=(atan(y/x)*(180/PI))+180;
a4=(atan(y/x)*(180/PI))+180;

//Los siguientes condicionales definen el cuadrante en el que este de acuerdo a las coordenadas ingresadas y el angulo 
if(x>0 && y>0){
	printf("La coordenada polar se encuentra en el cuadrante 1 y (r,theta) es: (%f,%f) \n",r,a1);}
else if(x<0 && y>0){
	printf("La coordenada polar se encuentra en el cuadrante 2 y (r,theta) es:(%f,%f) \n",r,a2);}
else if(x<0 && y<0){
	printf("La coordenada polar se encuentra en el cuadrante 3 y (r,theta) es:(%f,%f) \n",r,a3);}
else if(x>0 && y<0){
	printf("La coordenada polar se encuentra en el cuadrante 4 y (r,theta) es:(%f,%f) \n",r,a4);}
return 0;
}

