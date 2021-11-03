#include <stdio.h>
#include <stdlib.h>

#include "colaDoble.h"

int main()
{
    Cola dobleTest = crearCola(10);

    printf("Dato tipo Cola dobleTest creado\n");
    printf("Tamano: 10\n");

    empty(dobleTest);

    for(int i = 0; i < 10; i++)
    {
        encolarFinal(&dobleTest, i + 1);
        printf("Valor agregado final: %d\n", i + 1);
    }

    encolarFinal(&dobleTest, 11);

    empty(dobleTest);

    pair(dobleTest);

    for(int i = 0; i < 5; i++)
    {
        int aux = desencolarFinal(&dobleTest);
        printf("Valor removido final: %d\n", aux);
    }

    pair(dobleTest);

    for(int i = 0; i < 5; i++)
    {
        encolarInicio(&dobleTest, i + 10);
        printf("Valor agregado inicio: %d\n", i + 10);
    }

    encolarInicio(&dobleTest, 15);

    pair(dobleTest);

    for(int i = 0; i < 3; i++)
    {
        int aux = desencolarInicio(&dobleTest);
        printf("Valor removido inicio: %d\n", aux);
    }

    pair(dobleTest);

    for(int i = 0; i < 2; i++)
    {
        int aux = desencolarFinal(&dobleTest);
        printf("Valor removido final: %d\n", aux);
    }

    pair(dobleTest);
}

