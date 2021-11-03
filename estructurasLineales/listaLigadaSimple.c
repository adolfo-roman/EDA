#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

void imprimirLista(struct Node* head)
{
    struct Node *prev = head;

	while (prev != NULL)
	{
		printf("%d ", prev->data);
		prev = prev->next;
	}
	printf("\n");
}


void insertar(struct Node* head, int lugar, int data)
{
    struct Node *prev = head;
    int count = 1;
    struct Node* nuevo =(struct Node*) malloc(sizeof(struct Node));

    while (count != lugar)
    {
		prev = prev->next;
		count++;
	}
        nuevo->data = prev->data;
        nuevo->next = prev->next;
        prev->data = data;
        prev->next = nuevo;
}

void borrarAntpen(struct Node *head)
{
    struct Node *prev = head;
    struct Node *tmp = head;
    int count = 1;

    while(prev -> next != NULL)
    {
		prev = prev -> next;

		if(count >= 4)
		{
		    tmp = tmp -> next;
		}

	    count++;
	}

	prev = tmp -> next;

	tmp -> next = prev -> next;

	if(count < 3)
	{
	    printf("No existe elemento antepenultimo\n");
	    return;
	}

	if(count == 3)
	{
        tmp -> data = prev -> data;
	}

	free(prev);
}

int buscarElemento(struct Node *head, int dato)
{
    int count = 0;
    struct Node *prev = head;

    while(prev -> data != dato)
    {
		if(prev -> next == NULL)
		{
		    return -1;
		}

		prev = prev-> next;
	    count++;
	}

	return count + 1;
}


int main()
{
	struct Node* head = NULL;
	struct Node* dos = NULL;
	struct Node* tres = NULL;
	struct Node* cuatro = NULL;
	struct Node* tail = NULL;

	head = (struct Node*)malloc(sizeof(struct Node));
	dos = (struct Node*)malloc(sizeof(struct Node));
	tres = (struct Node*)malloc(sizeof(struct Node));
	cuatro = (struct Node*)malloc(sizeof(struct Node));
	tail = (struct Node*)malloc(sizeof(struct Node));

	head->data = 1;
	head->next = dos;

	dos->data = 2;
	dos->next = tres;

	tres->data = 3;
	tres->next = cuatro;

	cuatro->data = 4;
	cuatro->next = tail;

	tail->data = 5;
	tail->next = NULL;

    imprimirLista(head);

	insertar(head, 5, 6);

	imprimirLista(head);

	borrarAntpen(head);


    int a = buscarElemento(head, 5);

    printf("%d\n", a);

	imprimirLista(head);

	return 0;
}
