#include<stdio.h>

int main ()
{
FILE *arc;
float var1,var2;
char var[255];

//Escritura
	arc = fopen("test.txt","w");
	fputs("Esta es una prueba de fputs...\n",arc);
	fprintf(arc,"fprintf...\n");
	var1=0.15;
	var2=100.8;
	fprintf(arc, "%f\t%f\n",var1,var2);
	fclose(arc);
}

