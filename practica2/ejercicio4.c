/*
* Practica 2 - Ejercicio 4
*
* Escrito por: Adolfo Roman Jimenez
*/

#include <stdio.h>

void getArr(int *a, int i); //Declaramos funcion void para obtener arreglo
void arrFunc(int *a, int i); //Declaramos funcion void con apuntador como argumento para modificar arreglo
void printArr(int *a, int i); //Declaramos funcion void con apuntador como argumento para imprimir arreglo

int main(void)
{
    int k = 0, arr[5][4] = {}, *point;
    //Arreglo de 5 renglones y 4 columnas
    //Apuntador

    point = &arr[0][0]; //Se asigna direccion de apuntador a primer elemento del arreglo

    printf("Favor de ingresar los 20 elementos de su arreglo separados con un enter: \n"); //Leyenda de pantalla

    getArr(point, k); //Invoca la funcion que solicita al usuario ingresar un arreglo

    printf("\nEl arreglo ingresado es: \n"); //Leyenda de pantalla

    printArr(point, k); //Invoca la funcion que imprime el arreglo

    printf("\nModificando arreglo.... \n"); //Leyenda de pantalla

    arrFunc(point, k); //Llama funcion usando la direccion del apuntador "point" como argumento

    printf("\nSu arreglo modificado es: \n"); //Leyenda de pantalla

    printArr(point, k); //Invoca la funcion que imprime el arreglo

    return 0; //regresa 0 para finalizar programa
}

void getArr(int *a, int i)
{
    while(i < 20) //Mientras totalidad de elementos sea de 20, contando desde 0
    {
        scanf("%d", (a+i)); //Sumamos direccion del primer elemento a mas la suma de i hasta obtener la cantidad total de elementos
        i++; //sumar un lugar de elemento adicional
    }
}

void arrFunc(int *a, int i) //Declaramos funcion que no regresa ningun valor con apuntador como argumento
{
    int j = 0; //suma de renglones

    while(i < 20)
    {
        j % 2 == 0 ? (*(a + i) *= 2):(*(a + i) *= 3);

        //Si el numero de renglon es divisible entre 2:
        //TRUE: Multiplica el valor actual del elemento por 2 y lo asigna al mismo lugar
        //FALSE: Multiplica el valor actual del elemento por 3 y lo asigna al mismo lugar

        (i+1) % 4 == 0 ? j++ : j;

        //Si estamos ante el cuarto elemento de un renglon
        //TRUE: Suma un renglon adicional
        //FALSE: Deja el renglon como esta

        i++; //Suma un lugar adicional de elementos
    }
}

void printArr(int *a, int i)
{
    while(i < 20) //Mientras el numero total de elementos sea igual a 20 (si contamos desde 0)
    {
        (i + 1) % 4 == 0? printf("[%d]\n", *(a+i)): printf("[%d] ", *(a+i)) ;

        //Evalua si el numero de columna es la cuarta de un renglon y si no es el primer elemento
        // TRUE: Se agrega el ultimo elemento y un salto para indicar que se pasa al siguiente renglon
        // FALSE: Se imprime el elemento correspondiente

        i++; //Suma una columna

        //La operacion (a + i) toma a como la direccion del primer elemento y la suma i de acuerdo al numero de columna
    }
}

