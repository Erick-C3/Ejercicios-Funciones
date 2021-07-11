#include <stdio.h>


/*
	https://elcodigoascii.com.ar/

	Conociendo que al tipo de dato char tambien lo podemos  usar 
	con sus codigos numeros de la tabla ascii hagamos un programa 
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

const int CODIGO_A_MIN = 97;
const int CODIGO_Z_MIN = 122;


const int SALIR = 0;

#define OPC_IMPRIMIR_TODO 1
#define OPC_IMPRIMIR_RANGO 2
#define OPC_IMPRIMIR_DESDE 3



/*Descripcion: muestra el menu de opcion para el programa
 *Pre: -.
 *Post: Muestra el menu
*/
void mostrarMenu(){
	printf("Menu\n");
	printf("Imprimir todo el abecedario 1\n");
	printf("Imprimir un rango especifico 2\n");
	printf("Imprimir desde un caracter especifico 3\n");
	printf("Salir 0\n");
}


/*Descripcion: pide la opcion al usuario y la devuelve
 *Pre: -.
 *Post: devuelvo la opcion ingresada por el usuario
*/
int pedirOpcion(){
	int opc = 0;//variable de la funcion pedirOpcion
	mostrarMenu();//llamo al procedimiento mostrarMenu
	scanf("%i", &opc);
	return opc;
}


/*Descripcion: imprime todo el abecedario en minuscula
 *Pre: "codigoAmin" y "codigoZmin" correctamente definidos.
 *Post: imprime todo el abecedario en minuscula
*/
void opcImprimirTodo(int codigoAmin, int codigoZmin){
	for ( int caracter = codigoAmin ; caracter <= codigoZmin; ++caracter){
		printf("%c\n",caracter );
	}
}


/*Descripcion: imprime el abecedario en minuscula en un rango definid
 *Pre: "caracterIni" tiene que ser menor "caracterFin" y corresponder a valores numericos del abecedario en min.
 *Post: imprime el abecedario en minuscula en un rango definido por "caracterIni" y "caracterFin"
*/
void imprimirRango(int caracterIni, int caracterFin){
	for ( caracterIni ; caracterIni <= caracterFin; ++caracterIni){
		printf("%c\n",caracterIni );
	}
}


/*Descripcion: ejecutar la opcion imprimir rango
 *Pre: -.
 *Post: ejecuta la opcion imprimir rango
*/
void opcImprimirRango(){
	int caracterIni = 0;
	int caracterFin = 0;
	printf("Ingrese el caracter inicial\n");
	scanf("%i", &caracterIni);
	printf("Ingrese el caracter final \n");
	scanf("%i", &caracterFin);
	imprimirRango(caracterIni, caracterFin);
}


/*Descripcion: ejecutar la opcion imprimir desde un caracter hasta el caracter 'z'
 *Pre: -.
 *Post: imprime desde un caracter ingresado por el usuario hasta el caracter 'z'
*/
void opcImprimirDesde(){
	int caracterIni = 0;
	printf("Ingrese el caracter inicial\n");
	scanf("%i", &caracterIni);
	for ( caracterIni ; caracterIni <= CODIGO_Z_MIN; ++caracterIni){
		printf("%c\n",caracterIni );
	}
}


/*Descripcion: ejecuta la opcion ingresada por el usuario
 *Pre: "opc" tiene corresponder a la opcion ingresada por el usuario y tiene que corresponder a las opciones
 		consideradas en este procedimiento.
 *Post: ejecuta la opcion requerida por el usuario
*/
void ejecutarOpcion(int opc){
	switch(opc){
		case OPC_IMPRIMIR_TODO:
			opcImprimirTodo(CODIGO_A_MIN, CODIGO_Z_MIN);
			break;
		case OPC_IMPRIMIR_RANGO:
			opcImprimirRango();
			break;
		case OPC_IMPRIMIR_DESDE:
			opcImprimirDesde();
			break;
	}
}


/*Descripcion: ejecuta lo necesario para el programa
 *Pre:-.
 *Post: ejecuta el programa
*/
int programa(){
	int opc = 0;
	opc = pedirOpcion();
	ejecutarOpcion(opc);
	return opc;
}


/*Descripcion: comienza el programa y termina cuando  el usuario ingresa la opcion para salir
 *Pre:-.
 *Post: ejecuta el programa hasta que el usuario ingresa la opcion "SALIR"
*/
void comenzarPrograma(){
	int opc = 0;// variable del procedimiento comenzarPrograma
	do{
		opc = programa();
	}while(opc != SALIR);
}




int main(){
	comenzarPrograma();
	return 0;
}