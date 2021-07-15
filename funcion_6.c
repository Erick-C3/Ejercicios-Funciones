#include <stdio.h>


/*
	Tienda online

	Desarrollemos un software que maneje aspectos basicos de una tienda como
	lo son ver productos, agregar productos
	al carrito y pagar
	
	Nuestra tienda dispone de 3 productos: camisa, pantalon, medias. Cada producto
	no tiene limite de compra, los precios
	son camisa a $685.0, pantalon a $2690.0 y medias a $370.0

	Requisitos:

		-Implementar la modularizacion
		-Desplegar un menu con info necesaria para vender los productos
		-Permitir agregar productos hasta que el usuario decida comprar
		-Calcular el precio final  e informar el resultado del costo a pagar

	Extra: agregar opciones de pago en cuotas con y sin interes al pagar
	Extra: agregar stock
*/



/*CONSTANTES DE MENU TIENDA*/

#define PASAR_CAJA 0
#define OPC_CAMISA 1
#define OPC_PANTALON 2
#define OPC_MEDIAS 3

/*CONSTANTES DE PRECIOS*/
const int PRECIO_CAMISA = 685;
const int PRECIO_PANTALON = 2690;
const int PRECIO_MEDIAS = 370;
const int PRECIO_NULO = 0;



/*Descripcion: Muestra el precio final a pagar
 *Pre: "precioPagar" contiene el precio final a pagar correspondiente a la suma total de precio
 		de los productos que agrego el cliente
 *Post: Muestra el precio a pagar
*/
void mostrarPrecioFinal( int precioPagar){
	printf("Precio final: $%i \n", precioPagar);
}


/*Descripcion: Seleccionar el precio a agregar dependiendo del producto elegido
 *Pre: "productoAgregado" debe corresponder a los casos disponibles en esta funcion.
 *Post: Devuelve el precio del producto elegido
*/
int agregarPrecio(int productoAgregado){
	int precio = PRECIO_NULO;
	switch(productoAgregado){
		case OPC_CAMISA:
			precio = PRECIO_CAMISA;
			break;
		case OPC_PANTALON:
			precio = PRECIO_PANTALON;
			break;
		case OPC_MEDIAS:
			precio = PRECIO_MEDIAS;
	}

	return precio;
}



/*Descripcion: Muestra el menu de productos disponibles en la tienda
 *Pre: -.
 *Post: Muestra el menu de productos disponibles en la tienda
*/
void menu(){
	printf("Menu\n");
	printf("- Camisa $685.0 [1]\n");
	printf("- Pantalon $2690.0 [2]\n");
	printf("- Medias $370.0 [3]\n");
	printf("- Pasar caja [0]\n");
}


/*Descripcion: Comienza las operaciones necesarias para comenzar la venta
 *Pre: -.
 *Post: Ejecuta las operaciones necesarias para realizar la venta hasta que el usuario quiera comprar
*/
void comenzarVenta(){
	int opcRecibida = 0;
	int costoFinal = 0;
	do{

		menu();
		scanf("%i", &opcRecibida);
		costoFinal += agregarPrecio(opcRecibida);

	}while( opcRecibida != PASAR_CAJA);
	mostrarPrecioFinal(costoFinal);
}


int main(){

	comenzarVenta();

	return 0;
}
