#include<stdio.h>
int main (int argc, char *argv[]){
printf("El programa que se esta ejecuntando es: %s/n",argv[0]);

if(argc==2){
printf("El argumento dado es: %s/n",argv[1]);
}
else if (argc>2){
printf("Mas argumentos de los necesarios: /n");
}
else{
printf("MSe requiere al menos un argumento: /n");//Es importante dar un argumento de entrada en el momento de ejecutar el programa
}
return 0;
}

