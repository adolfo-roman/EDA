/****FUNCIONES ESPECIFICAS DE PROGRAMA***/

/***DECLARACION DE FUNCIONES***/

void createComp(Computadora *ptr, int tamano);
void printComp(Computadora *ptr, int tamano);

/****FUNCIONES***/

void createComp(Computadora *ptr, int tamano)
{
    for(int i = 0; i < tamano; i++)
    {
        if(i == 0)
        {
            printf("\n");
        }
        printf("***Computadora %d***\n", i + 1);

        char *brand = get_string_max("Brand: ", 10);
        char *processor = get_string_max("Microprocessor: ", 10);
        int model = get_int("Model year: ");
        int ram = get_int("RAM (MB): ");

        printf("\n");

        strcpy(ptr[i].marca, brand);
        strcpy(ptr[i].procesador, processor);
        ptr[i].modelo = model;
        ptr[i].memoria = ram;
    }
}

void printComp(Computadora *ptr, int tamano)
{
    for(int i = 0; i < tamano; i++)
    {
        if(i == 0)
        {
            printf("***INFORMACION COMPUTADORAS***\n\n");
        }
        printf("*Computadora %d\n", i + 1);
        printf("\tMarca: %s\n", ptr[i].marca);
        printf("\tProcesador: %s\n", ptr[i].procesador);
        printf("\tModelo: %d\n", ptr[i].modelo);
        printf("\tRAM (MB): %d\n", ptr[i].memoria);
        printf("\n");
    }
}