#ifndef __NODO_H__
#define __NODO_H__
#include <stdbool.h>

typedef int DATA;

struct _nodo{
    DATA dato;
    struct _nodo *siguiente;
};

typedef struct _nodo NODO;

NODO* crear_nodo(DATA, NODO*);
bool borrar_nodo(NODO*);
void actualizar_nodo(NODO*, DATA, NODO*);

#endif // !__NODO_H__