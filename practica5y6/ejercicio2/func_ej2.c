

void ingresarInfo(Cola *cola, int *paginas)
{
    *paginas = 0;

    int requeridos = get_int("No. de documentos requeridos: ");

    *cola = crearCola(requeridos);

    Documento d;

    for(int i = 0; i < requeridos; i++)
    {
        printf("\nDocumento %d\n", i + 1);

        d.nombre = get_string_max("Nombre: ", 50);
        d.autor = get_string_max("Autor: ", 40);
        d.tamano = get_string_max("Tamano: ", 8);
        d.numPaginas = get_int("No. de paginas: ");

        *paginas += d.numPaginas;

        encolar(cola, d);
    }
}

void imprimirDocs(Cola *fila, int *paginas)
{
    int count = 1;
    while(isEmpty(*fila) != 1)
    {
        Documento a = desencolar(fila);
        printf("\nDoc %d:\tNombre: %s\n", count, a.nombre);
        printf("\tAutor: %s\n", a.autor);
        printf("\tTamano: %s\n", a.tamano);

        printf("       \tTiempo de impresion individual: %d minutos // %d paginas x 4 segundos = %d segundos\n",
        (a.numPaginas * 4)/60, a.numPaginas, a.numPaginas * 4);

        printf("       \tTiempo de impresion total: %d minutos // %d paginas x 4 segundos = %d segundos\n",
        (*paginas * 4)/60, *paginas, *paginas * 4);

        *paginas -= a.numPaginas;
        count++;
    }

    free(paginas);
    free(fila);
}