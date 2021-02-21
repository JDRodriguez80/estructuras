#include<stdio.h>
#include<stdbool.h>
#include <locale.h> 
    /* Nombre del alumno: Jesús Darío Rodríguez */
	/* Matricula:ES1822021661 */
	/* Universidad Abierta y a Distancia de México UnADM  */
	/* Fecha: Febrero 2021 */
	/* Carrera:Ingenieria en Desarrollo de Software */
	/* Materia:Estructura de Datos  */
	/* Docente:Ing. Alfredo Orozco Escobar */
	
	/* definir variables */
	int aLista[10]={23,5,13,11,7,14,17,19,12,16};
	int i, j, swap;
	void bubbleSort(void);
	void print_array(int *array, int size);
	int main (){
		setlocale(LC_ALL,"");//parametro de libreria locale
		
		printf("Ordenando por el método de burbuja:\n");
		bubbleSort();
		printf("Cuarta pasada :\n");
		printf("{5, 13, 11, 7, 23, 14, 17, 19, 12, 16}");
		
		
		
		
		
		
	return 0;

}




void bubbleSort(){
	void print_array(int *array, int size);
	for (i = 0 ; i < 10 - 1; i++)
    {
    for (j = 0 ; j < 10 - i - 1; j++)
    {
      if (aLista[j] > aLista[j+1]) 
      {
        swap        = aLista[j];
        aLista[j]   = aLista[j+1];
        aLista[j+1] = swap;
        print_array(aLista, 10);
        putchar('\n');
      }
     
     }
    }
 
}
	
	
void print_array(int *array, int size) {
    int i;
    putchar('{');  
    for (i = 0; i < size; i++) {
        printf("%d%s", array[i], i + 1 == size ? "}" : ", ");
    }   
}
