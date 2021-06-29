#include <stdio.h>


/*
	Crear una funcion de suma

	• necesita recibir los sumandos y devolver el resultado 
	correspondiente

	• mostrar el resultado en consola

*/




int suma(int sumandoUno, int sumandoDos){
	int resultado = 0;
	resultado = sumandoUno + sumandoDos;

	return resultado;
}



int main(){

	int variableUno = 2;
	int variableDos = 2;
	int resultado = 0;

	resultado = suma(4, -2);

	printf("El resultado de la suma es: %i \n", resultado );


	return 0;
}