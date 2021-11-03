//#include "colaDoble.h"

typedef struct
{
    int primero;
    int ultimo;
    int tamano;
	int disponibles;
  	int* lista;
}
Cola;

/*** STRUCT COLA
* Crea una estructura de tipo Cola
* que contiene 4 variables enteras
* para designar los indices tanto del
* primer como del segundo elemento, el
* tamano del arreglo y los lugares
* disponibles.
*
* Estos los ingresa dentro de un apuntador
* de enteros llamado lista.
******/

Cola crearCola(int tamano)
{
	Cola c;
	c.primero=1;
	c.ultimo=0;
	c.tamano=tamano;
	c.disponibles = c.tamano;
	c.lista = (int*)calloc(c.tamano,sizeof(int));
	return c;
}

/*** COLA CREARCOLA()
* Funcion que devuelve una estructura tipo Cola
* que se encarga de asignar los valores iniciales
* de la variable.
*
* Usa un argumento de tipo entero llamado tamano, el
* cual se usa para definir el numero de localidades
* de memoria que se asignaran al apuntador de enteros
* para configurar su tamano.
******/

int isEmpty(Cola c)
{
	if((c.primero==c.ultimo+1)&&(c.disponibles==c.tamano))
  {
    return 1;
  }
	return 0;
}

/*** INT ISEMPTY()
*Funcion que evalua si la variable tipo Cola
*tiene o no elementos dentro del arreglo.
*
* Debido a su estructura de Cola dobre, evalua que
*los indices sean iguales y tambien si los espacios
*disponibles son los mismos que el tamano total.
*
*Devuelve un valor 1 en caso de que no existan
*elementos dentro del arreglo y un valor 0
*si existen elementos dentro de el.
******/

void encolarFinal(Cola *c,int x)
{
	if(c->disponibles == 0)
  {
		printf("ya esta a su maxima capacidad \n");
	}
	else
  {
		c->ultimo=(c->ultimo%c->tamano)+1;
		c->lista[c->ultimo-1]=x;
		c->disponibles--;
	}
}

/*** VOID ENCOLARFINAL()
* Esta funcion usa dos argumentos que son
* un apuntador tipo Cola y una variable entera.
*
* Evalua primero si aun hay espacios disponibles
* dentro del arreglo, si no existen, imprime una
* leyenda indicadolo; si existen, entonces
* ingresa el elemento en la ultima posicion de
* la lista.
*
* El modulo se usa para obtener el residuo
* de la division entre el ultimo elemento y
* el tamano ya que de esta forma, si el
* ultimo elemento sobrepasa el tamano, entonces
* regresara a 1.
*
* Por ultimo cuando se obtiene el nuevo indice
* a partir de la operacion en ultimo, se deposita
* este elemento en el indice correspondiente de
* la lista y se reduce en 1 el numero de lugares
* disponibles.
**********/

void encolarInicio(Cola *c,int x)
{
	if(c->ultimo == 0)
  {
		encolarFinal(c,x);
	}
	else
  {
		if(c->disponibles == 0)
    {
			printf("ya esta a su maxima capacidad \n");
		}
		else
    {
			if(c->primero==1)
      {
				c->primero+=c->tamano-1;
				c->lista[c->primero-1]=x;
				c->disponibles--;
			}
			else
      {
				c->primero=(c->primero+c->tamano)%((c->tamano)+1);
				c->lista[c->primero-1]=x;
				c->disponibles--;
			}
		}
	}
}

/*** VOID ENCOLARINICIO()
* Esta funcion evalua en primera instancia si el elemento
* a ingresar es el primer elemento de la lista, si es asi,
* entonces usa la funcion encolarFinal() para agregarlo.
*
* Si resulta falsa, entonces evalua si hay lugares disponibles
* aun, en caso de que no lo haya, imprime una leyenda que indica
* que ya no hay lugares disponibles para alojar el numero.
*
* Si existen aun lugares disponibles, entonces la funcion evalua
* si solamente existe un elemento en la lista, si es asi, entonces
* pone el elemento al final de la lista, lo que implica que como es
* una lista circular, entonces obtiene la primera posicion en la lista
* al mismo tiempo que se modifica la variable primero para denotar
* el primer lugar de la lista.
*
* Si existen mas elementos en la lista, entonces a traves del modulo
* se modifica la variable primero a un lugar delante del primer lugar
* en ese momento y se asigna el valor en x al indice correspondiente.
*******/

int desencolarInicio(Cola *c)
{
	if((isEmpty(*c))==1)
	{
    	printf("la cola est� vac�a \n");
		return 0;
	}
	else
	{
		c->disponibles++;
		int aux = c->lista[c->primero-1];
		c->lista[c->primero-1]=0;
		if(c->primero!=c->ultimo)
    	{
			c->primero=(c->primero % c->tamano)+1;
    	}
		else
    	{
			c->primero++;
			if((c->primero)==(c->ultimo+1))
    		{
	  			*c=crearCola(c->tamano);
	  		}
    	}
	 	return aux;
	}
}

/*** INT DESENCOLARINICIO()
* Esta funcion toma como argumento el apuntador de la Cola
* a modificar.
*
* Evalua primeramente si la Cola carece de elementos y retorna
* un mensaje en caso de que asi sea; si no, entonces modifica
* la variable "disponibles" y agrega uno ya que eliminara un
* elemento de la lista. Despues copia el primer elemento de la
* lista y lo deposita en la variable aux, acto seguido, asigna
* un valor de 0 al indice donde se encontraba el elemento copiado.
*
* Despues la funcion evalua si el valor en primero es igual al
* valor en ultimo, si no lo es, entonces incrementa el valor de
* primero en uno para asignar la primera posicion al elemento que
* seguia del elemento eliminado.
*
* Si el valor en primero es igual al valor en ultimo mas uno, entonces
* la funcion procede a implementar valores predeterminados a traves
* del apuntador de la pila.
*
* Esta ultima evaluacion que se hace de los valores, parece tautologica
* pues ya se habia determinado anteriormente que los valores son
* iguales cuando se procede a este ultimo paso.
*
* La funcion termina por retornar el valor almacenado en aux.
******/

int desencolarFinal(Cola *c)
{
	if((isEmpty(*c))==1)
  {
		printf("la cola est� vac�a \n");
	return 0;
  }
	else
  {
		c->disponibles++;
		int aux = c->lista[c->ultimo-1];
		c->lista[c->ultimo-1]=0;
		c->ultimo--;
		if(c->ultimo==0)
    {
			if(c->primero==(c->ultimo+1))
      {
	 			*c=crearCola(c->tamano);
			}
			else
      {
        c->ultimo+=c->tamano;
      }
		}
		if(c->primero==(c->ultimo+1))
    {
	 			*c=crearCola(c->tamano);
		}
    return aux;
	}
}

/*** INT DESENCOLARFINAL()
* Esta funcion toma como argumento el apuntador de la Cola
* a modificar.
*
* Evalua primeramente si la Cola carece de elementos y retorna
* un mensaje en caso de que asi sea; si no, entonces modifica
* la variable "disponibles" y agrega uno ya que eliminara un
* elemento de la lista.
*
* Despues de esto, la funcion deposita en la variable aux el
* valor del ultimo elemento de la lista, procede a modificar
* el indice correspondiente a 0 en la lista y reduce en 1 el
* valor en ultimo.
*
* Despues evalua si el valor en ultimo es igual a 0, si esto
* es cierto, entonces evalua si el valor de ultimo mas 1 es igual
* al valor de la variable primero, si es cierto, entonces concede
* valores predeterminados a la Cola a traves de la funcion crearCola()
* puesto que esto significa que ya no hay elementos en la lista.
* Si el valor en ultimo mas 1 no es igual al valor de primero, entonces
* asigna el valor de ultimo al valor del tamano de la lista.
*
* Si el valor de ultimo no es igual 0, entonces la funcion evalua
* si el valor de primero es igual al valor de ultimo + 1, de ser asi
* entonces procede a resetear los valores en la estructura Cola a
* predeterminados.
*
* la funcion finaliza retornando el valor almacenado en aux.
******/

void mostrarValores(Cola queue1)
{
	int i=0;
	for(i=0;i<queue1.tamano;i++)
  {
	    printf("Posicion %d \t valor %d \n",i+1,queue1.lista[i]);
	}
}

/*** VOID MOSTRARVALORES()
* Esta funcion muestra los valores contenidos en la lista
* que se encuentra en la estructura Cola transmitida a traves
* del argumento Cola queue1.
*
* Toma el parametro tamano como limite del for-loop e itera
* a traves de cada una de las posiciones de la lista, imprimiendo
* los valores contenidos en cada uno de los indices determinado
* por el valor de i.
******/

void mostrarIndices(Cola queue1)
{
	printf("Primero = %d \n",queue1.primero);
	printf("Ultimo = %d \n",queue1.ultimo);
	printf("Disponibles = %d \n",queue1.disponibles);
}

/*** VOID MOSTRARINDICES()
* La funcion toma como argumento una estructura tipo Cola
* e imprime los valores asignados a cada uno de los miembros
* de la estructura dependiendo de lo contenido como argumento
* en la funcion printf()
******/

void empty(Cola cola)
{

	printf("\nEjecutando funcion isEmpty()\n");

	if(isEmpty(cola) == 1)
    {
        printf("\tCola vacia\n\n");
    }
    else
    {
        printf("\tCola con elementos\n\n");
    }
}

void pair(Cola c)
{
	printf("\n");
    mostrarValores(c);
    printf("\n");
    mostrarIndices(c);
    printf("\n");
}