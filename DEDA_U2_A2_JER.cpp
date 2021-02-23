#include<stdio.h>
#include<stdbool.h>
#include <locale.h> 
#include <windows.h>
    
	
	/* definir variables */
	int aLista[10]={23,5,13,11,7,14,17,19,12,16};
	int bLista[10]={23,5,13,11,7,14,17,19,12,16};
	int i, j, swap, opc;
	void bubbleSort(void);
	void insertion(void);
	int main (){
		setlocale(LC_ALL,"");//parametro de libreria locale
	printf("Nombre del alumno: Jesús Darío Rodríguez\n");
	printf("Matricula:ES1822021661 \n");
	printf("Universidad Abierta y a Distancia de México UnADM\n");
	printf("Fecha: Febrero 2021\n");
	printf("Carrera:Ingenieria en Desarrollo de Software\n");
	printf("Docente:Ing. Alfredo Orozco Escobar\n");
	printf("Materia:Estructura de Datos\n");
		do{
			printf("\n________________________________________________\n");
			printf("         Actividad 2. Ordenamientos\n");
			printf("________________________________________________\n");
			printf("1.- Método Burbuja\n");
			printf("2.- Método Insercíon\n");
			printf("3.- Salir\n");
			printf("________________________________________________\n");
			printf("Seleccione el metodo a comprobar:\n");
			
			scanf("%i",&opc);	
			switch(opc){
				case 1: 
				printf("Ordenando por el método de burbuja:\n");
				printf("Los numeros sin ordenar son:\n");
				
				for (i=0; i<10; i++){
					printf("%i",aLista[i],"\n");
					 putchar('\n');	
				}
				
				
				bubbleSort();
				putchar('\n');
				printf("Cuarta pasada :\n");
				printf("{5,7,11,13,12,14,16,17,19,23}");
				
				break;
				case 2:
				printf("Se inicia con la comparacion del valor de inicio con el de la extrema izquierda en casa pasada\n");	
				insertion();
				printf("En la cuarta pasada el vector esta ordenado asi:\n");
				printf("{5 7 11 13 23 14 17 19 12 16}\n");
					
				break;
				case 3:
					printf("Programa Concluido"); 
				break;	
				default:
				printf("Opcion no válida");	
			}
			
		}while (opc!=3);
		
		
	
	return 0;

}

void bubbleSort(){
	for (i=0; i<10; i++){
				for (j=0; j<10; j++){
					if (aLista[j]>aLista[j+1]){   
						swap=aLista[j];
						aLista[j]=aLista[j+1];
						aLista[j+1]=swap;
					}
					printf("Pasada %d ",i+1);
					printf("%d \n",aLista[j]);     				
				}
			}
 			
       	}
void insertion()
	{	
	
	for (i=0; i<10; i++){
				j=i;
				swap=bLista[i];
				while ((j>0)&&(swap<bLista[j-1])){
					bLista[j]=bLista[j-1];
					j--;
				}
				bLista[j]=swap;
				
				printf("\nPasada %d ",i+1);
				printf("empiezo con el no. %d ",bLista[j]);
				
			}	
		putchar('\n');	
		printf("Al finalizar el ordenamiento el vector queda ordenado asi:\n");
		for (i=0; i<10; i++){
				printf("%i ", bLista[i]);
			}
			printf("\n");
		
	}
       	

   
