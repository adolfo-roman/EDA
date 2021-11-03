struct Node
{
  int data;

  struct Node *back;
  struct Node *next;
};

struct List
{
    int size;

    struct Node *head;
};

typedef enum {last, first} choice;

