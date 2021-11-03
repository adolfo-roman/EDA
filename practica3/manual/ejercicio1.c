/* En este ejercicio se modificaron algunas lineas del codigo que estaban erroneas
mostrando la palabra "node" donde no era requerida. Se uso el typedef para
la estructura "Pelicula" y si agrego el "int cont = 0" donde se requeria.
*/


#include<stdio.h>

typedef struct{

    char *nombre;
    char *genero;
    short anio;
    short numDirectores;
    char *directores[10];

} Pelicula;

void imprimirDatosPelicula(Pelicula);

Pelicula llenarDatosPelicula(char *, char *, short, short, char *[10]);


int main()
{
    char *directores[2];
    directores[0] = "Lana Wachowski";
    directores[1] = "Andy Wachowski";

    Pelicula matrix = llenarDatosPelicula("The matrix", "Ciencia ficci*n", 1999, 2, directores);

    imprimirDatosPelicula(matrix);

    return 0;
}

Pelicula llenarDatosPelicula(char *nombre, char *genero, short anio, short numDirectores, char *directores[2])
{
    Pelicula movie;

    movie.nombre = nombre;
    movie.genero = genero;
    movie.anio = anio;
    movie.numDirectores = numDirectores;

    for ( int cont = 0; cont < movie.numDirectores ; cont++)
    {
    	movie.directores[cont] = directores[cont];
    }

    return movie;
}

void imprimirDatosPelicula(Pelicula movie)
{
    printf("PELICULA: %s\n", movie.nombre);
    printf("GENERO: %s\n", movie.genero);
    printf("ANIO: %d\n", movie.anio);
    printf("DIRECTOR(ES):\n");

    for (int cont = 0 ; cont<movie.numDirectores ; cont++)
    {
    	printf("%s\n",movie.directores[cont]);
    }
}
