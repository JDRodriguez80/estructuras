Proceso medidasTendencia
	//Nombre del alumno: Jesus Dario Rodriguez
	//Matricula:ES1822021661
	//Universidad Abierta y a Distancia de México UnADM 
	//Fecha: enero 2021
	//Carrera:Ingenieria en Desarrollo de Software
	//Materia:Estructura de Datos 
	//Docente:Ing. Alfredo Orozco Escobar
	
	//Definicion de variables
	Definir N Como Entero;

	Definir rMedia, j, rMediana1, rMediana2, rMediana,rVarianza , aCal, i, aux1, aux2, rDstd, rCV  Como real;
	
	Escribir "ingrese los numeros a evaluar:";
	Leer N;
	aux1<-0;
	aux2<-0;
	//declaracion del arreglo con las posiciones que el usuario indico Nota: se suma uno por que el arreglo lo inicializare en 1
	Dimension aCal[N+1];
	
	//rellenando el arreglo 
	Para i<-1 Hasta N Hacer
		Escribir "ingrese el numero ", i;
		Leer aCal[i];
		aux1<-aux1+aCal[i];
	Fin Para
	//calculo de media
	rMedia<-aux1/N;
	
	
	//Ordenado los datos para poder sacar la mediana //Algoritmo De la Burbuja
	para i <- 2 hasta N Con Paso 1 Hacer
		para j <- 1 Hasta n - i + 1 Con Paso 1 Hacer
			si aCal[j]>aCal[j+1] Entonces
				aux2 <- aCal[j];
				aCal[j] <- aCal[j+1];
				aCal[j+1]<-aux2;
			FinSi
		FinPara
	FinPara
	
	//datos ordenados de menor a mayor
	escribir "----------------------------------------------";
	Escribir "||=========== Datos ordenados ==========    ||";
	escribir "----------------------------------------------";
	para i<-1 hasta N Con Paso 1 Hacer
		Escribir "[",i,"]: ",aCal[i];
	FinPara
	//Calculando la Mediana
	Si ((N%2)<>0) Entonces
		rMediana <- aCal[(N+1)/2];
	SiNo
		rMediana1 <- aCal[(N/2)];
		rMediana2 <- aCal[(N/2)+1];
		rMediana <- (rMediana1 + rMediana2)/2;
	
	FinSi
	
	
	//calculo de  moda
	Definir moda, m, b, a, cont, num como entero;
	moda <- 0;
	m <- 0;
	
	para a <- 1 hasta n Con Paso 1 Hacer
		cont <- 0;
		para b <- a + 1 hasta n Con Paso 1 Hacer
			si aCal[a] == aCal[b] Entonces
				cont <- cont +1;
			FinSi
		FinPara
		si cont > m Entonces
			m <- cont;
			moda <- aCal[a];
		FinSi
	FinPara
 	
	
	
	//calculo de la varianza 
	para i<-1 hasta N Hacer
		aux2<- (aux2 + ((aCal[i]-rMedia)^2));
		rVarianza<- aux2/(N-1);
	FinPara
	//calculo de la  desviacion estandar
	rDstd<-rc(rVarianza);
	//calculo del coeficiente de variacion
	rCV<-rDstd/rMedia;
	

	//imprimiendo el resultado en pantalla
	escribir "----------------------------------------------";
	Escribir "||=========== resultados  ===============    ||";
	escribir "----------------------------------------------";
	escribir "Suma de los valores: " aux1;
	escribir "Datos ingresados: " N                      ;
	escribir "----------------------------------------------";
	Escribir "||======== Medidas de tendencia   =======    ||";
	escribir "----------------------------------------------";
	escribir "Media Calculada: " rMedia            ;
	Escribir "Mediana: ", rMediana;
	Escribir "Moda: " moda; 
	escribir "----------------------------------------------";
	Escribir "||======== Medidas de dispersión  =======    ||";
	escribir "----------------------------------------------";
	Escribir "varianza:", rVarianza;
	Escribir "Desviacion estandar: ", rDstd;
	Escribir "Coeficiente de variacion: ", rCV;
	escribir "----------------------------------------------";
	
	
	
	
	
FinProceso
