#ifndef COLAS_H_INCLUDED
#define COLAS_H_INCLUDED

typedef struct NodoCola
{
    int informacion;
    struct NodoCola * siguiente;
}Nodo;

typedef struct
{
    Nodo * ultimo, * primero;
}Cola;

void vacia(Cola *c);
int esVacia(Cola c);
void encolar(Cola *c, int elem);
void desencolar(Cola *c);
int frente(Cola c);
void destruir(Cola *c);
void mostrarCola(Cola cola);

#endif // COLAS_H_INCLUDED
