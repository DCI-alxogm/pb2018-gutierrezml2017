#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, sum=0;
  int *num;
  printf("Ingrese 6 numeros enteros:\n");
  
  num=(int*) malloc(num * sizeof(int));//Error em esta parte, no se puede ejecutar el programa
  
  for(i=0;i<6;++i)
  { //(num + i) es equivalente a &num[i]
  scanf("$d",&num[i]);
  
  //*(num + 1) es equivalente a num[i]
  sum +=num[i];
}
printf("Suma = %d", sum);
  system("PAUSE");	
  return 0;
}
