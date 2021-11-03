//#include "Pila.h"

typedef struct
{
    int tope;
    int lista[10];
}
Pila;

/*** STRUCT PILA
* Crea un tdato abstracto tipo Pila
* junto con una variable de tipo int
* llamada "tope" para indicar el
* numero de elementos que contiene la
* pila.
******/

Pila crearPila()
{
	Pila p;
	p.tope=0;
	return p;
}

/*** PILA CREARPILA()
* Funcion que devuelve un dato de tipo
* Pila. Inicializa el tope en 0 debido
* a que por el momento, carece de
* elementos.
******/

int pilaIsEmpty(Pila p)
{
	if(p.tope==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

/*** INT PILAISEMPTY()
* Funcion que verifica si la variable tipo
* Pila contiene o no elementos. Si los
* contiene, regresa 1 que es un valor "truthy"
* o verdadero. En caso contrario, retorna
* un valor 0 o "falsy" el cual indica que
* la pila SI contiene elementos dentro de si.
******/

void push(Pila *p,int x)
{
	p->lista[p->tope]=x;
	p->tope++;
}

/*** VOID PUSH()
* Funcion que toma dos argumentos para ingresar
* elementos dentro de la Pila, estos son:
*
* - la pila a usar
* - El elemento a ingresar.
*
* Se ingresa el elemento usando la variable tope
* como indice y despues se suma uno a tope para
* indicar que los elementos crecieron en uno.
******/

int pop(Pila *p)
{
	if(pilaIsEmpty(*p)==1)
  {
		printf("La pila ya est%c vac%ca. \n",160,161);
		return -1;
	}
	else
  {
		int aux = p->lista[p->tope-1];
		p->tope--;
    return aux;
	}
}

/*** INT POP()
* Funcion que toma un apuntador de tipo pila como
*y devueve un entero dependiendo del resultado.
*Si la pila que toma como argumento esta vacia, entonces
*indica que no contiene elementos y regresa -1.
*
*Si la pila tiene elementos, entonces copia el
*elemento que se encuentre en el tope a la variable aux,
*reduce el numero del tope de la pila en 1 y regresa el
*elemento copiado en aux.
*
*Esta Funcion no muestra que elimine el elemento despues
*de copiarlo.
******/

int top(Pila pila)
{
	if(pilaIsEmpty(pila)==1)
  {
		printf("La pila ya est%c vac%ca. \n",160,161);
		return -1;
	}
	else
  {
		return pila.lista[pila.tope-1];
	}
}

/*** INT TOP()
* Funcion que toma una variable de tipo pila como argumento
*y devueve un entero dependiendo del resultado.
*Si la pila que toma como argumento esta vacia, entonces
*indica que no contiene elementos y regresa -1.
*
*Caso contrario simplemente devuelve el elemento que
*se encuentra en el tope de la pila sin borrarlo.
*******/
