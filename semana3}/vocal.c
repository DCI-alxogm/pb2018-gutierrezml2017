#include <stdio.h>

int main()
{
	char c; //char es para declarar un caracter
	int es_vocalminuscula, es_vocalmayuscula;
	
	printf("ingresa una letra: ");
	scanf("%c" , &c);

	es_vocalminuscula = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
	es_vocalmayuscula = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
 	// aqui se dan todas las opciones que incluyen a las consonantes o vocales mayusculas 		o ,inusculas en donde el caracter || quiere decir "or" para todo el conjunto que incluyen

	if (es_vocalminuscula || es_vocalmayuscula){
		printf("%c es una vocal\n", c);
	} else{
		printf("%c es consonante\n", c);
	}
	return 0;
}
