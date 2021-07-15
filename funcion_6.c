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


/*Descripcion:
 *Pre: 
 *Post:
*/
void mostrarPrecioFinal(costoFinal){

}



/*Descripcion: Seleccionar el precio a agregar dependiendo del producto elegido
 *Pre: "productoAgregado" debe corresponder a las opciones disponibles en esta funcion.
 *Post: Devuelve el precio del producto elegido
*/
int agregarPrecio(int productoAgregado){



	return ;
}



/*Descripcion: Muestra el menu de productos disponibles en la tienda
 *Pre: -.
 *Post: Muestra el menu de productos disponibles en la tienda
*/
void menu(){

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
		scanf("%i", opcRecibida);
		costoFinal += agregarPrecio(opcRecibida);

	}while( opcRecibida != PASAR_CAJA);
	mostrarPrecioFinal(costoFinal);
}


int main(){

	comenzarVenta();

	return 0;
}
