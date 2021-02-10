#include<stdio.h>
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
	int dcola[ARREGLO_MAX];
	int eaux;
	float eaux1;
	int edato;
	int efinal;
	int efrente;
	int emax;
	int eopc;
	int i;
	/* inicializacion de variables */
	i = 0;
	edato = 0;
	efrente = 0;
	efinal = 0;
	emax = 0;
	eaux = 1;
int main() {
	setlocale(LC_ALL,"");//parametro de libreria locale


	printf("Este programa demuestra las operaciónes en la estructura de datos COLA o QUEUE\n");
	printf("De cuantos lugares quiere la cola? \n");
	scanf("%i",&emax);
	while (eaux!=0) {
		/* menu */
		printf("||============  Seleccione una opción ============||\n");
		printf(" ------------------------------------------------- \n");
		printf("1.- Insertar elemento\n");
		printf("2.- Comprobar si la cola esta llena\n");
		printf("3.- Comprobar si la cola esta vacía\n");
		printf("4.- Eliminar un elemento de la cola\n");
		printf("5.- Mostrar situación de la cola\n");
		printf("0.- Salir\n");
		printf(" ------------------------------------------------- \n");
		scanf("%i",&eopc);
		switch (eopc) {
		case 1:
			push();
			break;
		case 2:
				/* verificar que la cola este llena */
			if ((efinal==emax) && (efrente==1)) {
				printf("la cola esta llena\n");
			} else {
				printf("la cola no esta llena\n");
			}
			break;
		case 3:
            /* comprobar que la cola esta vacia */
			if ((efrente==0)) {
				printf("la cola esta vacía\n");
			} else {
				printf("la cola no esta vacía\n");
			}
			
			break;
		case 4:
			/* eliminando elemento */
			pop();
		
			break;
		case 5:
			/* mostrando en pantalla la situacuion de la cola actual */
			printf("Primer elemento en posición: %i\n",efrente);
			printf("ultimo elemento en posición: %i\n",efinal);
			printf("Cola con %i lugares\n",emax);
			break;
		case 0:
			printf("Gracias por utilizar el este software\n");
			eaux = 0;
			break;
		}
	}
	return 0;
}
void push(){
		if (((efinal==emax) && (efrente==1) || ((efinal+1)==efrente))) {
				printf("Error: Overflow: Cola sin lugares disponibles\n");
			} else {
				if ((efinal==emax)) {
					efinal = 1;
				} else {
					efinal = efinal+1;
				}
				printf("Introduzca un número entero\n");
				scanf("%i",&edato);
				printf("el dato %i ha sido ingresado de manera correcta\n",edato);
				dcola[efinal-1] = edato;
				if (efrente==0) {
					efrente = 1;
				}
			}
}
void pop(){
	if ((efrente==0)) {
				printf("Error: derflow:Cola Vacía\n");
			} else {
				edato = dcola[efrente-1];
				if ((efrente==efinal)) {
					efrente = 0;
					efinal = 0;
				} else {
					if ((efrente==emax)) {
						efrente = 1;
					} else {
						efrente = efrente+1;
					}
				}
				printf("se elimino correctamente el valor\n");
			}
}


