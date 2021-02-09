Proceso calculoDeMuestra
	//Nombre del alumno: Jesus Dario Rodriguez
	//Matricula:ES1822021661
	//Universidad Abierta y a Distancia de México UnADM 
	//Fecha: enero 2021
	//Carrera:Ingenieria en Desarrollo de Software
	//Materia:Estructura de Datos 
	//Docente:Ing. Alfredo Orozco Escobar
	
	//Definicion de variables
	Definir N, p, q, z, e, R Como Real;
	Definir opc Como Entero;
	Definir C Como Caracter;
	
	//solicita datos de entrada
	Escribir "ingrese el total de poblacion";
	Leer N;
	Escribir "ingrese el valor de la probabilidad de exito";
	leer p;
	Escribir "ingrese el margen de error permitido";
	leer e;
	
	//inicia menu para seleccionar el nivel de confianza permitido
	Escribir "Seleccione el nivel de confianza permitidio:";
	Escribir "1.- 90%";
	Escribir "2.- 95%";
	Escribir "3.- 99%";
	Leer opc;
	Segun opc Hacer
		1:	z<- 1.645;
			C<-"90%";
		2:	z<- 1.960;
			C<-"95%";
		3:	z<- 2.576;
			C<-"99%";
	FinSegun
	//finaliza el menu de seleccion del nivel de confianza
	
	Limpiar Pantalla;
	
	//calculo de q
	q<- 1-p;
	
	//calculo de la solucuion
	R<- (z^2 * ((p*q)*N)) / ((e^2 * (N-1))+(z^2 *(p*q)));
	//despliegue de resultados
	Limpiar Pantalla;
	Escribir "***************************************";
	Escribir "* el tamaño de la muestra es del:" R;
	Escribir "**************************************";
	Escribir "el valor de la poblacion analizada fue de:" N;
	Escribir "el margen de error es del " e;
	Escribir "El valor de confianza es del:" C;
	

	
FinProceso
