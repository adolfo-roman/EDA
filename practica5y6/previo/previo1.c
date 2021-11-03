#include <stdio.h>

#include "Pila.h"
#include "Cola.h"

int main()
{
    Pila pilaTest = crearPila();
    Pila *pilaPtr;

    pilaPtr = &pilaTest;

    int count = 1;

    printf("********TEST CODIGO PILA*****\n\n");

    printf("Dato tipo Pila ""pilaTest"" creado\n");

    printf("\nEjecutando funcion pilaIsEmpty()\n");

    if(pilaIsEmpty(pilaTest) == 1)
    {
        printf("\tLa pila aun no contiene elementos\n");
    }
    else
    {
        printf("\tLa pila contiene elementos\n");
    }

    printf("\n");

    printf("\nEjecutando funcion push()\n\n");

    do
    {
        push(pilaPtr,count);
        printf("\tElemento agregado a pilaTest: %d\n", count);
        count++;
    }
    while(count != 11);

    printf("\nEjecutando funcion pilaIsEmpty()\n");

    if(pilaIsEmpty(pilaTest) == 1)
    {
        printf("\tLa pila aun no contiene elementos\n");
    }
    else
    {
        printf("\tLa pila contiene elementos\n");
    }

    printf("\n");

    count = 0;

     do
    {
        int aux = pop(pilaPtr);
        printf("Elemento removido de la pila %d\n", aux);
        count++;
    }
    while(count != 4);

    printf("\nElementos restantes en la pila: \n");

    for(int i = 0; i < pilaTest.tope; i++)
    {
        printf("\tindice: %d, valor: %d\n", i + 1, pilaTest.lista[i]);
    }

    printf("\nEjecutando funcion top()\n");

    printf("\tValor Top() (ultimo elemento agregado): %d\n", top(pilaTest));

    printf("\n********TEST CODIGO COLA*****\n\n");

    Cola colaTest = crearCola();
    Cola *colaPtr = &colaTest;

    printf("Dato tipo Cola ""colaTest"" creado\n");

    printf("\nEjecutando funcion colaIsEmpty()\n");

    if(colaIsEmpty(colaTest) == 1)
    {
        printf("\tLa cola aun no contiene elementos\n");
    }
    else
    {
        printf("\tLa cola contiene elementos\n");
    }
    printf("\n");

    count = 0;

    printf("Ejecutando funcion encolar()\n");
    printf("Index Primero: %d, Ultimo: %d \n", colaTest.primero, colaTest.ultimo);

    do
    {
        encolar(colaPtr,count);
        printf("\tElemento agregado a colaTest: %d\n", count);
        printf("\tIndex Primero: %d, Ultimo: %d \n", colaTest.primero, colaTest.ultimo);
        count++;
    }
    while(count < 10);

    printf("\nEjecutando funcion colaIsEmpty()\n");

    if(colaIsEmpty(colaTest) == 1)
    {
        printf("\tLa cola aun no contiene elementos\n");
    }
    else
    {
        printf("\tLa cola contiene elementos\n");
    }

    printf("\nEjecutando funcion desencolar()\n");
    printf("Index Primero: %d, Ultimo: %d \n", colaTest.primero, colaTest.ultimo);

    count = 0;

    do
    {
        int aux = desencolar(colaPtr);
        printf("\tElemento removido de colaTest: %d\n", aux);
        printf("\tIndex Primero: %d, Ultimo: %d \n", colaTest.primero, colaTest.ultimo);
        if(colaIsEmpty(colaTest) == 1){break;}
        count++;
    }
    while(count < 11);

    printf("\nEjecutando funcion colaIsEmpty()\n");

    if(colaIsEmpty(colaTest) == 1)
    {
        printf("\tLa cola aun no contiene elementos\n");
    }
    else
    {
        printf("\tLa cola contiene elementos\n");
    }

    count = 100;

    printf("\nEjecutando funcion encolar()\n");

    do
    {
        encolar(colaPtr,count);
        printf("\tElemento agregado a colaTest: %d\n", count);
        count++;
    }
    while(count < 103);

    printf("\nEjecutando funcion first()\n");

    printf("\tValor first() (primer elemento agregado): %d\n", first(colaTest));


    return 0;
}