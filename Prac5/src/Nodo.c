#include "Nodo.h"
#include <stdlib.h>

Nodo* crear_nodo(DATA d, Nodo* n){
    Nodo* n1 = (Nodo*)malloc(sizeof(Nodo));
    n1->dato = d;
    n1->siguiente = n;
    return n1;
}
bool borrar_nodo(Nodo* n){
    if(n == NULL) return false;
    if(n->siguiente == NULL){
        free(n);
        n = NULL;
        return true;
    }
}
void actualizar_nodo(Nodo* n , DATA d, Nodo* ns){
    n->dato = d;
    n->siguiente = ns;
}