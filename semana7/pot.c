#include<stdio.h>
#include<math.h>

int main ()
{
FILE *datos;
int a,b,p,n,k;
float fx,x,delta,sum=0,integral,fa,fb;
;

//Leer archivo
	datos=fopen("pot.txt","r");
	fscanf(datos,"%i %i %i %i %i",&a,&b,&p,&n,&k);
	
	//opcion 1
	x=a;
	fa=pow(a,p);
	h=(b-a)/n;

	{for(x=a;x<=b;x++)
	fb=(fx+fa)/2;
	x+=delta;
	}
	

	
	//opcion 2
	h=(b-a)/n;
	{for(i=1;i<n;i++1)
	x=i+a*h
	sum=sum+f(p,x);
	}

	integral=(h/2)*(f(p,a))+(f(p,b)+2*sum);

	
	
	
