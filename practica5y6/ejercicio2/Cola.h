//#include "Cola.h"

Cola crearCola(int tamano)
{
	Cola c;
	c.primero = 1;
	c.ultimo = 0;
	c.lista = (Documento*) malloc(sizeof(Documento) * tamano);
	return c;
}

/*** COLA CREARCOLA()
*Funcion que sirve para inicializar una variable
*de tipo Cola.
*
*Crea la variable y le asigna valores a primero de 1
*y a ultimo de 0 los cuales iran contabilizando la
*posicion del primer y ultimo elemento dentro
*del arreglo donde se almacenen.
********/

int isEmpty(Cola c)
{
	if(c.primero==c.ultimo+1)
  {
		return 1;
  }
	return 0;
}

/*** INT ISEMPTY()
*Funcion que evalua si la variable tipo Cola
*tiene o no elementos dentro del arreglo.
*
*Devuelve un valor 1 en caso de que no existan
*elementos dentro del arreglo y un valor 0
*si existen elementos dentro de el.
******/

void encolar(Cola *c,Documento documento)
{
	c->lista[c->ultimo] = documento;
	c->ultimo+=1;
}

/*** VOID ENCOLAR()
*Funcion que toma dos argumentos un apuntador tipo Cola
*y una variable tipo entero para insertar esta ultima
*dentro del arreglo siempre en ultimo lugar.
*
*Despues de insertar el elemento incrementa el valor de
*"ultimo" en 1.
******/

Documento desencolar(Cola *c)
{
	if((isEmpty(*c))==1)
	{
		printf("la cola est� vac�a \n");
		abort();
	}
	else
	{
		Documento aux = c->lista[c->primero-1];
		c->primero++;

		if(c->primero==c->ultimo+1)
    	{
		    *c=crearCola(0);
		}
		return aux;
	}
}

/*** INT DESENCOLAR()
* la funcion desencolar, sirve para remover el
*primer elemento de una Cola, que en el caso de una
*fila por ejemplo, seria el que se encuentra hasta
*el frente de esta.
*
*Primeramente, la funcion evalua si el arreglo no
*esta vacio, si es asi, entonces imprime una
*leyenda. Si no, entonces extrae el primer elemento
*de la lista y lo regresa a traves de la variable aux.
*
*Si este elemento es a su vez el ultimo en la fila
*entonces la funcion resetea los valores de la
*variable tipo Cola a "predeterminados"
*******/

Documento first(Cola c)
{
	return c.lista[c.primero-1];
}

/*** INT FIRST()
*Devuelve el primer elemento de la Cola
*******/
