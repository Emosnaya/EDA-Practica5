#include "Pilarr.h"
#include <stdlib.h>
#include <stdio.h>

pilarr* pila_arr_vacia(){
    pilarr *p;
    p = (pilarr*)malloc(sizeof(pilarr));
    p->cima = NULL;
    p->fondo = NULL;
    p->lon = 0;

    return p;
}
bool push_arr(pilarr *p, int dato){
    if (es_vacia_arr(p))
    {
        /* code */
    }
    
}
bool pop_arr(pilarr*p){
    if (!es_vacia_arr(p))
    {
        p->cima--;
        p->lon--;
        return true;
    }
    return false;
    
}

bool es_vacia_arr(pilarr *p){
    return (p->lon = 0)? true: false;
}

bool esta_llena_arr(pilarr *p){
    return(p->lon<MAX-1)? false: true;
}
int cuantos_arr(pilarr *p){
    return p->lon;
}
bool anular_arr(pilarr *p){
    if(p!=NULL){
        free(p);
        p = NULL;
        return true;
    }
    return false;
}

void imprimir_pila_arr(pilarr *p){
    printf("[ ");
    for (int* i = p->cima; i <= p->fondo; i--)
    {
        printf("%d", *i);
    }
    printf("] \n");
}