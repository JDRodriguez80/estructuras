

#include<stdio.h>
#include<stdbool.h>

#define ARREGLO_MAX 100

int main() {
	int dpila[ARREGLO_MAX];
	int eaux1;
	int eopc;
	int etope;
	int evalor;
	int i;
	bool lmargen;
	int n;
	/* Nombre del alumno: Jesus Dario Rodriguez */
	/* Matricula:ES1822021661 */
	/* Universidad Abierta y a Distancia de M�xico UnADM  */
	/* Fecha: enero 2021 */
	/* Carrera:Ingenieria en Desarrollo de Software */
	/* Materia:Estructura de Datos  */
	/* Docente:Ing. Alfredo Orozco Escobar */
	n = 0;
	i = 0;
	eopc = 0;
	etope = 0;
	eaux1 = 1;
	evalor = 0;
	lmargen = false;
	printf("Este programa demuestra las operaciones en la estructura de datos PILA o STACK\n");
	printf("De cuantos elementos quiere la pila?\n");
	scanf("%i",&n);
	while (eaux1!=0) {
		/* menu */
		printf("||============  Seleccione una opcion ============||\n");
		printf(" ------------------------------------------------- \n");
		printf("1.- Insertar elemento\n");
		printf("2.- Comprobar si la pila esta llena\n");
		printf("3.- Comprobar si la pila esta vacia\n");
		printf("4.- Eliminar un elemento de la pila\n");
		printf("5.- Comprobar situacion de la pila\n");
		printf("0.- Salir\n");
		printf(" ------------------------------------------------- \n");
		scanf("%i",&eopc);
		switch (eopc) {
		case 1:
			if ((lmargen==true)) {
				printf("Overflow error-- Pila llena\n");
			} else {
				printf("Introduzca un numero entero\n");
				scanf("%i",&evalor);
				printf("Se introdujo el valor:%i a la pila\n",evalor);
				if (etope==n) {
					printf("Se alcanzo el cupo maximo permitido en la pila\n");
				} else {
					etope = etope+1;
					dpila[etope-1] = evalor;
					if (etope==n) {
						printf("Se alcanzo el cupo maximo permitido en la pila\n");
					}
				}
			}
			/* verificar que la pila este llena */
			break;
		case 2:
			if ((etope==n)) {
				lmargen = true;
				printf("la pila esta llena\n");
			} else {
				lmargen = false;
				printf("La pila aun tiene espacios\n");
			}
			/* comprobar que la pila esta vacia */
			break;
		case 3:
			if ((etope==0)) {
				lmargen = true;
				printf("la pila esta vacia\n");
			} else {
				lmargen = false;
				printf("la pila no esta vacia\n");
			}
			/* eliminando elemento */
			break;
		case 4:
			if ((etope==0)) {
				printf("Error: derflow: pila vacia\n");
			} else {
				evalor = dpila[etope-1];
				etope = etope-1;
				printf("se elimino un lemento de manera correcta\n");
			}
			/* mostrando en pantalla la situacuion de la pila actual */
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
