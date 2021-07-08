/*
	https://elcodigoascii.com.ar/

	Conociendo que al tipo de dato char tambien lo podemos  usar 
	con sus codigos numeros de la tabla ascii, hagamos un programa 
	para poder utilizar todos los caracteres del abecedario en minuscula


	Requisitos
		- mostrar un menu
		- Imprimir el abecedario en minuscula
			- imprimir todo el abecedario
			- imprimir un rango especifico
			- imprimir desde un caracter especifico
		- repetir hasta que el usuario quiera salir
		- manejar solo codigo ascii 
	
	EXTRA: permitir mostrar en mayuscula
	EXTRA: permitir alternar entre minuscula y mayuscula en un mismo
			resultado de impresion
*/

#include <stdio.h>




const int CARACTER_A_MIN = 97;
const int CARACTER_Z_MIN = 122;


#define OPC_TODO_ABC 1
#define OPC_RANGO_ABC 2
#define OPC_IMPRIMIR_DESDE 3

#define OPC_SALIR 0

int main(){

	int caracterCodigo = 0 ;
	int opcUsuario = -1;

	int caracterIni = 0;
	int caracterFinal = 0;

	do{
		printf("Menu\n");
		printf("imprimir todo el abecedario - 1\n");
		printf("imprimir un rango especifico - 2\n");
		printf("imprimir desde un caracter especifico - 3\n");
		printf("Salir - 0\n");
		scanf("%i", &opcUsuario);

		switch(opcUsuario){
			case OPC_TODO_ABC:
				
				for(caracterCodigo = CARACTER_A_MIN ; caracterCodigo <= CARACTER_Z_MIN ; caracterCodigo++){
					printf("El caracater es %c \n", caracterCodigo);
				}
				break;
			case OPC_RANGO_ABC:
				printf("Ingrese el codigo del caracter inicial\n");
				scanf("%i", &caracterIni);
				printf("Ingrese el codigo del caracter final\n");
				scanf("%i", &caracterFinal);
				for(caracterCodigo = caracterIni ; caracterCodigo <= caracterFinal ; caracterCodigo++){
					printf("El caracter es %c \n", caracterCodigo);
				}
				break;
			case OPC_IMPRIMIR_DESDE:
				printf("Ingrese el codigo del caracter inicial\n");
				scanf("%i", &caracterIni);
				for(caracterCodigo = caracterIni ; caracterCodigo <= CARACTER_Z_MIN ; caracterCodigo++){
					printf("El caracter es %c \n", caracterCodigo);
				}
				break;
			case OPC_SALIR:
				printf("Salir\n");
				break;
			default:
				printf("Ingreso es invalido\n");
		}
	}while(opcUsuario != OPC_SALIR);

	return 0;
}