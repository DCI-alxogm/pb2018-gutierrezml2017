#include<stdio.h>

int main ()
{
FILE *arc;
float var1,var2;
char var[255];

//Lectura
	arc = fopen("test.txt","r");
	fgets(var,255,(FILE*)arc);
	printf("%s",var);
	fscanf(arc,"%s",var);
	printf("%s\n",var);
	fscanf(arc,"%f\t%f",&var1,&var2);
	printf("%f\t%f\n",var1,var2);
	fclose(arc);

}
