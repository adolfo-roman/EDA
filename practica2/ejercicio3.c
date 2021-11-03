/*
* Practica 2 - Ejercicio 3
*
* Escrito por: Adolfo Roman Jimenez
*/

#include <stdio.h> //Libreria estandar
#include <math.h>  //Librera que contiene la funcion pow(a,b)

void func(int *a, int *b); //Declaracion de funcion con dos argumentos como apuntadores

int main(void) //Inicio de programa
{
    int vara, varb; //Declaracion de variables a y b donde se obtendran valores del usuario
    int *pa, *pb; //Declaracion de apuntadores donde se almacenaran direcciones de variables a y b

    pa = &vara; //Se asigna la direccion de a al apuntador pa
    pb = &varb; //Se asigna la direccion de b al apuntador pb

    printf("Ingrese dos valores separados por un espacio y despues enter para ingresarlos:  \n");
    scanf("%d %d", &vara, &varb); //Obtiene valores del usuario y los asigna a las variables mencionadas

    //printf("%d, %d\n", *pa,*pb);

    func(pa, pb); //Invoca funcion func para modificar variables

    printf("\nResultados:  \n");

    printf("Variable a: %d\n", vara); //imprime el resultado asignado en vara
    printf("Variable b: %d\n", varb); //imprime el resultado asignado en varb

}

void func(int *a, int *b) //Declaracion de funcion void con dos argumentos como apuntadores
{
    *b = pow(*a, *b); //eleva "vara" (*pa) a la potencia "varb" (*pb) y el resultado lo asigna a "varb" (*pb)
    *a = *b / (*a);   //divide el nuevo resultado en "varb" (*pb) entre "vara" (*pa) y lo asigna a "vara" (*pa)
}
