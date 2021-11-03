#include <stdio.h>
#include <string.h>

struct Asignatura
{
   char materia[20];
};

struct Alumno
{
     int numCuenta;
     char nombre[20];
     char apellido[20];
     float promedio;
     struct Asignatura materias[5];
};

void verMats(struct Alumno *ptr);
void modMats(struct Alumno *ptr);
void listaAlum(struct Alumno arr[]);
void program(struct Alumno alumno1, struct Alumno alumno2);

/*********/
int main(void)
{
    struct Alumno alumno1 = {1, "Adolfo", "Roman", 8.8, {{"EDA"}, {"Calculo"}, {"Lineal"}}};
    struct Alumno alumno2 = {2, "Patricia", "Mora", 9.8, {{"Psicologia"}, {"Medicina"},{"Psicoanalitica"}}};

    program(alumno1, alumno2);

    return 0;
}
/*********/

void program(struct Alumno alumno1, struct Alumno alumno2)
{
    struct Alumno alumnos[2] = {alumno1, alumno2};
    struct Alumno *ptr;
    int menu1;

    do
    {
        printf("1) Ver horarios\n");
        printf("2) Modificar horarios\n");
        printf("3) Crear nuevo alumno\n");

        scanf("%d", &menu1);
    }
    while(menu1 < 1 || menu1 > 3);

    int x;

    switch(menu1)
    {
        case 1:
            printf("De cual alumno desea ver el horario?\n\n");
            listaAlum(alumnos);
            scanf("%d", &x);
            ptr = &alumnos[x-1];
            verMats(ptr);
            program(alumno1, alumno2);
            break;
        case 2:
            printf("De cual alumno desea modificar el horario?\n\n");
            listaAlum(alumnos);
            scanf("%d", &x);
            ptr = &alumnos[x-1];
            modMats(ptr);
            verMats(ptr);
            program(alumno1, alumno2);
            break;
        case 3:
            break;
    }

}


void verMats(struct Alumno *ptr) //Funcion usa puntero a array como argumento
{
     printf("Materias de: \n");
     printf("- %s %s\n\n", ptr -> nombre, ptr ->apellido);
     for(int i = 0 ; i < 5; i++)
     {
        int a = strcmp(ptr->materias[i].materia, "");
        a != 0 ? printf("%d) %s\n", i+1, ptr->materias[i].materia) : printf("") ;
     }
     printf("\n");
}

void modMats(struct Alumno *ptr)
{

  printf("Inserte nuevas materias para: \n");
  printf("- %s %s\n\n", ptr -> nombre, ptr ->apellido);

        for(int i = 0 ; i < 5; i++)
        {
            printf("%i) ", i+1);
            scanf("%s", ptr->materias[i].materia);
        }
    printf("\n");
  }


void listaAlum(struct Alumno arr[])
{
    for(int i = 0 ; i < 2; i++)
    {
        printf("%i)%s %s\n", i+1, arr[i].nombre, arr[i].apellido);
    }
}