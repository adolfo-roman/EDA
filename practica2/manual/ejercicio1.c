/*
* Manual de Practicas - Ejercicio 1
*/

#include <stdio.h>

/*
* Este programa crea un apuntador tipo caracter
*/

int main()
{
    char *ap, c;
    c = 'x';
    ap = &c;

	// imprime el carácter de la localidad a la que apunta
	printf("Carácter: %c\n",*ap);

	// imprime el código ASCII de la localidad a la que apunta
	printf("Código ASCII: %d\n",*ap);

	// imprime la dirección de memoria de la localidad a la que apunta
	printf("Dirección de memoria: %d\n",(int)ap);

    return 0;
}