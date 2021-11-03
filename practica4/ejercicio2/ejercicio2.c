#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define size 2

#include "Alumno.h"
#include "funciones_ej2.c"

int main(){

	int j;

	printf("Tamano de objeto Alumno = %d \n",(int)sizeof(Alumno));

	Alumno *din1, *din2, *din3;

	din1 = malloc(size*sizeof(Alumno));
	din2 = calloc(size,sizeof(Alumno));

	informacionAlumno(din1);
	printAlumnos(din1);


	/*printf("\nPrimer apuntador: \n");

	for (j = 0; j < size; j++)
	{
		printf("Direccion[%d]=%d\n", j, (int)&din1[j]);
	}
	printf("\n");

	printf("Segundo apuntador: \n");

	for(j = 0; j < size; j++)
	{
		printf("Direccion[%d]=%d \n", j, (int)&din2[j]);
	}
	printf("\n");

	printf("Con realloc: \n");

	din3 = realloc(din2,10);

	for (j = 0; j < 10; j++)
	{
		printf("&din3[%d]=%d \n", j, (int)&din3[j]);
	}*/

	free(din1);
	free(din2);

	system("PAUSE");
}
