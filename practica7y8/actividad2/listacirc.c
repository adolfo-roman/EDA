#include "listacirc.h"

struct Computadora
{
    int id;
    char *marca;
    int ram;
    char *os;

    struct Computadora* next;
};

struct Lista
{
	int tamano;

	struct Computadora* head;
};

Lista crearLista()
{
	Lista lista;
	lista.head = NULL;
	lista.tamano = 0;

	return lista;
}

void print_pc(Computadora *pc)
{
	printf("\nPC ID: %d, Hex: %p\n", pc->id, pc);
	printf("\tMarca: %s\n", pc->marca);
	printf("\tRAM: %d\n", pc->ram);
	printf("\tOS: %s \n", pc->os);
	printf("\tHexMem: %p \n", pc->next);
}

void print_list(Lista lista)
{
    if (lista.head == NULL)
    {
    	printf("La lista esta vacia\n");
    }
    else
    {
    	int tamano = lista.tamano;	//se define el tamano

		printf("Los elementos de la lista son: \n");

    	Computadora *tmp = lista.head;

   		while (tamano > 0 ) //tamano como condicional
   		{
        	print_pc(tmp);
        	tmp = tmp->next;
        	tamano--; //se reduce tamano
        }
	}
}


void addFinalLista(Lista *lista, Computadora *pc)
{
	int posicion = lista->tamano;

	Computadora *computadora;
    computadora = (Computadora*) malloc(sizeof(Computadora));

    computadora->id = pc->id;
	computadora->marca = pc->marca;
	computadora->ram = pc->ram;
	computadora->os = pc->os;

	if (lista->head == NULL)
	{
    	lista->head = computadora;
    	computadora->next = computadora;
	}
	else
	{
		computadora->next = lista->head;

		while (posicion != 1)
		{
       		computadora->next = computadora->next->next;
       		posicion--;
 		}

		computadora->next->next = computadora;
		computadora->next = lista->head;

	}

	lista->tamano++;
}


void addPrincipioLista(Lista *lista, Computadora *pc)
{
	Computadora *computadora, *tmp;
    computadora = (Computadora*) malloc(sizeof(Computadora));

    computadora->id = pc->id;
	computadora->marca = pc->marca;
	computadora->ram = pc->ram;
	computadora->os = pc->os;

    if (lista->head == NULL)
    {
       	computadora->next = computadora;
	}
    else
    {
    	computadora->next = lista->head;
    	tmp = lista->head;

    	while(tmp->next != lista->head)
    	{
    		tmp = tmp->next;
    	}

    	tmp->next = computadora;
   	}

	lista->head = computadora;

    lista->tamano++;
}

void search(Lista *lista, int lid)
{
    Computadora *tmp = lista->head;
    int count = 1, tamano = lista -> tamano;

    do
    {
        if(tmp -> id == lid)
        {
            print_pc(tmp);
            break;
        }
        else
        {
            tmp = tmp -> next;
            count++;
            count > tamano ?
            printf("\nID no existe\n"):
            count;
        }
    }
    while(tamano >= count);
}

void recorrerLista(Lista *lista)
{
	Computadora *tmp = lista->head;
	int opcionLista;

	do
	{
		printf("\nPC ID: %d\n\n", tmp -> id);

		printf("1) Avanzar\n");
        printf("2) Mostrar Detalles\n");
        printf("3) Salir\n");

        opcionLista = get_int("Opcion: ");

        switch(opcionLista)
        {
            case 1:
                tmp = tmp -> next;
                break;

            case 2:
                printf("\n****Detalles PC****");
                print_pc(tmp);
                printf("********************\n");
                break;

            default:
                break;
        }

	}
	while(opcionLista != 3);

}

void fillOut(Computadora *computadora)
{
	computadora->id = get_int("ID: ");
	computadora->marca = get_string("Marca: ");
	computadora->ram = get_int("RAM: ");
	computadora->os = get_string("OS: ");
}

