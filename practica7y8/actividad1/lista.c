
Lista crearLista()
{
	Lista lista;
	lista.head = NULL;
	return lista;
}

void print_list(Lista lista)
{
    if(lista.head==NULL)
    {
    	printf("La lista esta vacia!\n");
    }
    else
    {
    	printf("Los elementos de la lista son: \n");
    	Nodo *current = lista.head;
    	printf("[ ");
   		while (current != 0)
   		{
        	printf(" %d ",current->val);
			current = current->next;
   	 	}
   	 	printf("]\n");
	}
}

void addPrincipioLista(Lista *lista, int val, int check)
{
	Nodo *new_node;
    new_node = (Nodo*)malloc(sizeof(Nodo));
    new_node->val = val;
    new_node->next = lista->head;
    lista->head = new_node;


    check == 1? printf("Elemento agregado!\n"):printf("");

    return ;
}

void addFinalLista(Lista *lista, int val)
{
	if(lista->head==NULL)
	{
		Nodo *nodo = (Nodo*)malloc(sizeof(Nodo));
		nodo->val = val;
    	nodo->next = NULL;
    	lista->head = nodo;
	}
	else
	{
		Nodo *current = lista->head;

		while (current->next != 0)
		{
       		current = current->next;
 		}

		Nodo *nuevoNodo;
		nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
    	nuevoNodo->val = val;
    	nuevoNodo->next = NULL;
 		current->next = nuevoNodo;
	}

	printf("Elemento agregado!\n");

    return ;
}

void borrarPrimero(Lista *lista)
{
    if (lista->head == NULL)
    {
        printf("La lista esta vacia\n");
    }
    else
    {
    	Nodo *nuevo_head = NULL;
    	Nodo *temp = lista->head;
    	nuevo_head=temp->next;
    	free(lista->head);
    	lista->head = nuevo_head;

    	printf("Elemento removido!\n");
	}

    return ;
}

void borrarUltimo(Lista *lista)
{
    Nodo *temp = lista->head;

	if (lista->head == NULL)
	{
        printf("La lista esta vacia\n");
    }
    else
    {
    	if(temp->next==NULL)
    	{
    		lista->head = NULL;
			free(lista->head);
    	}
    	else
    	{
    		Nodo *current = lista->head;

    		while (current->next->next != NULL)
    		{
        		current = current->next;
    		}

    		temp = current->next;
    		current->next = NULL;
			free(temp);
    	}

    	printf("Elemento removido!\n");
	}



    return ;
}

int primerElemento(Lista lista){
	if(lista.head == NULL)
	{
		return -1;
	}

	return lista.head->val;
}


