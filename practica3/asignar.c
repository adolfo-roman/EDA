//Funciones ASIGNAR

void asignarMilitarABatallon(Division *division)
{
    for(int i = 0 ; i < 3 ; i++)
    {
        printf("Clave de Batallon: %d\n\n", division -> batallones[i].clave);

        for(int j = 0 ; j < 3 ; j++)
        {
            printf("Militar %d:\n", j + 1);
            division->batallones[i].militares[j] = crearMilitar();
            printf("\n");
        }

        printf("\n");
    }

}

void asignarBatallonADivision(Division *division)
{
    printf("Crear batallones:\n\n");

    for(int i = 0; i < 3 ; i++)
    {
        printf("Batallon %i\n", i + 1);
        division -> batallones[i] = crearBatallon();
        printf("\n");
    }
}

//******************* FIN *********************