#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <locale.h> 
#include <time.h>
#include<conio.h>
//definiendo valiables
int n, eopc ;
//declaro variables auxiliares para la eficiencia
int bInterna,bExterna,iInterna,iExterna,sInterna, sExterna,qsAux;
int qsExterna=0, qsInt=0;
int aGeneral[100],aBurbuja[100],aIns[100], aSel[100], aQS[100],aBusqueda[100];
bool eaux1=false; 
void comparacion(void);
void busqueda(int aGeneral[100]);
void bubble(int aGeneral[100]);
void insertion(int aGeneral[100]);
void selection(int aGeneral[100]);
void quicksort(int aGeneral[100],int first,int last);
void limpia();
void impresion(int aQS[100]);	
void limpiaDirecto();
int nA=20; //numero de elementos en el arreglo 
int main (){
	int iG=0,kG=0;
	setlocale(LC_ALL,"");//parametro de libreria locale
	printf("Nombre del alumno: Jesús Darío Rodríguez\n");
	printf("Matricula:ES1822021661 \n");
	printf("Universidad Abierta y a Distancia de México UnADM\n");
	printf("Fecha: Marzo 2021\n");
	printf("Carrera:Ingenieria en Desarrollo de Software\n");
	printf("Docente:Ing. Alfredo Orozco Escobar\n");
	printf("Materia:Estructura de Datos\n");
	
	printf("Este programa demuestra las diferentes estructuras de ordenacion\n");
	//incializando el arreglo 
	srand(time(NULL));
	for(iG=0; iG<20; iG++){
			aGeneral[iG]= rand() %101;
		}
		printf(" ------------------------------------------------- \n");
		printf("el arreglo sin ordenar es:\n");
		for(kG=0; kG<20; kG++){
			printf("%i\'",aGeneral[kG]);
		}
		putchar('\n');
		printf(" ------------------------------------------------- \n");
		putchar('\n');
		limpia();
		while (eaux1!=true){
				/* menu */
		putchar('\n');		
		printf("||============  Seleccione una opción ============||\n");
		printf(" ------------------------------------------------- \n");
		printf("1.- Burbuja\n");
		printf("2.- Insertion\n");
		printf("3.- Selection\n");
		printf("4.- Quicksort\n");
		printf("5.- Busqueda Sequencial\n");
		printf("6.- Comparación de efectividad de métodos\n");
		printf("0.- Salir\n");
		printf(" ------------------------------------------------- \n");
		scanf("%i",&eopc);
		
		switch (eopc) {
			case 1:
				limpiaDirecto();
				bubble(aGeneral);
	
			break;
		case 2:
			    limpiaDirecto();
				insertion(aGeneral);
			break;
		case 3:
				limpiaDirecto();
				selection(aGeneral);
			break;
		case 4:
			limpiaDirecto();

			printf("el arreglo sin ordenar es:\n");
			putchar('\n');
			for (int i =0; i<20; i++){
				printf("%i \'",aGeneral[i]);	
			}
			putchar('\n');
			printf("el arreglo ordenado es");
			putchar('\n');
			quicksort(aGeneral,0,19);
			
			putchar('\n');
		printf("las iteraciones utilizadas en este metodo fueron:");	
		putchar('\n');
		printf("Internas:%i",qsInt);
		qsAux=qsInt;
		
		qsInt=0;
		putchar('\n');
		printf(" ------------------------------------------------- \n");	
			break;
			
		case 5:
			limpiaDirecto();
			busqueda(aGeneral);
			break;	
		case 6:
			limpiaDirecto();
			comparacion();	
			break;
		case 0:
			limpiaDirecto();
			printf("Gracias por utilizar el este software\n");
			eaux1 = true;
			break;
	
		}

		}

	}
	void comparacion(){
		printf(" ------------------------------------------------- \n");
		printf(" ------------------Burbuja------------------------ \n");
		printf(" ------------------------------------------------- \n");
		printf("Numero de iteraciones hechas: %i",bInterna);
		putchar('\n');
		printf(" ------------------------------------------------- \n");
		printf(" ------------------Insertion---------------------- \n");
		printf(" ------------------------------------------------- \n");
		printf("Numero de iteraciones hechas: %i",iInterna);
		putchar('\n');
		printf(" ------------------------------------------------- \n");
		printf(" ------------------Selection---------------------- \n");
		printf(" ------------------------------------------------- \n");
		printf("Numero de iteraciones hechas: %i",sInterna);
		putchar('\n');
		printf(" ------------------------------------------------- \n");
		printf(" ------------------QuickSort---------------------- \n");
		printf(" ------------------------------------------------- \n");
		printf("Numero de iteraciones hechas: %i",qsAux);
		qsAux==0;
		putchar('\n');
		printf(" ------------------------------------------------- \n");
		printf(" ------------------------------------------------- \n");
		printf("como se ve en la escala, claramente el método de QuickSort es más eficiénte");
		
	}
	void busqueda(int aGeneral[]){
		int swap3,lB;
		//rellenando el arreglo
		for(int i=0;i<20;i++){
			aBusqueda[i]=aGeneral[i];
		}
		// ordenamos el arreglo para esto usamos uno de los metodos de ordenamiento
		for (int iB=0; iB<20; iB++){
			
			for (int jB=0; jB<19; jB++){
				
				if (aBusqueda[jB]>aBusqueda[jB+1]){   
					swap3=aBusqueda[jB];
					aBusqueda[jB]=aBusqueda[jB+1];
					aBusqueda[jB+1]=swap3;
					}					  				
				}
			}
			putchar('\n');
			//Imprimiendo el arreglo ordenado 
			printf("el arreglo ordenado es:\n");
				putchar('\n');
			
			for(lB=0; lB<20; lB++){
			printf("%i\'",aBusqueda[lB]);
     		}
			//metodo para la busqueda del numero 50 o su inmediato superior
				//declaracion de las variables
				int dato=50;
				int iB=0;
				while(iB<20){
					iB++;
					if(aBusqueda[iB]==dato){
						putchar('\n');	
						printf("el numero: %i fue encontrado en la itercacion: %i ",dato,iB+1 );
						putchar('\n');	
						break;	
					}
					if (aBusqueda[iB]>=50){
						putchar('\n');	
						printf("el numero %i no se encontro ",dato);
						printf("el inmediato superior es el numero: %i",aBusqueda[iB]);
						printf(" y fue localizado en la iteración %i ",iB+1);
						break;
					}
				}
				
	}
	
	void bubble(int aGeneral[]){
		bInterna==0;
		bExterna==0;
		//copiando el arreglo principal al secundario para ordenarlo 
		int swap,j,k,i,iB,l;
		for (i=0; i<20; i++){
			aBurbuja[i]=aGeneral[i];
		}
				
		printf("el arreglo sin ordenar es:\n");
		for(k=0; k<20; k++){
			printf("%i\'",aBurbuja[k]);
			
		}
		
	//ordenando por burbuja
		
		for (iB=0; iB<20; iB++){
			bExterna++;
			for (j=0; j<19; j++){
				bInterna++;
				if (aBurbuja[j]>aBurbuja[j+1]){   
					swap=aBurbuja[j];
					aBurbuja[j]=aBurbuja[j+1];
					aBurbuja[j+1]=swap;
					}					  				
				}
			}
			putchar('\n');
			
			//imprimiendo el arreglo ordenado
			putchar('\n');
			printf("el arreglo despues de ser ordenado con el método de la burbuja:\n");
			for(l=0; l<20; l++){
			printf("%i\'",aBurbuja[l]);
		}
		putchar('\n');
		printf("las iteraciones externas utilizadas en este metodo fueron:");	
		putchar('\n');
		printf("Externas:%i",bExterna);
		putchar('\n');
		printf("Internas:%i",bInterna);
		putchar('\n');
		printf(" ------------------------------------------------- \n");	
		
	}
	
	void insertion(int aGeneral[]){
		
		int k,swap2,l,m,n;
		iInterna==0;
		iExterna==0;
		//rellenando el arreglo 
		for (m=0; m<20; m++){
			aIns[m]=aGeneral[m];
		}
		
		//mostrando el arreglo con el que se trabajara
		printf("el arreglo sin ordenar es:\n");
		for(k=0; k<20; k++){
			printf("%i\'",aIns[k]);
			
		}
		
		//aplicando el metodo de insercion
		
		
	for (k=0; k<20; k++){
		iExterna++;
				l=k;
				swap2=aIns[k];
				while ((l>0)&&(swap2<aIns[l-1])){
					iInterna++;
					aIns[l]=aIns[l-1];
					l--;
				}
				aIns[l]=swap2;
				
				printf("\nPasada %d ",k);
				printf("empiezo con el no. %d ",aIns[l]);
				
			}	
		putchar('\n');	
		printf("Al finalizar el ordenamiento con el metodo de inserción el vector queda ordenado asi:\n");
		for (k=0; k<20; k++){
				printf("%d ", aIns[k]);
			}
		putchar('\n');
		printf("las iteraciones externas utilizadas en este metodo fueron:");	
		putchar('\n');
		printf("Externas:%i",iExterna);
		putchar('\n');
		printf("Internas:%i",iInterna);
		putchar('\n');
		printf(" ------------------------------------------------- \n");
	}
	
	void selection(int aGeneral[]){
		int i,j,k,l,aux,min;
		sInterna=0,sExterna=0;
		//rellenamos el arreglo 
		for (i=0; i<20; i++){
			aSel[i]=aGeneral[i];
		}
		//imprimimos el arreglo a trabajar		
		printf("el arreglo sin ordenar es:\n");
		for(k=0; k<20; k++){
			printf("%i\'",aSel[k]);
  		} 
		//Aplicando el metodo
		for(i=0;i<20;i++){
			sExterna++;
			min=i;
			for(j=i+1;j<20;j++){
				sInterna++;
				if(aSel[j]<aSel[min]){
					min=j;
				}
			}
			aux=aSel[i];
			aSel[i]=aSel[min];
			aSel[min]=aux;
		
			
		} 
		//presentacion del resultado
		putchar('\n');
		printf("El arreglo ordenado con el método de selección queda asi:\n");
		for(l=0;l<20;l++){
			printf("%i\'",aSel[l]);
		}
			putchar('\n');
		printf("las iteraciones externas utilizadas en este metodo fueron:");	
		putchar('\n');
		printf("Externas:%i",sExterna);
		putchar('\n');
		printf("Internas:%i",sInterna);
		putchar('\n');
		printf(" ------------------------------------------------- \n");
		
}
   void quicksort(int aGeneral[],int first,int last){	

   int i,iQS, jQS,j,k, pivot, temp; 
    
   
   	
   //	rellenamos el arreglo 
		for (iQS=0; iQS<20; iQS++){
			aQS[iQS]=aGeneral[iQS];
		}
	
 	//metodo
	
   if(first<last){
      pivot=first;
      i=first;
      j=last;
 
      while(i<j){
         while(aQS[i]<=aQS[pivot] && i<last)
            i++;
            
         while(aQS[j]>aQS[pivot])
            j--;
         qsInt++;
         
 		if(i<j){
            temp=aQS[i];
            aQS[i]=aQS[j];
            aQS[j]=temp;
            
         }   
         
         
      }
      
      temp=aQS[pivot];
      aQS[pivot]=aQS[j];
      aQS[j]=temp;
      quicksort(aQS,first,j-1);
      quicksort(aQS,j+1,last);
      
 
   }
   
   impresion(aQS);
  			
  
  	
}           
   void impresion(int aQS[]){
   	int k;
    
   for(k=0; k<19; k++){
		printf("%i\'",aQS[k]);
  		} putchar('\n');
   }             
	void limpia(){
	
	printf("Presione cualquie tecla para continuar: ");
	getch();
	system("cls");
}
	void limpiaDirecto(){
		system("cls");
	}
