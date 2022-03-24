#include "Nodo.h"
#include <stdlib.h>

NODO* crear_nodo(DATA d, NODO* n){
    NODO * n1;
    n1 = (NODO*)malloc(sizeof(NODO));
    n1->dato = d;
    n1->siguiente = n;
    return n1;
}

bool borrar_nodo(NODO* n){
    if(n == NULL) return false;
    if(n->siguiente == NULL){
        free(n);
        n=NULL;
        return true;
    }
}

void actualizar_nodo(NODO* n, DATA d, NODO* ns){
    n->dato = d;
    n->siguiente = ns;
}