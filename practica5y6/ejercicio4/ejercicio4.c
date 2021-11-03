#include <stdio.h>
#include <stdlib.h>

#include "colaDoble.h"
#include "operaciones_ej4.c"

int main()
{
    Cola *doble = (Cola*) malloc(sizeof(Cola));

    *doble = crearCola(8);

    bloque(doble);

    free(doble);

    return 0;
}