//Estructuras

typedef struct
{
    int matricula;
    char *nombre;
    char *grado;
}
Militar;

typedef struct
{
    int clave;
    char *categoria;
    char *ubicacion;
    Militar militares[3];
}
Batallon;

typedef struct
{
    int clave;
    char *nombreDivision;
    char *zona;
    Batallon batallones[3];
}
Division;


//Funciones

void asignarMilitarABatallon();
void asignarBatallonADivision();

void asignarMilitarABatallon();
void asignarBatallonADivision();

void mostrarDivisiones();
void mostrarBatallones();
void mostrarMilitares();

int inicio();
char *get_string(char *text);
int get_int(char *text);
int trueOrFalse(int a, int b, int c);
