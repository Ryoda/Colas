#include <stdio.h>
#include <stdlib.h>
#include "Colas.h"


void vacia(Cola *c)
{
    c->primero = NULL;
    c->ultimo = NULL;
}

int esVacia(Cola c)
{
   return(c.primero == NULL);
}

void encolar(Cola *c, int elem)
{
    Nodo * nuevo;
    if((nuevo = (Nodo *) malloc(sizeof(Nodo))) == NULL)
    {
        fprintf(stderr, "malloc termino inesperadamente\n");
    }
    else
    {
        nuevo->informacion = elem;
        nuevo->siguiente = NULL;
            if(c->primero == NULL && c->ultimo == NULL)
            {
                c->primero = nuevo;
                c->ultimo = nuevo;
            }else
            {
                c->ultimo->siguiente = nuevo;
                c->ultimo = c->ultimo->siguiente;
            }
    }

}

void desencolar(Cola *c)
{
    if(c->primero == NULL && c->ultimo == NULL)
    {
        fprintf(stderr, "error en el procedimiento desencolar(): Se intento desencolar en una cola vacia\n");
    }else
    {
        Nodo *auxiliar;
        auxiliar = c->primero;
        c->primero = auxiliar->siguiente;
        free(auxiliar);
    }
}

int frente(Cola c)
{
    return(c.primero->informacion);
}

void destruir(Cola *c)
{
    Nodo *auxiliar;


    while(c->primero != NULL)
    {
        auxiliar = c->primero;
        c->primero = auxiliar->siguiente;
        free(auxiliar);
    }
}

void mostrarCola(Cola cola)
{
    Nodo *indice;
    indice = cola.primero;
    while(indice != NULL)
    {
        printf("%d ", indice->informacion);
        indice = indice->siguiente;
    }
     printf("\n");
}
