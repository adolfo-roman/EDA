#include <stdio.h>
#include <stdlib.h>

struct Node
{
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

void insertarFinal(struct Node* head, int data)
{
    struct Node *nuevo = (struct Node*) malloc(sizeof(struct Node));
    
    nuevo -> next = head;
    
    while(nuevo -> next -> next != head)
    {
        nuevo -> next = nuevo -> next -> next;
    }
    
    nuevo -> next = nuevo;
    
    
    
    
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
	tail->next = head;

	imprimirLista(head);
}