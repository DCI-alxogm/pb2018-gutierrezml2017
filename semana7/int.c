#include <stdio.h>
#include <math.h>

int main()
{
    int i,p,N,n,j;
    float a,b,delta,h,fa,suma;
    FILE *fp;
    
    fp=fopen("pot.txt","r");
    fscanf(fp, "%i %f %f %i %i ",&p,&a,&b,&N,&n);
    fprintf(fp, "%i %f %f %i %i ",p,a,b,N,n);
    fclose(fp);
    float x[N],fx[N],intx[N];
    
    for(i=0;i<N;i++){
    x[i]=0;
    fx[i]=0;
    intx[i]=0;
    }
    
    for(i=0;i<N;i++){
    x[i]=0;
    fx[i]=0;
    intx[i]=0;
    }
    
    delta=(b-a)/N;
    printf("%f\n",delta);
    
    for(i=0;i<=N;i++){
    x[i]=a+(i*delta);
    fx[i]=pow(x[i],p);
    }
    
    fa=pow(a,p);
    
    for(i=0;i<=N;i++){
    h=(x[i]-a)/n;
    suma=0;
    for(j=1;j<n;j++){
    suma=suma+pow(x[i]+ h*j,p);
    }
    intx[i]=((fx[i]+fa)/2.0)+suma;
    }
    
    return 0;
}

