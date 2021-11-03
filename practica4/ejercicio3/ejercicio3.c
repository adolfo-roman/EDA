#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "struct_ej3.c"
#include "func_aux_ej3.c"
#include "func_ej3.c"

int main()
{

    int tamano = get_int("No. de Computadoras: ");


    Computadora *pcPtr = malloc(sizeof(Computadora) * tamano);

    createComp(pcPtr, tamano);
    printComp(pcPtr, tamano);

    printf("\nTamano de estructura: %d bytes\n\n", (int)sizeof(Computadora));

    for (int i = 0; i < tamano ; i++)
    {
        if(i == 0)
        {
            printf("***DIRECCIONES DE MEMORIA DE *pcPtr***\n\n");
        }
        printf("%d. %d\n", i + 1, (int)&pcPtr[i]);
    }

    return 0;
};

