#include <stdio.h>
#include <stdlib.h>
#include "Colas.h"
int main()
{
    FILE *fr = fopen("elementos.in", "r");
    int n,i, entrada;
    Cola cola;
    vacia(&cola);

    fscanf(fr, "%d", &n);

    for(i = 1; i <= n; i++)
    {
        fscanf(fr, "%d", &entrada);
        encolar(&cola, entrada);
        mostrarCola(cola);
    }
    for(i = 1; i <= n; i++)
    {
        desencolar(&cola);
        mostrarCola(cola);
    }





    return 0;
}
