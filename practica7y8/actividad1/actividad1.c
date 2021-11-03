#include <stdio.h>
#include <stdlib.h>

#include "structs_a1.c"
#include "lista.h"
#include "lista.c"
#include "func_ad_a1.c"
#include "func_aux_a1.c"

int main()
{
    Lista *miLista = (Lista *) malloc(sizeof(Lista));
    *miLista = crearLista();
    int option;
    int val, pos, times;

    do
    {
        printf("1) Agregar al inicio\n");
        printf("2) Agregar al final\n");
        printf("3) Agregar i-esimo\n");
        printf("4) Eliminar al inicio\n");
        printf("5) Eliminar al final\n");
        printf("6) Buscar veces elemento\n");
        printf("7) Eliminar n-simo\n");
        printf("8) Eliminar menores que\n");
        printf("9) Mostrar primer elemento\n");
        printf("10) Imprimir lista\n");
        printf("11) Crear lista rapida\n");

        option = get_int("Opcion: ");

        switch(option)
        {
            case 1:
                val = get_int("Valor Principio: ");
                addPrincipioLista(miLista, val, 1);
                break;

            case 2:
                val = get_int("Valor Final: ");
                addFinalLista(miLista, val);
                break;

            case 3:
                pos = get_int("Posicion i-esimo: ");
                val = get_int("Valor i-esimo: ");
                addIth(miLista, pos, val);
                break;

            case 4:
                borrarPrimero(miLista);
                break;

            case 5:
                borrarUltimo(miLista);
                break;

            case 6:
                val = get_int("Buscar elemento: ");
                times = searchNRes(miLista, val);

                times == -1 ?
                printf("No existe lista\n"):
                printf("El valor %d se repite %d %s: \n",
                val, times,
                times == 1 ? "vez":"veces");
                break;

            case 7:
                pos = get_int("Eliminar n-simo: ");
                rmNth(miLista, pos);
                break;

            case 8:
                val = get_int("Eliminar menores que: ");
                rmLessThan(miLista, val);
                break;

            case 9:
                val = primerElemento(*miLista);
                val == -1 ?
                printf("No existe lista\n"):
                printf("Primer Elemento: %d\n", val);
                break;

            case 10:
                print_list(*miLista);
                break;

            case 11:

                fastList(miLista, 0);

            default:
                break;
        }

        continuar("Presione ENTER para continuar...");
    }
    while(1);

    return 0;
}