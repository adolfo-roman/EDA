#include <stdio.h>

typedef struct
{
    int matricula;
    char nombre[20];
    char grado[20];
}
Militar;

typedef struct
{
    int id;
    char categoria;
    char ubicacion;
    Militar militar[3];
}
Batallon;

typedef struct
{
    char nombre[20];
    char zona[10];
    Batallon batallon[3];
}
Division;

Division crearDivision();
Batallon crearBatallon();
Militar crearMilitar();

//void asignarMilitarABatallon();
//void asignarBatallonADivision();

//void mostrarDivisiones();
//void mostrarBatallones();
//void mostrarMilitares();

int main(void)
{
    Division division1 = crearDivision();
}

Division crearDivision()
{
    Division nuevaDivision;

    printf("Ingrese el nombre de la division: \n");
	scanf(" %s",&nuevaDivision.nombre[20]);
	//printf(" %s\n", nuevaDivision.nombre);
	printf("Ingresa la zona de la division \n");
	scanf(" %s",&nuevaDivision.zona[10]);

	return nuevaDivision;
}

Batallon crearBatallon()
{
	Batallon nuevoBatallon;

	printf("Ingresa el id del batallon: \n");
	scanf("%d",&nuevoBatallon.id);
	printf("Ingresa la categoria del batallon: \n");
	scanf(" %s",&nuevoBatallon.categoria);

	return nuevoBatallon;
}

Militar crearMilitar()
{
    Militar nuevoMilitar;

	printf("Ingresa la matricula del militar: \n");
	scanf("%d",&nuevoMilitar.matricula);
	printf("Ingresa el nombre del militar: \n");
	scanf(" %s",&nuevoMilitar.nombre[20]);

	return nuevoMilitar;
}

/*void asignarMilitarABatallon()
{

}*/