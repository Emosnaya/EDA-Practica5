#include <stdio.h>
#include "Colarr.h"

int menu();

int main()
{
	int  op = 0;
	Colarr *c;
	DATA info;
	do{
		op = menu();
		switch (op)
		{
		case 1:
			c = cola_vacia_arr();
			break;
		case 2:
			printf("Ingresa el dato a insertar en la Cola\n");
			scanf("%d", &info);
			ecnolar_arr(c, info);
			imprimir_colarr(c);
			break;
		case 3:
			desencolar_arr(c);
			imprimir_colarr(c);
			break;
		case 4:
			anular_arr(c);
			break;		
		default:
			break;
		}
	}while(op!=5);

	return (0);
}

int menu(){
	int opcion;
	printf("Selecciona una opción\n");
	printf("1. Crear Cola\n");
	printf("2. Encolar\n");
	printf("3. Desencolar\n");
	printf("4. Anular\n");
	printf("5. Salir\n");
	scanf("%d", &opcion);
	return opcion;
}








