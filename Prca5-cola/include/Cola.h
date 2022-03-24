#ifndef __COLA_H__
#define __COLA_H__
#include "Nodo.h"
#include <stdbool.h>

struct _Cola
{
    Nodo* _frente;
    Nodo* _final;
    int lon;
};

typedef struct _Cola Cola;

Cola* cola_vacia();
bool ecnolar(Cola*, DATA);
DATA desencolar(Cola*);
DATA primero(Cola*);
bool es_vacia(Cola *);
int cuantos(Cola*);
bool anular(Cola*);



#endif