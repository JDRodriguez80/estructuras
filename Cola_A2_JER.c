#include<stdio.h>


#define ARREGLO_MAX 100

int main() {
	int dcola[ARREGLO_MAX];
	int eaux;
	float eaux1;
	int edato;
	int efinal;
	int efrente;
	int emax;
	int eopc;
	int i;
	/* Nombre del alumno: Jesus Dario Rodriguez */
	/* Matricula:ES1822021661 */
	/* Universidad Abierta y a Distancia de México UnADM  */
	/* Fecha: enero 2021 */
	/* Carrera:Ingenieria en Desarrollo de Software */
	/* Materia:Estructura de Datos  */
	/* Docente:Ing. Alfredo Orozco Escobar */
	/* definir variables */
	/* inicializacion de variables */
	i = 0;
	edato = 0;
	efrente = 0;
	efinal = 0;
	emax = 0;
	eaux = 1;
	printf("Este programa demuestra las operaciones en la estructura de datos COLA o QUEUE\n");
	printf("De cuantos lugares quiere la cola? \n");
	scanf("%i",&emax);
	while (eaux!=0) {
		/* menu */
		printf("||============  Seleccione una opcion ============||\n");
		printf(" ------------------------------------------------- \n");
		printf("1.- Insertar elemento\n");
		printf("2.- Comprobar si la cola esta llena\n");
		printf("3.- Comprobar si la cola esta vacia\n");
		printf("4.- Eliminar un elemento de la cola\n");
		printf("5.- Comprobar situacion de la cola\n");
		printf("0.- Salir\n");
		printf(" ------------------------------------------------- \n");
		scanf("%i",&eopc);
		switch (eopc) {
		case 1:
			if (((efinal==emax) && (efrente==1) || ((efinal+1)==efrente))) {
				printf("Error: Overflow: Cola sin lugares disponibles\n");
			} else {
				if ((efinal==emax)) {
					efinal = 1;
				} else {
					efinal = efinal+1;
				}
				printf("Introduaca in numero entero\n");
				scanf("%i",&edato);
				printf("el dato %i ha sido introducido de manera correcta\n",edato);
				dcola[efinal-1] = edato;
				if (efrente==0) {
					efrente = 1;
				}
			}
			/* verificar que la cola este llena */
			break;
		case 2:
			if ((efinal==emax) && (efrente==1)) {
				printf("la cola esta llena\n");
			} else {
				printf("la cola no esta llena\n");
			}
			/* comprobar que la cola esta vacia */
			break;
		case 3:
			if ((efrente==0)) {
				printf("la cola esta vacia\n");
			} else {
				printf("la cola no esta vacia\n");
			}
			/* eliminando elemento */
			break;
		case 4:
			if ((efrente==0)) {
				printf("Error: derflow:Cola Vacia\n");
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
			/* mostrando en pantalla la situacuion de la cola actual */
			break;
		case 5:
			printf("Primer elemento en posicion: %i\n",efrente);
			printf("ultimo elemento en posicion: %i\n",efinal);
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

