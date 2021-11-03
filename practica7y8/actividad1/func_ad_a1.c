int searchNRes(Lista *lista, int valor)
{
    Nodo *tmp = (Nodo*) malloc(sizeof(Nodo));
    tmp = lista->head;
    int count = 0;

    if(lista->head == NULL)
    {
        return -1;
    }
    else
    {
        do
        {
            if(tmp->val == valor)
            {
                count++;
            }

            tmp = tmp->next;
        }
        while(tmp != NULL);

        return count;
    }
}

void rmNth(Lista *lista, int n)
{
    if(n >= 1)
    {
        Nodo *tmp = lista->head;
        Nodo *tmp2 = (Nodo*) malloc(sizeof(Nodo));
        int count = 1;

        if(tmp == NULL)
        {
            n = 0;
        }
        else
        {
            do
            {
                if(tmp->next->next == NULL && n == count + 1)
                {
                    tmp2 = tmp->next;
                    tmp -> next = NULL;
                    free(tmp2);
                    break;
                }
                else if(n == count)
                {
                    tmp2 = tmp->next;
                    tmp -> val = tmp2 -> val;
                    tmp -> next = tmp2 -> next;

                    free(tmp2);
                    break;
                }
                else
                {
                    tmp = tmp -> next;
                    count++;
                    if(tmp -> next == NULL)
                    {
                        n = 0;
                        break;
                    }
                }

            }
            while(1);
        }

        n <= 0 ? printf("Posicion no existe\n"):printf("");
    }

    return ;
}

void addIth(Lista *lista, int pos, int val)
{
    Nodo *nuevo = (Nodo*) malloc(sizeof(Nodo));
    Nodo *tmp = lista -> head;

    int count = 0;

    if(tmp == NULL)
    {
        printf("Lista no existe\n");
    }
    else
    {
        while(tmp != NULL)
        {
            count++;

            if(tmp->next == NULL || count == pos)
            {
                break;
            }

            tmp = tmp -> next;
        }

        if(count != pos)
        {
            printf("Posicion no existe\n");
        }
        else
        {
            nuevo-> val = tmp -> val;
            nuevo-> next = tmp -> next;
            tmp -> val = val;
            tmp -> next = nuevo;
        }

    }
    printf("Elemento agregado!\n");

    return ;
}

void rmLessThan(Lista *lista, int valor)
{
    Nodo *tmp = (Nodo*) malloc(sizeof(Nodo));
    tmp = lista -> head;
    int count = 1, ind = 0;
    int *arr = (int*) malloc(sizeof(int));

    while(tmp != NULL)
    {
        if(tmp->val < valor)
        {
            arr[ind] = tmp->val;
            ind++;
            arr = (int*) realloc(arr,sizeof(int)*(ind + 1));
            rmNth(lista, count);
            tmp = lista -> head;
            count = 1;
        }
        else
        {
            tmp = tmp -> next;
            count++;
        }
    }

    if(ind == 0)
    {
        printf("No se elimino ningun elemento\n");
    }
    else
    {
        printf("Se elimin%s %d elemento%s: \n",
        ind == 1 ? "o":"aron",
        ind,
        ind == 1 ? "":"s");

        printf("[");

        for(int i = 0; i < ind ; i++)
        {
            printf(" %d ",arr[i]);
        }

        printf("]\n");
    }

    return ;
}

void fastList(Lista *lista, int valor)
{
    if(lista->head != NULL)
    {
        printf("Ya existe una lista creada\n");
    }
    else
    {
        valor = get_int("Numero de elementos: ");

        for(int i = 0; i < valor ; i++)
        {
            addPrincipioLista(lista, rand() % 100, 0);
        }
        printf("Lista creada!\n");
    }

    return;
}


