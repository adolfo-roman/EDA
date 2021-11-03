#include <stdio.h>

int main ()
{
    short arr[5], *apArr;

    apArr = &arr[0];

    // imprime la dirección de memoria del arreglo en la posición [0]
    printf("Dirección del arreglo en la primera posición: %x\n",(short)&arr[0]);

    // imprime la dirección de memoria del arreglo
    // (el nombre del arreglo es un apuntador)
    printf("Dirección del arreglo: %x\n",(short)&arr);

    // imprime la dirección de memoria del apuntador apArr
    printf("Dirección del apuntador: %x\n",(short)apArr);

    return 0;
}