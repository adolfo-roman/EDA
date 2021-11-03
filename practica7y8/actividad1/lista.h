typedef struct Nodo Nodo;
typedef struct Lista Lista;

Lista crearLista();
void print_list(Lista);
void addPrincipioLista(Lista*,int,int);
void addFinalLista(Lista*,int);
void borrarPrimero(Lista*);
void borrarUltimo(Lista*);
int primerElemento(Lista);

//**************

int searchNRes(Lista*, int);
void rmNth(Lista*, int);
void addIth(Lista*, int, int);
void rmLessThan(Lista*, int);
void fastList(Lista*, int);

//**************

int get_int(char*);
void continuar(char*);


