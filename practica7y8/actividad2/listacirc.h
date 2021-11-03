typedef struct Computadora Computadora;
typedef struct Lista Lista;

Lista crearLista();
void print_pc(Computadora *);
void print_list(Lista);
void addPrincipioLista(Lista*,Computadora*);

void fillOut(Computadora *);
void search(Lista *, int);
void recorrerLista(Lista *);

char *get_string(char *);
int get_int(char *);
void continuar(char* );

