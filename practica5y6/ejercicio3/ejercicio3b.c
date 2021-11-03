#include <stdio.h>
#include <stdlib.h>

#include "Cola_ej3b.c"

int main()
{
    Cola *queue = (Cola *) malloc(sizeof(Cola));
    *queue = crearCola();

    encolar(queue,8);
    encolar(queue,14);
    encolar(queue,22);
    encolar(queue,28);
    encolar(queue,30);
    encolar(queue,33);
    encolar(queue,40);
    desencolar(queue);
    desencolar(queue);
    desencolar(queue);
    encolar(queue,50);
    desencolar(queue);

    printf("primero = %d, ultimo = %d, disponibles = %d\n", queue->primero, queue->ultimo, queue->disponibles);

    for(int i = 0 ; i < 5 ; i++)
    {
        printf("indice = %d, valor = %d\n", i, queue->lista[i]);
    }

    return 0;
}