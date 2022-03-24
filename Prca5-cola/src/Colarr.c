#include "Colarr.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Funcion que se encarga de crear la Cola
 * 
 * @return Colarr* 
 */

Colarr* cola_vacia_arr(){
    Colarr *c;
    c = (Colarr*)malloc(sizeof(Colarr));
    c->_final = c->_frente = NULL;
    c->lon = 0;
    return c;
}

/**
 * @brief Funcion que se encarga de agregar datos a la Cola
 * 
 * @param c Cola
 * @param dato Entero
 * @return true si pudo encolar
 * @return false si no pudo encolar
 */

bool ecnolar_arr(Colarr *c, DATA dato){
    if (es_vacia_arr(c))
    {
        c->datos[0] = dato;
        c->_frente = c->_final = &c->datos[0];
        c->lon++;
        return true;
    }else if (!esta_llena_arr(c))
    {
        if(c->_final< &c->datos[MAX-1]){
            c->_final++;
            *(c->_final) = dato;
            c->lon++;
            return true;
        }else{
            c->_final = &c->datos[0];
            *(c->_final) = dato;
            c->lon++;
            return true;
        }
    }

    return false;
}
/**
 * @brief Funcion que se encarga de quitar elemtos
 * 
 * @param c Cola
 * @return true Si pudo eliminar
 * @return false Si no pudo eliminar
 */

bool desencolar_arr(Colarr *c){
    if (!es_vacia_arr(c))
    {
        if (c->_final == c->_frente)
        {
            c->lon = 0;
            return true;
        }else if (c->_frente < &c->datos[MAX-1])
        {
            c->_frente++;
            c->lon--;
            return true;
        }else{
            c->_frente = &c->datos[0];
            c->lon--;
            return true;
        }
    }
    return false;
}

/**
 * @brief Funcion que verifica que la Cola está vacía
 * 
 * @param c Cola
 * @return true Si está vacía
 * @return false Si no está vacía
 */

bool es_vacia_arr(Colarr *c){
    return (c->lon==0)? true : false;
}
/**
 * @brief Funcion que verfica si que la cola está llena
 * 
 * @param c Cola
 * @return true Si está llena
 * @return false Si no está llena
 */
bool esta_llena_arr(Colarr *c){
    return (c->lon==MAX)? true : false;
}

/**
 * @brief Funcion que borra la Cola
 * 
 * @param c Cola
 * @return true Si se pudo borrar la cola
 * @return false Si no se pudo borrar la cola
 */
bool anular_arr(Colarr *c){
    if(c!=NULL){
        free(c);
        c = NULL;
        return true;
    }
    return false;
}

/**
 * @brief Funcion que imprime la Cola
 * 
 * @param c Cola
 */

void imprimir_colarr(Colarr *c){
    printf("[ ");
    for (int *i = c->_frente; i != c->_final; i++)
    {
        printf("%d ", *i);
        if (i ==&c->datos[MAX-1])
        {
            i = &c->datos[0];
        }
        
    }
    printf("%d ]\n", *c->_final);
}