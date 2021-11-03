#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont, arreglo[] = {35, 40, 45, 50, 55};
    int variable;
    int *ptr = (int *) calloc(10, sizeof(int));
    char *ptr2 = malloc(100 * sizeof(char));

    //Imprimiendo direcciones de un arreglo
    for (cont = 0; cont < 10; cont++)
    {
        printf("direccion arreglo[%d] = %d - valor arreglo[%d] = %d\n", cont, (int)&arreglo[cont], cont, arreglo[cont]);
    }
    printf("\n");


    //Imprimiendo direcciones y contenido de un apuntador de memoria din�mica reservado con malloc

    for (cont = 0; cont < 10; cont++)
    {
        if(cont == 0)
        {
        	printf("***Valores: *ptr***\n\n");
        }

        ptr[cont] = (cont + 1) * 4;

        printf("direccion = %d - *valor = %d \n", (int)&ptr[cont], *(ptr + cont));
    }
    printf("\n");

    ptr = (int *) realloc(ptr, 20);

    int *ptr3 = (int *) realloc(ptr, 20);

    for (cont = 0; cont < 20; cont++)
    {
        if(cont == 0)
        {
        	printf("      Valores: *ptr         ||       Valores: *ptr3            \n");
        	printf("   (Despues de crear *ptr3 y realloc() a *ptr y *ptr3)       \n\n");
        }

        printf("direccion = %d - *valor = %d || direccion = %d - *valor = %d \n", (int)&ptr[cont], *(ptr + cont), (int)&ptr3[cont], *(ptr3 + cont));
    }
    printf("\n");

    /*** No remover estos comentarios, (por lo menos no antes de acabar la actividad1) ***/
    //strcpy(ptr2,"hola amigo como estas");  //esto si se puede hacer
    //ptr2 = "Hola amigo como estas";    //nunca haga esto compa
    //for(cont=0;cont<100;cont++)
    //{
    //printf("%c",ptr2[cont]);     //no vaya a descomentar esta linea, ni cambiar el contador del for a 1000
    //}

    free(ptr);
    free(ptr2);
    //free(ptr3);

    system("PAUSE");
}