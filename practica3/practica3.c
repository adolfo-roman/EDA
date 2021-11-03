#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#include "estructuras.c"
#include "crear.c"
#include "asignar.c"
#include "mostrar.c"
#include "funciones.c"


Division division1;
Division *division1ptr = &division1;

int main(void)
{
    int option = inicio();

    switch(option)
    {
        case 1:
            division1 = crearDivision();
            main();
            break;

        case 2:
            if (division1.nombreDivision == NULL)
            {
                printf("No existen divisiones.\n\n");
                main();
            }
            else
            {
                asignarBatallonADivision(division1ptr);
                main();
            }

            break;

        case 3:
            if (division1.batallones[0].ubicacion == NULL &&
                division1.batallones[1].ubicacion == NULL &&
                division1.batallones[2].ubicacion == NULL)
            {
                printf("No existen batallones.\n\n");
                main();
            }
            else
            {
                asignarMilitarABatallon(division1ptr);
                main();
            }
            break;

        case 4:
            mostrarDivisiones(division1);
            mostrarBatallones(division1);
            mostrarMilitares(division1);
            main();
            break;

        case 5:
            break;
    }

    return 0;
};


