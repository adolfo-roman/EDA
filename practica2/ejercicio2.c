/*
* Practica 2 - Ejercicio 2
*
* Escrito por: Adolfo Roman Jimenez
*/

#include <stdio.h>

//Todo el codigo entre /* y */ fue usado para hacer debug. Retirar todo "/*" y "*/" para que se visualize correctamente.

int arr1[3][4][5][2], var, i, j, k, l; //Se agrego una variable adicional
int *point;

int main(void)
{
    //Se elimina la variable int i

    point = &arr1[0][0][0][0]; //Apuntador para el primer elemento del arreglo
    var = 1; //La variable var corresponde a cada uno de los elementos del arreglo

    /*
    int counter = 0; // Contador de elementos del arreglo
    */


    for (i = 0; i < 3; i++) //itera en la 4ta dimension del arreglo
    {
        for (j = 0; j < 4; j++) //itera en la 3ra dimension del arreglo
        {
            for (k = 0; k < 5; k++) //itera en la 2da dimension del arreglo
            {
                for (l = 0; l < 2; l++) //itera en la 1ra dimension del arreglo
                {
                    /*
                    printf("arr1[%d][%d][%d][%d] = %d \n",i,j,k,l, arr1[i][j][k][l] ); //imprime el primer valor del arreglo
                    printf("var = %d \n",var); //imprime el valor de var en ese momento
                    */

                    arr1[i][j][k][l] = var; //asigna el valor en var al elemento correspondiente
                    var += 2; // suma 2 a cada valor de var

                    /*
                    counter++; // suma 1 al contador

                    printf("var = %d \n",var); //Imprime el valor de var modificado
                    printf("arr1[%d][%d][%d][%d] = %d \n",i,j,k,l, arr1[i][j][k][l] ); //imprime el valor del elemento despues de asignado
                    counter++; //suma uno al contador

                    printf("Counter = %d \n", counter); //imprime el valor del contador
                    printf("point = %p \n", &arr1[i][j][k][l]); //imprime la direccion del apuntador en hex
                    printf("point = %d \n", (int)point+(counter-1)); //imprime la direccion del apuntador en int
                    &arr1[i][j][k][l] == point+(counter-1) ? printf("TRUE \n"):printf("FALSE \n"); // Evalua si el apuntador del arreglo es igual al de la operacion
                    */
                }
            }
        }
    }

    int a = *(point + 3); //asinga en variable a lo que exista en la direccion "point + 3"
    int b = *(point + 12); //asinga en variable b lo que exista en la direccion "point + 12"
    int c = *(point + 27); //asinga en variable c lo que exista en la direccion "point + 27"

    //agrega instrucciones para imprimir en pantalla a, b y c

    /*
      printf("%d\n",*(point)); //imprime el primer valor que debe de ser 1
    */
    printf("%d\n", a); //imprime valor en a
    printf("%d\n", b); //imprime valor en b
    printf("%d\n", c); //imprime valor en c

    printf("     Original   Updated    Mem. Number\n");

    for (i = 0; i < j*k*l ; i++) //itera a traves del numero de elementos totales en las primeras 3 dimensiones de arr1
    {
        printf("%d.-    %d    - ", i + 1, *(point+i)); // Imprime numero de iteracion y valor original de elemento de arreglo

        *(point+i) = i < 20 ? //Suma el valor en i a la direccion original y asigna un valor a la direccion resultante

                 (i < 10 ? 5 * (i + 1) : 6 * (i - 9)) : // i < 20 ? TRUE
                 (i < 30 ? 7 * (i - 19) : 3 * (i - 29)); // i < 20 ? FALSE

        printf("    %d   -     %d\n", *(point+i), (int)(point+i)); //Imprime valor actualizado de elemento y su direccion
    }
}