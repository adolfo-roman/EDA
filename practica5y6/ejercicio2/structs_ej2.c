typedef struct
{
    char *nombre;
    char *autor;
    char *tamano;
    int numPaginas;
}
Documento;


typedef struct
{
    int primero;
    int ultimo;
    Documento *lista;
}Cola;

/*** STRUCT COLA
*Estructura que genera una variable tipo Cola
*contiene 2 variables y un arreglo de tipo
*Documento.
*
*La variable entera Primero sirve para indicar
*el indice del primer elemento "en la fila" y Ultimo
*para indicar la posicion del ultimo elemento de
*la misma. El arreglo de Documentos servira para
*depositar los datos tipo Documento ingresados.
******/