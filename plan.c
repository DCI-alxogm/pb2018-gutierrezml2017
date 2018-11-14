#include<stdio.h>
#include<math.h>
#include <stdlib.h>

int main ()
{
FILE *arc;
int h,M,i,j,N;
float x0,y0,z0,vx0,vy0,vz0,r,G;
double xt,yt,zt,vxt,vyt,vzt,rt;
G=0.00029592; //en unidades de dia al cuadrado

arc = fopen("proyecto1.txt","r");
	fscanf(arc,"%f %f %f %f %f %f %i %i",&x0,&y0,&z0,&vx0,&vy0,&vz0,&h,&M);
	fclose(arc);
	
	for(i=0;i<365;i++){
	h=i;
	
	xt=x0+(vx0*h);
	x0=xt;
	
	yt=y0+(vy0*h);
	y0=yt;
	
	zt=z0+(vz0*h);
	z0=zt;

	
	
    rt=sqrt(pow(x0,2)+pow(y0,2)+pow(z0,2));
    r=rt;
               
    vxt=(vx0-h)*(0.00029592*x0)/pow(r,3);
    vx0=vxt;
    vyt=(vy0-h)*(0.00029592*y0)/pow(r,3);
    vy0=vyt;
    vzt=(vz0-h)*(0.00029592*z0)/pow(r,3);
    vz0=vzt;
    
    printf("%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n",xt,yt,zt,vxt,vyt,vzt);}
    
    arc=fopen("resultados.txt","w");
    fscanf(arc,"%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n",&xt,&yt,&zt,&vxt,&vyt,&vzt);
    fprintf(arc,"%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n",xt,yt,zt,vxt,vyt,vzt);
    
    
    
    
	

	
system("PAUSE");	
  return 0;	

	
}
	
   
    vzt=(vz0-h)*(0.00029592*z0)/pow(r,3);
    vz0=vzt;
    
    printf("%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n",xt,yt,zt,vxt,vyt,vzt);}
    
    arc=fopen("resultados.txt","w");
    fscanf(arc,"%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n",&xt,&yt,&zt,&vxt,&vyt,&vzt);
    fprintf(arc,"%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n",xt,yt,zt,vxt,vyt,vzt);
    
    
    
    
	

	
system("PAUSE");	
  return 0;	

	
}
