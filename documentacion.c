#include <stdio.h>


/*Descripcion: un algoritmo que realiza un objetivo

 *Pre: precondiciones para mi algoritmo, que tiene que
 *	   cumplirse cuando se lo llama

 *Post: postcondiciones para mi algoritmo, que proceso y/o
 * 		resultado se obtien al finalizar
*/
int funcion(){
	return 0;
}

/* Descripcion: divide dos numeros y devuelve el  
   resultado
 * Pre: "numeroDos" tiene que ser distinto de cero
 * Post: devuelve el resultado de la division entre "numeroUno" 
 		 y "numeroDos"
*/
float division(float numeroUno, int numeroDos){
	float resultado = numeroUno / numeroDos;
	return resultado;
}

int main(){

	printf("El resultado es: %f\n", division(1,0));

	return 0;
}
