#include <stdio.h>
#include <stdlib.h>

int main()
{    
     FILE* arc;
     int M=0,p,i,ps;
     char ax[20];
     float ma=-1000,*nm,*es;
     
     arc=fopen("nmax.txt","r");
     while(fgets(ax,20,arc)!=NULL){
     M++;
     }
     fclose(arc);
     arc=fopen("nmax.txt","r");
     nm=(float*)malloc (M*sizeof(float));
     for(i=0;i<M;i++){//aqui se empiezan a ccomparar los numeros del archivo
                      fscanf(arc,"%f",nm+i);
                      if(*(nm+i)>ma){
                                         ma=*(nm+1);
                                         ps=i+1;
                                         es=nm;
                                         }
                                         }
     fclose(arc);
     printf("Este es el numero mayor: %lf\n",ma);
     printf("Esta es su posicion: %x",es);
     free(nm);//Se libera espacio de la memoria reservada
     
  system("PAUSE");	
  return 0;
}
