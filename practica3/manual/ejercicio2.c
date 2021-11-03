/*
* Los cambios que se hicieron en este codigo, fueron:

- Se cambio el struct pelicula por typedef struct Pelicula;
- Se agregaron las modificaciones esteticas que hacian falta
- Se modifico el for loop de la funcion imprimir arreglo para que imprimiera
    desde el primer elemento y no desde el ultimo
*/

#include <stdio.h>

#define TAM 2
#define NUM_DIR 2

typedef struct
{
    char nombre[20];
    char genero[20];
    short anio;
    short numDirectores;
    char directores[NUM_DIR][20];

} Pelicula;

void llenarArreglo(Pelicula *);
void imprimirArreglo(Pelicula *);

int main()
{
    Pelicula arreglo[TAM];
    llenarArreglo (arreglo);
    imprimirArreglo (arreglo);

    return 0;
}

void llenarArreglo(Pelicula arreglo[TAM])
{
    int iesimo, enesimo;
    for (iesimo = 0 ; iesimo<TAM ; iesimo++)
    {
        Pelicula movie;

        printf("####### Película %d #######\n", iesimo+1);
        printf("Ingrese nombre película: ");
            setbuf(stdin, NULL);
            scanf("%s", movie.nombre);
            getchar();
        printf("Ingrese género película: ");
            setbuf(stdin, NULL);
            scanf("%s", movie.genero);
            getchar();
        printf("Ingrese año película: ");
            setbuf(stdin, NULL);
            scanf("%hd", &movie.anio);

        movie.numDirectores = NUM_DIR;

        for (enesimo = 0 ; enesimo < NUM_DIR ; enesimo++)
        {
            printf("Ingrese director %d: ", enesimo+1);
                setbuf(stdin, NULL);
                scanf("%s", movie.directores[enesimo]);
                getchar();
        }

        arreglo[iesimo] = movie;
    }
}

void imprimirArreglo(Pelicula arreglo[TAM])
{
    int iesimo, enesimo;

    printf("\n####### Contenido del arreglo #######\n");

    for (iesimo = 0 ; iesimo < TAM ; iesimo++)
    {
        printf("####### Película %d #######\n", iesimo+1);
        printf("PELÍCULA: %s\n", arreglo[iesimo].nombre);
        printf("GÉNERO: %s\n", arreglo[iesimo].genero);
        printf("AÑO: %d\n", arreglo[iesimo].anio);
        printf("DIRECTOR(ES):\n");

        for (enesimo = 0 ; enesimo < arreglo[iesimo].numDirectores ; enesimo++)
        {
            printf("%s\n", arreglo[iesimo].directores[enesimo]);
        }
    }
}
