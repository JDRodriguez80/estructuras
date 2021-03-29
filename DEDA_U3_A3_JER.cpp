#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include<conio.h>

//creando la estructura
typedef struct nodo{
	char dato;
	struct nodo *izquierdo;
	struct nodo *derecho;
	
}nod;

//prototipo de funcion 
nod *crear (char dato);
void preOrden(nod *raiz);
void postOrden(nod *raiz);
void inOrden(nod *raiz);
void limpia();
void datos();
void menu();

//declaracion de variables globales 
int opc;
bool eaux1;
int main(){
	setlocale(LC_CTYPE, "Spanish");
	
	
	//crear los nodos
	nod* raiz;
	raiz=crear('+');
	raiz->izquierdo=crear('*');
	raiz->izquierdo->izquierdo=crear('A');
	raiz->izquierdo->derecho=crear('B');
	raiz->derecho=crear('^');
	raiz->derecho->izquierdo=crear('/');
	raiz->derecho->izquierdo->izquierdo=crear('C');
	raiz->derecho->izquierdo->derecho=crear('D');
	raiz->derecho->derecho=crear('2');	
	
	//menu
	datos();
	limpia();
	while(eaux1!=true){
		menu();
		switch(opc){
		case 1:
        	printf("Recorrido pre-Orden \n");
        	preOrden(raiz);
		break;
			
		case 2:
			printf("Recorrido InOrden \n");
        	inOrden(raiz);
		break;
		
		case 3:
			printf("Recorrido Post-Orden \n");
        	postOrden(raiz);
		break;
		
		case 0:
		limpia();
		printf("Gracias por utilizar el este software\n");
		eaux1 = true;
		break;	
		
		}	
	}
	
}

nod *crear (char dato){
	//creando el nuevo nodo
	nod *nuevo= (nod*) malloc(sizeof(nod));
	// asignando el valor 
	nuevo->dato=dato;
	//inicializar los lados del árbol como nulos
	nuevo->izquierdo=NULL;
	nuevo->derecho=NULL;
	return nuevo;
}
void datos(){
	printf("Nombre del alumno: Jesús Darío Rodríguez\n");
	printf("Matricula:ES1822021661 \n");
	printf("Universidad Abierta y a Distancia de México UnADM\n");
	printf("Fecha: Marzo 2021\n");
	printf("Carrera:Ingenieria en Desarrollo de Software\n");
	printf("Docente:Ing. Alfredo Orozco Escobar\n");
	printf("Materia:Estructura de Datos\n");
}
void limpia(){
    //system("cls");
    }
void menu(){
	   /* menu */
		putchar('\n');	
			
		printf("||============  Seleccione una opción ============||\n");
		printf("||Árbol para la expresion: (A+B)+(C/D)^2          ||\n");
		printf(" ------------------------------------------------- \n");
		printf("1.- Impresión \"PRE-ORDEN\"\n");
		printf("2.- Impresióm \"INORDEN\"\n");
		printf("3.- Impresión \"POSTORDEN\"\n");
		printf("0.- Salir\n");
		printf(" ------------------------------------------------- \n");
		scanf("%i",&opc);

}
void imprimirNodo(nod *nodo){
	if(nodo!=NULL){
		printf("%c", nodo->dato);
		
	}else{
		printf("\n nodo vacío");
	}
}

void preOrden(nod *raiz){
	if(raiz!=NULL){
		imprimirNodo(raiz);
		preOrden(raiz->izquierdo);
		preOrden(raiz->derecho);
		
	}
}
void inOrden(nod *raiz){
	if(raiz!=NULL){
		inOrden(raiz->izquierdo);
		imprimirNodo(raiz);
		inOrden(raiz->derecho);
		
	}
	
}
void postOrden(nod *raiz){
	if(raiz!=NULL){
		postOrden(raiz->izquierdo);
		postOrden(raiz->derecho);
		imprimirNodo(raiz);
		
	}
}

