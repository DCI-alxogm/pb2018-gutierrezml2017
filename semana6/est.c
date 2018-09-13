#include <stdio.h>
int main ()
{
	int A=10,mujer,hombre=0;
	int ed[A],cal[A],sem[A],arr[8],i,m,l,p,h;
	int sexo[A];
	float k=0,prom=0;
	m=0;
	for(h=0;h<=8;h++){
		arr[h]=0;
		sexo[h]=0;
	}
	printf("Este programa registra los datos de 10 alumnos (tales como la edad, calificación y semestre)\n");
	for(i=0;i<=9;i++){
		p=i+1;
		printf("%d",p);
		printf(".-");
		printf("Ingrese la edad: \n");
		scanf("%d",&ed[i]);
		printf("%d.Ingrese la calificacion de 1 a 10: \n",p);
		scanf("%d",&cal[i]);
		prom=prom+cal[i];
		printf("%d.Ingrese el semestre (de 1 a 9): \n",p);
		scanf("%d",&sem[i]);
		if(sem[i]==1){
			arr[0]++;
		}
		else if(sem[i]==2){
			arr[1]++;
		}
		else if (sem[i]==3){
			arr[2]++;
		}
		else if(sem[i]==4){
			arr[3]++;
		}
		else if(sem[i]==5){
			arr[4]++;
		}
		else if(sem[i]==6){
			arr[5]++;
		}
		else if (sem[i]==7){
			arr[6]++;
		}
		else if(sem[i]==8){
			arr[7]++;
		}
		else if(sem[i]==9){
			arr[8]++;
		}
		printf("%d.Ingrese su sexo: \n",p);
		scanf("%d",&sexo[i]);
		if(sexo[i]==0){//Este if else diferencía el 0 para mujer y 1 para hombre
			mujer++;
		} 
		else if(sexo[i]==1){
			hombre++;
		}
	}
	for(l=0;l<=8;l++){
		printf("El numero de estudiantes es: ");
		m=l+1;
		printf("%d \n",m);
		printf("%d \n",arr[l]);
	}
	k=prom/10;//aqui se guardara el promedio
		printf("Se registraron 10 estudiantes, de los cuales %d son mujeres y %d son hombres \n",mujer,hombre);
		printf("El promedio de las calificaciones de los estudiantes es: %f",k);
		
}

