//Funciones MOSTRAR

void mostrarDivisiones(Division division)
{
    printf("**DIVISION**\n\n");

    if (division.nombreDivision == NULL)
    {
        printf("No existen divisiones.\n\n");
    }
    else
    {
        printf("\tClave: %i\n", division.clave);
        printf("\tNombre: %s\n", division.nombreDivision);
        printf("\tZona: %s\n", division.zona);
        printf("\n");
    }
}

void mostrarBatallones(Division division)
{

    printf("**BATALLONES**\n\n");

    if (division.batallones[0].ubicacion == NULL && division.batallones[1].ubicacion == NULL && division.batallones[2].ubicacion == NULL)
    {
        printf("No existen batallones.\n\n");
    }
    else
    {
        for(int i = 0; i < 3 ; i++)
        {
            printf("Batallon: %i\n", i + 1);

            if(division.batallones[i].ubicacion == NULL)
            {
                printf("No existe batallon.\n");
            }
            else
            {
                printf("\tClave: %i\n", division.batallones[i].clave);
                printf("\tCategoria: %s\n", division.batallones[i].categoria);
                printf("\tUbicacion: %s\n", division.batallones[i].ubicacion);
                printf("\n");
            }
        }
    }
}

void mostrarMilitares(Division division)
{
    printf("**MILITARES**\n\n");

    for(int i = 0; i < 3 ; i++)
    {
        printf("Clave de Batallon: %i\n", division.batallones[i].clave);

        if(division.batallones[i].militares[0].nombre == NULL &&
            division.batallones[i].militares[1].nombre == NULL &&
            division.batallones[i].militares[2].nombre == NULL)
            {printf("\tBatallon sin militares asignados\n");}else{

        for(int j = 0; j < 3 ; j++)
        {
            printf("\nMilitar %i\n", j + 1);

            if(division.batallones[i].militares[j].nombre == NULL)
            {
                printf("\tNo existe militar.\n");
            }
            else
            {
                printf("\tMatricula: %i\n", division.batallones[i].militares[j].matricula);
                printf("\tNombre: %s\n", division.batallones[i].militares[j].nombre);
                printf("\tGrado: %s\n", division.batallones[i].militares[j].grado);
            }
        }
        printf("\n");
            }
    }
    printf("\n");
}

//******************* FIN *********************
