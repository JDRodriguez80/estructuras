

#include<stdio.h>
#include<stdbool.h>
#include <locale.h> //libreria para acentuar
    /* Nombre del alumno: Jesús Darío Rodríguez */
	/* Matricula:ES1822021661 */
	/* Universidad Abierta y a Distancia de México UnADM  */
	/* Fecha: Febrero 2021 */
	/* Carrera:Ingenieria en Desarrollo de Software */
	/* Materia:Estructura de Datos  */
	/* Docente:Ing. Alfredo Orozco Escobar */
	
	/* definir variables */
	
#define ARREGLO_MAX 100
	int dpila[ARREGLO_MAX];
	int eaux1;
	int eopc;
	int etope;
	int evalor;
	int i;
	bool lmargen;
	int n;
	n = 0;
	i = 0;
	eopc = 0;
	etope = 0;
	eaux1 = 1;
	evalor = 0;

int main() {
	setlocale(LC_ALL,"");//parametro de libreria locale
	

	printf("Este programa demuestra las operaciones en la estructura de datos PILA o STACK\n");
	printf("De cuantos elementos quiere la pila?\n");
	scanf("%i",&n);
	while (eaux1!=0) {
		/* menu */
		printf("||============  Seleccione una opción ============||\n");
		printf(" ------------------------------------------------- \n");
		printf("1.- Insertar elemento\n");
		printf("2.- Comprobar si la pila esta llena\n");
		printf("3.- Comprobar si la pila esta vacía\n");
		printf("4.- Eliminar un elemento de la pila\n");
		printf("5.- Comprobar situación de la pila\n");
		printf("0.- Salir\n");
		printf(" ------------------------------------------------- \n");
		scanf("%i",&eopc);
		switch (eopc) {
		case 1:
		
		
			push();
			break;
		case 2:
			
			if ((etope==n)) {
				lmargen = true;
				printf("la pila esta llena\n");
			} else {
				lmargen = false;
				printf("La pila aun tiene espacios\n");
			}
			
			break;
		case 3:
		
			if ((etope==0)) {
				lmargen = true;
				printf("la pila esta vacía\n");
			} else {
				lmargen = false;
				printf("la pila no esta vacía\n");
			}
			
			break;
		case 4:
		
			pop();
			break;
		case 5:
			printf("elemntos ingresados: %i\n",etope);
			printf("elementos maximos permitidos: %i\n",n);
			
			break;
		case 0:
			printf("Gracias por utilizar el este software\n");
			eaux1 = 0;
			break;
		}
	}
	return 0;
}

void push(){
		if ((lmargen==true)) {
				printf("Overflow error-- Pila llena\n");
			} else {
				printf("Introduzca un número entero\n");
				scanf("%i",&evalor);
				printf("Se ingreso el valor: %i a la pila\n",evalor);
				if (etope==n) {
					printf("Se alcanzo el cupo máximo permitido en la pila\n");
				} else {
					etope = etope+1;
					dpila[etope-1] = evalor;
					if (etope==n) {
						printf("Se alcanzo el cupo maximo permitido en la pila\n");
					}
				}
			}

}
void pop(){
		if ((etope==0)) {
				printf("Error: derflow: pila vacía\n");
			} else {
				evalor = dpila[etope-1];
				etope = etope-1;
				printf("se elimino un elemento de manera correcta\n");
			}	
}
