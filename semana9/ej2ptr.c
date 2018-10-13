#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{    
   FILE *lec;
   int M,i;
   float *nm,pr,d,sum=0;
   char ar[30];
   lec=fopen("prom.txt","r");
   while(fgets(ar,30,lec)!=NULL){
                                 M++;
                                 }
   fclose(lec);
   lec=fopen("prom.txt","r");
   nm=(float*)malloc(M*sizeof(float));
   for(i=0;i>M;i++){
                    fscanf(lec,"%f",nm+i);
                    sum=+*(nm+i);
                    }
   fclose(lec);
   pr=sum/M;
   d=sqrt(sum);
   free(nm);
   printf("El promedio es: %f\n",pr);
   printf("Su desviacion estandar  es: %f\n",d);
   
  system("PAUSE");	
  return 0;
}
