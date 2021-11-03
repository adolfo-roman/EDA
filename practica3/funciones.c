//Funciones AUXILIARES


char *get_string(char *text); //Crea STRING (texto con espacios)
int get_int(char *text); //Obtiene int
int trueOrFalse(int a, int b, int c); //Evalua rango de opciones


int inicio()//Menu principal
{
    int option;

    do
    {
        printf("1) Crear division.\n");
        printf("2) Crear batallones.\n");
        printf("3) Asignar militares.\n");
        printf("4) Mostrar informacion.\n");
        printf("5) Salir.\n");

        option = get_int("Seleccione opcion: ");
        printf("\n");
    }
    while(trueOrFalse(1,5,option));

    return option;
}

int trueOrFalse(int a, int b, int c)
{
    return c >= a && c <= b ? 0 : 1 ;
}

int get_int(char *text)
{
    printf("%s", text);
    int num;
    scanf("%i", &num);
    getchar();
    return num;
}

char *get_string(char *text)
{
    printf("%s", text);
    char *str = malloc(512*sizeof(char *));
    int length = 0;
    char character;

    do
    {
        character = getchar();
        if(character == '\n') {break;}
        str[length] = character;
        length++;
    }
    while(1);

    return str;
}

/************** FIN ******************/


