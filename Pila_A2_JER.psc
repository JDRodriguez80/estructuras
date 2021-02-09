Algoritmo pila_a2
	//Nombre del alumno: Jesus Dario Rodriguez
	//Matricula:ES1822021661
	//Universidad Abierta y a Distancia de México UnADM 
	//Fecha: enero 2021
	//Carrera:Ingenieria en Desarrollo de Software
	//Materia:Estructura de Datos 
	//Docente:Ing. Alfredo Orozco Escobar
	Definir eOpc,eValor,eTope,n, dPila, eAux1, i  como entero;
	Definir lMargen Como Logico;
	n<-0;
	i<-0;
	eOpc<-0;
	eTope<-0;
	eAux1<-1;
	eValor<-0;
	lMargen<-falso;
	
	
	
	Escribir "Este programa demuestra las operaciones en la estructura de datos PILA o STACK";
	Escribir "De cuantos elementos quiere la pila?";
	Leer n;
	Dimension dPila[n];
	Mientras eAux1<>0 Hacer
		//menu
		Escribir "||============  Seleccione una opcion ============||";
		escribir " ------------------------------------------------- ";
		Escribir "1.- Insertar elemento";
		Escribir "2.- Comprobar si la pila esta llena";
		Escribir "3.- Comprobar si la pila esta vacia";
		Escribir "4.- Eliminar un elemento de la pila";
		Escribir "5.- Comprobar situacion de la pila"; 
		Escribir "0.- Salir";
		escribir " ------------------------------------------------- ";
		leer eOpc;
		Segun eOpc hacer
			1: //insercion de dato
				si(lMargen=Verdadero)
					Entonces
					Escribir "Overflow error-- Pila llena";
				SiNo
					Escribir "Introduzca un numero entero";
					Leer eValor;
					Escribir "Se introdujo el valor:", evalor," a la pila";
					si eTope=n Entonces
						Escribir "Se alcanzo el cupo maximo permitido en la pila";
					SiNo
						eTope<-eTope+1;
						dPila[eTope]<-eValor;
						si eTope=n Entonces
							Escribir "Se alcanzo el cupo maximo permitido en la pila";
						FinSi
					FinSi
					
				FinSi
			2:	//verificar que la pila este llena
				si(eTope=n)Entonces
					lMargen<-Verdadero;
					Escribir "la pila esta llena";
				sino
					lMargen<-Falso;
					Escribir "La pila aun tiene espacios";
				FinSi
			3: // comprobar que la pila esta vacia
				si(eTope=0) Entonces
					lMargen<-Verdadero;
					Escribir "la pila esta vacia";
				SiNo
					lMargen<-falso;
					Escribir "la pila no esta vacia";
				FinSi
			4: //eliminando elemento
				si(etope==0)Entonces
					Escribir "Error: derflow: pila vacia";
				SiNo
					eValor<-dPila[eTope];
					eTope<-eTope-1;
					Escribir "se elimino un lemento de manera correcta";
					
				FinSi
			5:	//mostrando en pantalla la situacuion de la pila actual
				Escribir "elemntos ingresados: ", etope;
				Escribir "elementos maximos permitidos: ", n;
				Escribir "esta es la pila ingresada:"
				para i<-1 hasta n Hacer
					Escribir "valor",i,":",dpila[i];
				FinPara
			0:
				Escribir "Gracias por utilizar el este software"
				eAux1<-0;
		FinSegun
	
	FinMientras
	
	
	
FinAlgoritmo
