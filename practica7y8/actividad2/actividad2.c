#include <stdio.h>
#include <stdlib.h>

#include "listacirc.h"
#include "listacirc.c"
#include "func_aux_a2.c"

int main()
{
    Lista *pcLista = (Lista*) malloc(sizeof(Lista));
    Computadora *pc = (Computadora*) malloc(sizeof(Computadora));
    int option, id;

    do
    {
        printf("1) Agregar al inicio\n");
        printf("2) Agregar al final\n");
        printf("3) Buscar ID\n");
        printf("4) Imprimir lista\n");
        printf("5) Recorrer lista\n");

        option = get_int("Opcion: ");

        switch(option)
        {
            case 1:
                fillOut(pc);
                addPrincipioLista(pcLista, pc);
                break;

            case 2:
                fillOut(pc);
                addFinalLista(pcLista, pc);
                break;

            case 3:
                id = get_int("Buscar ID: ");
                search(pcLista, id);
                break;

            case 4:
                print_list(*pcLista);
                break;

            case 5:
                recorrerLista(pcLista);
                break;

            default:
                break;
        }

        continuar("Presione ENTER para continuar...");
    }
    while(1);

    return 0;
}