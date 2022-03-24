#ifndef __COLA_ARR_H__
#define __COLA_ARR_H__
#include "Nodo.h"
#include <stdbool.h>
#define MAX 20

struct _Cola_arr
{
    int datos[MAX];
    int* _frente;
    int* _final;
    int lon;
};

typedef struct _Cola_arr Colarr;

Colarr* cola_vacia_arr();
bool ecnolar_arr(Colarr*, DATA);
bool desencolar_arr(Colarr*);
int primero_arr(Colarr*);
bool es_vacia_arr(Colarr *);
bool esta_llena_arr(Colarr *);
int cuantos_arr(Colarr*);
bool anular_arr(Colarr*);
void imprimir_colarr(Colarr*);



#endif