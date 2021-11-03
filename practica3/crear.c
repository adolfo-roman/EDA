//Funciones CREAR

Militar crearMilitar()
{
    Militar militar;

    militar.matricula = get_int("Matricula: ");
    militar.nombre = get_string("Nombre: ");
    militar.grado = get_string("Grado: ");

    return militar;
}

Batallon crearBatallon()
{
    Batallon batallon;

    batallon.clave = get_int("Clave de Batallon: ");
    batallon.categoria = get_string("Categoria: ");
    batallon.ubicacion = get_string("Ubicacion: ");


    return batallon;

}

Division crearDivision()
{
    printf("Crear division: \n\n");

    Division division;

    division.clave = get_int("Clave de Division: ");
    division.nombreDivision = get_string("Nombre de Division: ");
    division.zona = get_string("Zona: ");

    printf("\n");

    return division;
}

//******************* FIN *********************
