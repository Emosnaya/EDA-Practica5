#ifndef __PILA_H__
#define __PILA_H__

#include "Nodo.h"

struct _Pila{
    Nodo* cima;
    Nodo* fondo;
    int lon;
};

typedef struct _Pila Pila;

Pila* pila_vacia();
bool push(Pila*, DATA);
DATA pop(Pila*);
DATA top(Pila*);
bool es_vacia(Pila *);
int cuantos(Pila*);
bool anular(Pila*);




#endif
