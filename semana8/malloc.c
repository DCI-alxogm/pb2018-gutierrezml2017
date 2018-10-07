#include <stdio.h>
#include <stdlib.h>
int main (){
	int num, i, *ptr, sum=0;
	ptr = (int*) malloc(num * sizeof(int));
	
	printf("Ingresa el numero de elementos: ");
	scanf("%d", &num);
	
	if(ptr == NULL)
	{
           printf("Error! memoria no reservada.");
           exit(0);}
           
           printf("Introduce los elementos del arreglo: ");
           for(i=0; i < num; ++i)
           {
                 scanf("%d", ptr + 1);
                 sum += *(ptr + i);
                 }
     printf("Sum = %d",sum);
     free(ptr);         
           
    system("PAUSE");
	return 0;
	}
