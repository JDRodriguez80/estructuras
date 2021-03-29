#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include <locale.h> 
using namespace std;


//creacion de nodo
struct Nodo{
	int dato;
	Nodo *der;
	Nodo *izq;
	Nodo *raiz;
}nodo;

//prototipos y variables globales
Nodo *crearNodo(int,Nodo *);
void destruirNodo(Nodo *nodo);
void postOrden(Nodo *arbol);
void eliminarNodo(Nodo *nodoEliminar);
void inOrden(Nodo *arbol);
void preOrden(Nodo *arbol);
Nodo *minimo(Nodo *arbol);
void menu();
void limpia();
void datos();
void mostrarArbol(Nodo *arbol, int );
int contador=0;
int dato,opc;
bool eaux1=false;
void insertarNodo(Nodo *&arbol, int n, Nodo *raiz);
void eliminar(Nodo *arbol,int);



Nodo *arbol =NULL; //se crea el árbol con nodos nulos
//main

int main (){
	setlocale(LC_CTYPE, "Spanish");//parametros de la libreria locale.h para los acentos
	datos();
	while(eaux1!=true){
		
		menu();
		switch(opc){
		case 1:
        	printf("Introduzca el valor: ");
			cin>>dato;
			insertarNodo(arbol,dato,NULL);
			limpia();
			printf("El árbol hasta el momento es:\n ");
			mostrarArbol(arbol, contador);
			
		break;
			
		case 2:
			printf("Introduzca el valor a eliminar: ");
			cin>>dato;
			printf("borrando valor... \n");
			eliminar(arbol,dato);
			printf("Valor Borrado... ");
			printf("El árbol hasta el momento es:\n ");
			mostrarArbol(arbol, contador);
			
		break;
		
		case 3:
			printf("Recorrido Pre-orden\n");
			preOrden(arbol);
		break;
		
		case 4:
			printf("Recorrido In-orden\n");
			inOrden(arbol);
		break;
		
		case 5:
			printf("Recorrido Post-orden\n");
			postOrden(arbol);
		break;
		case 6:
		mostrarArbol(arbol, contador);	
		break;
		
		case 0:
		limpia();
		printf("Gracias por utilizar el este software\n");
		eaux1 = true;
		break;	
		
		}	
	}
	
	
}
void menu(){
	   /* menu */
		putchar('\n');		
		printf("||============  Seleccione una opción ============||\n");
		printf(" ------------------------------------------------- \n");
		printf("1.- Creación de nodos\n");
		printf("2.- Eliminación de nodos\n");
		printf("3.- Impresión \"PRE-ORDEN\"\n");
		printf("4.- Impresión \"INORDEN\"\n");
		printf("5.- Impresión \"POSORDEN\"\n");
		printf("0.- Salir\n");
		printf(" ------------------------------------------------- \n");
		scanf("%i",&opc);

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
    system("cls");
    }

//creando nuevo nodo
Nodo *crearNodo(int n, Nodo *raiz){
	Nodo *nuevo = new Nodo();
	nuevo->dato= n;
	nuevo->der = NULL;
	nuevo->izq =NULL;
	nuevo->raiz=raiz;
	return nuevo;
}

//insercion de nodos
void insertarNodo(Nodo *&arbol, int n, Nodo *raiz){
	if(arbol==NULL){//arbol vacio
		Nodo *nuevo = crearNodo(n,raiz);
		arbol= nuevo;
	}
	else{//arbol con 1 o mas nodos
		int valorRaiz = arbol->dato; //obteniendo el valor de la raiz
		if(n< valorRaiz){
			insertarNodo(arbol->izq,n,arbol);//insertando nodo al lado izquierdo de la raiz
		}else {//elemento mayor a la raiz
		insertarNodo(arbol->der,n,arbol);//insertando nodo al lado derecho de la raiz
	    }
	}
}

void preOrden(Nodo *arbol){
	//comprobando si el árbol esta vacio
	if(arbol==NULL){
		return;
	}
	cout<<arbol->dato<<" - "; 
	preOrden(arbol->izq);
	preOrden(arbol->der);
	
}
void inOrden(Nodo *arbol){
	//comprobando si el árbol esta vacio
	if(arbol==NULL){
		return;
	}
	inOrden(arbol->izq);
	cout<<arbol->dato<<" - ";
	inOrden(arbol->der);
}

void postOrden(Nodo *arbol){
	//comprobando si el árbol esta vacio
	if(arbol==NULL){
		return;
	}
	postOrden(arbol->izq);
	postOrden(arbol->der);
	cout<<arbol->dato<<" - ";
}
void eliminar(Nodo *arbol, int n){
	if(arbol == NULL){ 
		return;
		
	}
	else if(n < arbol->dato){//determinando si el dato es menor que la raiz
		eliminar(arbol->izq,n);//busca por la izquierda
		
	}
	else if(n > arbol->dato){//buscando por la derecha
		eliminar(arbol->der,n);
		
	}
	else{ 
		eliminarNodo(arbol);
		
	}
}

void reemplazar(Nodo *arbol,Nodo *nuevo){
	
	if(arbol->raiz){//determinando raiz del nodo
		
		if(arbol->dato == arbol->raiz->izq->dato){//el nodo es izq o derecho
			arbol->raiz->izq = nuevo; 
			
		}
		//si el nodo a eliminar tiene un hijo derecho
		else if(arbol->dato == arbol->raiz->der->dato){//el nodo es izq o derecho
			arbol->raiz->der = nuevo; 
	}
	if(nuevo){
		
		nuevo->raiz = arbol->raiz;
		
		}
	}
}
void destruirNodo(Nodo *nodo){
	nodo->izq = NULL; 
	nodo->der = NULL; 
	delete nodo; 
}

//elimninando nodo encontrado 
void eliminarNodo(Nodo *nodoEliminar){
	
	if(nodoEliminar->izq && nodoEliminar->der){ 
		Nodo *menor = minimo(nodoEliminar->der);
		nodoEliminar->dato = menor->dato; 
		eliminarNodo(menor); 
	}
	else if(nodoEliminar->izq){
		reemplazar(nodoEliminar,nodoEliminar->izq);
		destruirNodo(nodoEliminar);
		
	}
	else if(nodoEliminar->der){
		reemplazar(nodoEliminar,nodoEliminar->der);
		destruirNodo(nodoEliminar);
	}
	else{
		reemplazar(nodoEliminar,NULL);
		destruirNodo(nodoEliminar);
	}
}
Nodo *minimo(Nodo *arbol){
	//checando por árbol vacio
	if(arbol == NULL){
		return NULL; 
		
	}
	if(arbol->izq){
		return minimo(arbol->izq); 
		
	}
	else{
		return arbol;
		
	}
}
void mostrarArbol(Nodo *arbol, int cont){
	
	if(arbol == NULL){
		return;
	}
	else{
		mostrarArbol(arbol->der,cont+1);
		for(int i = 0; i < cont; i ++){
			cout<<"   "; 
		}
		cout<<arbol->dato<<endl;
		mostrarArbol(arbol->izq, cont+1); 
		
	}
}
