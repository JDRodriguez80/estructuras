Proceso correlacionPearson
	//Nombre del alumno: Jesus Dario Rodriguez
	//Matricula:ES1822021661
	//Universidad Abierta y a Distancia de México UnADM 
	//Fecha: enero 2021
	//Carrera:Ingenieria en Desarrollo de Software
	//Materia:Estructura de Datos 
	//Docente:Ing. Alfredo Orozco Escobar
	
	//Definicion de variables
	
	Definir N Como Entero;
	
	Definir   i, aux1, aux2,aux3,aux4, aux5, aPeso, aEdad,  rResultado Como real;
	Definir int1 Como Entero;
	
	Escribir "la cantidad de numeros a evaluar:";
	Leer N;
	aux1<-0;
	aux2<-0;
	aux3<-0;
	aux4<-0;
	aux5<-0;
	int1<-0;
	rResultado <-0;
	//declaracion de arreglos con las posiciones que el usuario indico Nota: se suma uno por que el arreglo lo inicializare en 1
	Dimension aPeso[N+1];
	Dimension aEdad[N+1];
	
	//rellenando el arreglo de las edades
	Para i<-1 Hasta N Hacer
		Escribir "ingrese la edad del niño ", i;
		Leer aEdad[i];
		aux1<-aux1+aEdad[i]; 
		aux4<-aux4+(aEdad[i]^2); //calculando la sumatoria de las edades al cuadrado 
		
		
	Fin Para

	//rellenando arreglo de peso
	Para i<-1 Hasta N Hacer
		Escribir "ingrese el peso del niño ", i;
		Leer aPeso[i];
		aux2<-aux2+aPeso[i];
		aux5<-aux5+(aPeso[i]^2); //calculando la sumatoria de los pesos al cuadrado 
	Fin Para
	//calculando las sumatoria del producto de edad*peso
	Para i<-1 Hasta N Hacer
		aux3<-aux3+((aEdad[i]*aPeso[i]));
		
	Fin Para
	// claculando la correlación
	rResultado<- ((n*aux3)-(aux1*aux2)) / (rc(n*(aux4)-(aux1^2))*(rc(n*aux5-(aux2^2))));
	
	Si rResultado==1 || rResultado==-1 entonces
		Escribir "La correlacion de pearson es de:" rResultado;
		Escribir "Por lo que la interpretacion de este resultado indica que es una correlacion perfecta";	
	FinSi
	si rResultado >= 0.01 y rResultado <= 0.19 Entonces
		Escribir "La correlacion de pearson es de:" rResultado;
		Escribir "por lo que la interpretacion de este resultado indica que se encontro una correlacion positiva muy baja";
	FinSi
	si rResultado >= 0.2 y rResultado <= 0.39 Entonces
		Escribir "La correlacion de pearson es de:" rResultado;
		Escribir "por lo que la interpretacion de este resultado indica que se encontro una correlacion positiva baja";
	FinSi
	si rResultado >= 0.4 y rResultado <= 0.69 Entonces
		Escribir "La correlacion de pearson es de:" rResultado;
		Escribir "por lo que la interpretacion de este resultado indica que se encontro una correlacion positiva moderada";
	FinSi
	si rResultado >= 0.7 y rResultado <= 0.89 Entonces
		Escribir "La correlacion de pearson es de:" rResultado;
		Escribir "por lo que la interpretacion de este resultado indica que se encontro una correlacion positiva alta";
	FinSi
	si rResultado >= 0.9 y rResultado <= 0.99 Entonces
		Escribir "La correlacion de pearson es de:" rResultado;
		Escribir "por lo que la interpretacion de este resultado indica que se encontro una correlacion positiva muy alta";
	FinSi
	si rResultado >= -0.01 y rResultado <= -0.19 Entonces
		Escribir "La correlacion de pearson es de:" rResultado;
		Escribir "por lo que la interpretacion de este resultado indica que se encontro una correlacion negativa muy baja";
	FinSi
	si rResultado >= -0.2 y rResultado <= -0.39 Entonces
		Escribir "La correlacion de pearson es de:" rResultado;
		Escribir "por lo que la interpretacion de este resultado indica que se encontro una correlacion negativa baja";
	FinSi
	si rResultado >= -0.4 y rResultado <= -0.69 Entonces
		Escribir "La correlacion de pearson es de:" rResultado;
		Escribir "por lo que la interpretacion de este resultado indica que se encontro una correlacion negativa moderada";
	FinSi
	si rResultado >= -0.7 y rResultado <= -0.89 Entonces
		Escribir "La correlacion de pearson es de:" rResultado;
		Escribir "por lo que la interpretacion de este resultado indica que se encontro una correlacion negativa alta";
	FinSi
	si rResultado >= -0.9 y rResultado <= -0.99 Entonces
		Escribir "La correlacion de pearson es de:" rResultado;
		Escribir "por lo que la interpretacion de este resultado indica que se encontro una correlacion negativa muy alta";
	FinSi
FinProceso
