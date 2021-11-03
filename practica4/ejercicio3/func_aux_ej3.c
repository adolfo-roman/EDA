/***DECLARACION DE FUNCIONES***/

//char *get_string(char *text);
int get_int(char *text);
char *get_string_max(char *text, int max);
void imprimirDocs(Cola *fila);

/***
 * GET_STRING_MAX
 *
 * SE PUEDE OBTENER UNA CADENA DE CARACTERES
 * QUE TENGA DEVUELVA UNA LONGITUD MAXIMA PRE-
 * DEFINIDA, AUNQUE EL USUARIO INGRESE MAS
 * DE LOS REQUERIDOS.
 *
 * EL ARGUMENTO INT MAX SIRVE PARA PONER LA
 * CANTIDAD DE CARACTERES REQUERIDOS.
 *
 * EL ARGUMENT CHAR *TEXT SIRVE PARA INGRESAR
 * UNA LEYENDA QUE AL PROGRAMADOR LE GUSTARIA
 * QUE APARECIERA AL MOMENTO DE SOLICITAR INFORMACION.
 * DEBE PONERSE SIMPLEMENTE ENTRE COMILLAS, LO QUE
 * SEA QUE SE DESEE IMPRIMIR EN PANTALLA *
******/

char *get_string_max(char *text, int max)
{
    printf("%s", text);
    char c, a, *str = (char*) malloc(sizeof(char *) * 1);
    int strIndex = 0;

    do
    {
        c = getchar();

        if (c == '\n')
        {
            str[strIndex] = '\0';
            break;
        }

        str[strIndex] = c;
        strIndex++;

        str = (char *)realloc(str, strIndex + 1);
    }
    while (1);

    char *finalStr = (char *) malloc(sizeof(char *) * max);

    for (int i = 0; i < max; i++)
    {
        finalStr[i] = str[i];
    }

    free(str);

    return finalStr;
}


/***
 * GET_STRING
 *
 * DEVUELVE UNA CADENA DE CARACTERES DE
 * CUALQUIER LONGITUD YA QUE USA UNA
 * FORMA DINAMICA DE REALLOC QUE MODIFICA
 * SU LONGITUD DE ACUERDO AL TAMANO DEL
 * TEXTO INGRESADO.
 *
 * EL ARGUMENT CHAR *TEXT SIRVE PARA INGRESAR
 * UNA LEYENDA QUE AL PROGRAMADOR LE GUSTARIA
 * QUE APARECIERA AL MOMENTO DE SOLICITAR INFORMACION
 * DEBE PONERSE SIMPLEMENTE ENTRE COMILLAS, LO QUE
 * SEA QUE SE DESEE IMPRIMIR EN PANTALLA
 *****/

char *get_string(char *text)
{
    printf("%s", text);
    char c, *str = (char *) malloc(sizeof(char *) * 1);
    int strIndex = 0;

    do
    {
        c = getchar();

        if (c == '\n')
        {
            break;
        }

        str[strIndex] = c;
        strIndex++;

        str = (char *) realloc(str, strIndex + 1);
    }
    while (1);

    return str;
}

/***
 * GET_INT
 *
 * SOLICITA UN NUMERO ENTERO
 * FORZOSAMENTE Y LO EVALUA PARA
 * CORROBORAR QUE ESTE SEA CORRECTO.
 *
 * EN CASO DE QUE SEA CORRECTO DEVUELVE
 * EL NUMERO ENTERO, EN CASO DE QUE NO
 * SEA VALIDO COMO NUMERO ENTERO, SIMPLEMENTE
 * VUELVE A SOLICITAR LA INFORMACION REQUERIDA
 *
 * EL ARGUMENT CHAR *TEXT SIRVE PARA INGRESAR
 * UNA LEYENDA QUE AL PROGRAMADOR LE GUSTARIA
 * QUE APARECIERA AL MOMENTO DE SOLICITAR INFORMACION
 * DEBE PONERSE SIMPLEMENTE ENTRE COMILLAS, LO QUE
 * SEA QUE SE DESEE IMPRIMIR EN PANTALLA
 ******/

int get_int(char *text)
{
    printf("%s", text);

    int value, length, i, j;
    char *input;

    do
    {
        value = 0;

        input = get_string();

        for (i = 0; i < i + 1 ; i++)
        {
            if (input[i] == '\0')
            {
                break;
            }
        }

        length = i;

        for (i = 0 ; i < length; i++)
        {
            if (input[i] < 48 || input[i] > 57)
            {
                value = 1;
                break;
            }
            else if (input[0] == 0 && length > 1)
            {
                value = 1;
                break;
            }
        }

        if (value == 1)
        {
            input = "";
        }
    }
    while (value);

    int intNumber = 0;
    int position = length;

    for (i = 0 ; i < length; i++)
    {
        int holder;
        holder = input[i] - 48;

        if (position == 1)
        {
            intNumber += holder;
        }
        else
        {
            int power = 1;

            for (j = 0; j < position - 1 ; j++)
            {
                power *= 10;
            }

            intNumber += power * holder;
            position --;
        }
    }
    return intNumber;
}

