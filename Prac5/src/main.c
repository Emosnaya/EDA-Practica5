#include <stdio.h>
#include "Pilarr.h"

int main()
{
	pilarr *p;

	p = pila_arr_vacia();
	push_arr(p, 1);
	imprimir_pila_arr(p);

}