#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "func_aux_ej2.c"
#include "structs_ej2.c"
#include "Cola.h"
#include "func_ej2.c"

int main()
{
    int *pags = (int*) malloc(sizeof(int));
    Cola *fila = (Cola*) malloc(sizeof(Cola));

    ingresarInfo(fila, pags);

    imprimirDocs(fila, pags);

    return 0;
}