/*
* Practica 2 - Ejercicio 1
*
* Escrito por: Adolfo Roman Jimenez
*/

#include <stdio.h> //Declaracion libreria standard input and output

int main(void) //Inicio de programa
{
    int w=10, x=20, y=30, z=40, r1, r2, r3; //variables
    int *pl, *p2, *p3, *p4; //apuntadores

    pl = &w; //Asigna direccion de int w a p1
    p2 = &x; //Asigna direccion de int x a p2
    p3 = &y; //Asigna direccion de int y a p3
    p4 = pl; //Copia direccion en p1 a p4 --> *p1 == *p4 == w
    r1 = *pl + *p2; //Suma lo contenido en la direccion p1 (w = 10) con lo contenido en direccion p2 (x = 20) y lo almacena en r1 (r1 = 30)
    r2 = *p3 * *p4; //Multiplica lo contenido en la direccion p3 (y = 30) con lo contenido en direccion p4 (w = 10) en r2 (r2 = 300)
    r3 = *p2 + *p3; //Suma lo contenido en direccion p2 (x = 20) con lo contenido en direccion p3 (y = 30) y lo almacena en r3 (r3 = 50)

    printf("Los Resultados son: %d, %d y %d \n",r1,r2,r3);//imprime los resultados de cada una de las variables en r1, r2 y r3

    return 0; //termina programa
}