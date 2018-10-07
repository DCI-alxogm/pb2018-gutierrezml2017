#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, *ptr, sum = 0;
    
    printf("Ingrese el numero de elementos: ");
    scanf("%d", &num);
    
    ptr = (int*) calloc(num, sizeof(int));
        
        if(ptr == NULL)
        {
               printf("Error! memoria resorvada");
               exit(0);
               }
        printf("Ingrese los elementos de el arreglo:");
        for(i=0;i<num;++i)
        {
                          scanf("%d",ptr+1);
                          sum += *(ptr + i);
                          }
        
        printf("Sum = %d",sum);
        free(ptr);
  
  system("PAUSE");	
  return 0;
}
