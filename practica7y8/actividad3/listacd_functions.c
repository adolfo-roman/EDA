typedef struct Node Node;
typedef struct List List;

List *createList()
{
    List *list = (List*) malloc(sizeof(List));

    list->size = 0;
    list->head = NULL;

    return list;
}

Node *createNode()
{
    Node *node = (Node*) malloc(sizeof(Node));

    node->data = get_int("Data: ");
    node->back = NULL;
    node->next = NULL;

    return node;
}

int mainMenuList(List *ls)
{
    int optionCheck;

    if(ls->size == 0)
    {
        printf("1) Agregar primer elemento\n");
        printf("2) Salir\n");

        optionCheck = get_int("Opcion: ");

        printf("\n");

        switch(optionCheck)
        {
            case 1:
                return optionCheck;
            case 2:
                return optionCheck = 7;
            default:
                return optionCheck = 0;
        }
    }
    else
    {
        printf("\n1) Agregar principio\n");
        printf("2) Agregar al final\n");
        printf("3) Agregar i-esimo\n");
        printf("4) Eliminar al inicio\n");
        printf("5) Eliminar al final\n");
        printf("6) Imprimir lista\n");
        printf("7) Salir\n");

        optionCheck = get_int("Opcion: ");

        printf("\n");

        return optionCheck;
    }
}

void addFirstOrLast(List *ls, choice FoL)
{
    Node *node = createNode();

    if(ls->head == NULL)
    {
        node->back = node;
        node->next = node;
        FoL = first;
    }
    else
    {
        node->back = ls->head->back;
        node->next = ls->head;
        node->next->back = node;
        node->back->next = node;
    }

    if (FoL)
    {
        ls->head = node;
    }

    ls->size++;

    return ;
}

void addith(List *ls)
{
    int index = get_int("Index: ");

    if(index > ls->size || index < 1)
    {
        printf("\n- Fuera de rango\n\n");
        return;
    }
    else
    {
        Node *tmp = (Node*) malloc(sizeof(Node));
        tmp = ls -> head;

        int count = 1;

        while(count != index)
        {
          tmp = tmp->next;
          count++;
        };

        Node *node = createNode();

        node->back = tmp->back;
        node->next = tmp;
        node->next->back = node;
        node->back->next = node;

        if(index == 1)
        {
            ls->head = node;
        }

        ls->size++;
    }

    return ;
}

void rmFirstOrLast(List *ls, choice FoL)
{
    Node *tmp = (Node*) malloc(sizeof(Node));

    if(FoL)
    {
        ls->head = ls->head->next;
        tmp = ls->head;
    }

    tmp = ls->head->back;
    tmp->back->next = tmp->next;
    tmp->next->back = tmp->back;

    ls->size--;

    free(tmp);

    if(ls->size == 0)
    {
        printf("\nLista vacia!\n");
        ls->head = NULL;
    }

    return ;
}

void print_list(List *ls)
{
    Node *tmp = (Node*) malloc(sizeof(Node));
    tmp = ls->head;

    for(int i = 0; i < ls->size; i++)
    {
        printf("Node: %d\n", i + 1);
        printf("\tMemNode: %p\n", tmp);
        printf("\tData: %d\n", tmp->data);
        printf("\tNodeBack: %p\n", tmp->back);
        printf("\tNodeNext: %p\n", tmp->next);

        tmp = tmp->next;
    }

    return ;
}

