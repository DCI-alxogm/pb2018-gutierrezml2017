#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define eps 0.05

int main()

{
FILE *arc;
int i,j,k,n;
float a[10][10],x[10];
float sum,temp,error,big; 

    printf("Ingresa la dimension de la placa (nxn)(no mas de n=10): ");
    scanf("%d",&n) ;
    printf("Introduce las temperaturas en cada coordenada: \n");

for(i=1;i<=n;i++)
{
for(j=1;j<=n+1;j++)
{
printf("a[%d][%d]= ",i,j);
scanf("%f",&a[i][j]);
}
}

for(i=1;i<=n;i++)

{
x[i]=0;
}

do

{
big=0;
for(i=1;i<=n;i++)
{
 sum=0;
 for(j=1;j<=n;j++)
{
                  if(j!=i)
{

                          sum=sum+a[i][j]*x[j];

}

}

temp=(a[i][n+1]-sum)/a[i][i];

error=fabs(x[i]-temp);

                      if(error>big)

{

                      big=error;

}

                      x[i]=temp;

printf("\nx[%d] =%f",i,x[i]);

}printf("\n");

}

while(big>=eps);

printf("\n\n la nueva temperatura es");

for(i=1;i<=n;i++)

{

printf("\nx[%d]=%f",i,x[i]);

}
arc=fopen("temp.txt","w");
fprintf(arc,"\n\n la nueva temperatura es");
fprintf(arc,"\nx[%d]=%f",i,x[i]);
fclose(arc);

getch();

}                 
                      
                                       
  

