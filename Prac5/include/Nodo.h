#ifndef __NODO_H__
#define __NODO_H__
#include <stdbool.h>


typedef int DATA;

struct _Nodo
{
    DATA dato;
    struct _Nodo *siguiente;
};

typedef struct _Nodo Nodo;

Nodo* crear_nodo(DATA, Nodo*);
bool borrar_nodo(Nodo*);
void actualizar_nodo(Nodo*, DATA, Nodo*);

#endif 