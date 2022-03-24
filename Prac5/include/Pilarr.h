#ifndef __PILA_ARR_H__
#define __PILA_ARR_H__
#include <stdbool.h>
#include "Nodo.h"
#define MAX 20

struct _pila_arr{
    int datos[MAX];
    int *cima;
    int *fondo;
    int lon;
};

typedef struct _pila_arr pilarr;

pilarr* pila_arr_vacia();
bool push_arr(pilarr*, int);
bool pop_arr(pilarr*);
int top_arr(pilarr*);
bool es_vacia_arr(pilarr *);
bool esta_llena_arr(pilarr*);
int cuantos_arr(pilarr*);
bool anular_arr(pilarr*);
void imprimir_pila_arr(pilarr*);



#endif
