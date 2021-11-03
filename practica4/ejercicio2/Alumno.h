	/***ESTRUCTURAS***/

typedef struct
{
	char calle[20];
	int num;
	char colonia[20];
	int cPostal;
}
Direccion;

typedef struct
{
	int numCuenta;
	char nombre[15];
	float promedio;
	char apellido[15];
	Direccion domicilio;
}
Alumno;

/***DECLARACION DE FUNCIONES***/

Alumno crearAlumno(int, char*, char*, float);

void imprimirAlumno(Alumno);

/*ADICIONAL*/ void informacionAlumno(Alumno*);

/*ADICIONAL*/ void printAlumnos(Alumno*);

/****AUXILIARES***/

//VER FUNCIONES_EJ2.C PARA EXPLICACION

char *get_string_max(char *text, int max);
char *get_string();
int get_int(char *text);


/***FUNCIONES***/

Alumno crearAlumno(int numeroC, char *name, char *lastname, float prom)
{
	Alumno alumnoCreado;
	alumnoCreado.numCuenta = numeroC;
	strcpy(alumnoCreado.nombre,name);
	strcpy(alumnoCreado.apellido,lastname);
	alumnoCreado.promedio = prom;
	return alumnoCreado;
}

void imprimirAlumno(Alumno alumnoPrint)
{
	printf("Numero de cuenta: %d\n",alumnoPrint.numCuenta);
	printf("Name: %s\n",alumnoPrint.nombre);
	printf("LastName: %s\n\n", alumnoPrint.apellido);
}

void informacionAlumno(Alumno *infoAlumno)
{
	float promedio;

	for(int i = 0; i < size; i++)
	{
		printf("\nInformacion alumno %d: \n", i + 1);

		int cuenta = get_int("Cuenta: ");
		char *nombre = get_string_max("Nombre: ", 15);
		char *apellido = get_string_max("Apellido: ", 15);

		printf("Promedio: ");
		scanf("%f", &promedio);
		getchar();

		infoAlumno[i] = crearAlumno(cuenta, nombre, apellido, promedio);
	}

};

void printAlumnos(Alumno *printAlumno)
{
	printf("\n***INFORMACION ALUMNOS***\n");

	for(int i = 0; i < 2; i++)
	{
		imprimirAlumno(printAlumno[i]);
	}
};