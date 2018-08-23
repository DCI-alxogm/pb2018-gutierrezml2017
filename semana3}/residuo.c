#include <stdio.h>

int main(){
	int a;
	printf("ingresa un numero\n");
	scanf("%i" ,&a);
	if(a%2==0){ //el comando a%2==0 significa que dividirá el numero ingresado entre 2 y si no hay 				residuo será par
	printf(" a=%i es par\n",a);
	}else{	//else significa que si no se cumple la única condición del residuo será un número par
	printf(" a=%i es impar\n",a);

}
return 0;
}
