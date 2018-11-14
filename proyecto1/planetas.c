#include<stdio.h>
#define G 0.00029592 //en unidades de dia al cuadrado
#include<math.h>

int main ()
{
FILE *arc;
int h,M,i;
float x0,y0,z0,vx0,vy0,vz0;
double xt,yt,zt,vxt,vyt,vzt,r;

arc = fopen("proyecto1.txt","r");
	fscanf(arc,"%f %f %f %f %f %f %i %i",&x0,&y0,&z0,&vx0,&vy0,&vz0,&h,&M);
	printf("%f %f %f %f %f %f %i %i",x0,y0,z0,vx0,vy0,vz0,h,M);
	fclose(arc);
	
	vxt=((vx0-h))(G*M*x0)/(r)

	for(i=0;i<364;i++){
	h=i;
	}

	
}





