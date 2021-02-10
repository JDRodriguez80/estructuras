Algoritmo COLA
	//Nombre del alumno: Jesus Dario Rodriguez
	//Matricula:ES1822021661
	//Universidad Abierta y a Distancia de México UnADM 
	//Fecha: Febrero 2021
	//Carrera:Ingenieria en Desarrollo de Software
	//Materia:Estructura de Datos 
	//Docente:Ing. Alfredo Orozco Escobar
	
	//definir variables
	definir eDato, eFrente, eFinal, eMax, eOpc, dCola, i, eAux como Entero;
	//inicializacion de variables
	i<-0;
	eDato<-0;
	eFrente<-0;
	eFinal<-0;
	eMax<-0;
	eAux<-1;
	Escribir "Este programa demuestra las operaciones en la estructura de datos COLA o QUEUE";
	Escribir "De cuantos lugares quiere la cola? ";
	Leer eMax;
	Dimension dCola[eMax];
	Mientras eAux<>0 Hacer
		//menu
		Escribir "||============  Seleccione una opcion ============||";
		escribir " ------------------------------------------------- ";
		Escribir "1.- Insertar elemento";
		Escribir "2.- Comprobar si la cola esta llena";
		Escribir "3.- Comprobar si la cola esta vacia";
		Escribir "4.- Eliminar un elemento de la cola";
		Escribir "5.- Comprobar situacion de la cola"; 
		Escribir "0.- Salir";
		escribir " ------------------------------------------------- ";
		leer eOpc;
		Segun eOpc hacer
			1: //insercion de dato
				si ((eFinal=eMax)&(eFrente=1)|((eFinal+1)=eFrente))
					Entonces
					Escribir "Error: Overflow: Cola sin lugares disponibles";
				sino 
					si (eFinal==eMax)Entonces
						eFinal<-1;
					SiNo
						eFinal<-eFinal+1;
					FinSi
					Escribir "Introduzca un numero entero";
					leer eDato;
					Escribir "el dato ", eDato, " ha sido introducido de manera correcta";
					dCola[eFinal]<-eDato;
					si eFrente==0 Entonces
						eFrente<-1;
					FinSi
				FinSi
			2:	//verificar que la cola este llena
				si (eFinal==eMax)&(eFrente==1)Entonces
					Escribir "la cola esta llena";
				SiNo
					Escribir "la cola no esta llena"; 
				FinSi
				
			3: // comprobar que la cola esta vacia
				si (eFrente==0)Entonces
					Escribir "la cola esta vacia";
				SiNo
					Escribir "la cola no esta vacia"
				FinSi
				
			4: //eliminando elemento
				si(eFrente==0)Entonces
					Escribir "Error: derflow:Cola Vacia";
				Sino
					eDato<-dCola[eFrente];
					si (eFrente=eFinal)Entonces
						eFrente<-0;
						eFinal<-0;
					SiNo
						si (eFrente==eMax)Entonces
						eFrente<-1;
					SiNo
						eFrente<-eFrente+1;
					FinSi
				FinSi
				
					Escribir "se elimino correctamente el valor";
				FinSi
				
				
			5:	//mostrando en pantalla la situacuion de la cola actual
				Escribir "Primer elemento en posicion: ", efrente;
				Escribir "ultimo elemento en posicion: ", eFinal;
				Escribir "Cola con ",eMax " lugares"; 
				
				
			0:
				Escribir "Gracias por utilizar el este software"
				eAux1<-0;
		FinSegun
		
	FinMientras
	
FinAlgoritmo
