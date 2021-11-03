#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Pila.h"
#include "func_aux_ej1.c"

int main()
{
    Pila pila1 = crearPila();
    Pila pila2 = crearPila();
    Pila pila3 = crearPila();

    printf("Inserte elementos: \n");

    for(int i = 0; i < 10; i++)
    {
        int elemento = get_int("");
        push(&pila1, elemento);
    }

    push(&pila3, 0);

    while(isEmpty(pila1) == 0)
    {
        top(pila1) > top(pila3) ? push(&pila3, pop(&pila1)) : push(&pila2, pop(&pila1));
    }

    printf("Elemento Mayor: %d\n", top(pila3));
}
