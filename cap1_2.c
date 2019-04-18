
/*
El siguiente programa utiliza la formula °C=(5/9)(°F-32) para una tabla de temperatura Fahenheit
y si equivalente en Celsius.
*/

#include <stdio.h>

/* imprimir tabla °F a °C para los valores de 0 a 300 */

int main(){

	int fahr, Celsius;
	int lower, upper, step;

	lower = 0; 		/*Limite inferior de la tabla de temp*/
	upper = 300; 	/*Limite superior*/
	step = 20; 		/*Tamaño del incremento*/

	fahr = lower;
/*
	while (fahr <= upper){
		Celsius = 5*(fahr-32)/9;
		printf("%3d \t %6d \n", fahr, Celsius); //Si aumentamos a cada %d, los numeros impresos seran justificados hacia su derecha
		fahr=fahr+step;
	 }
*/


/*Para obtener soluciones mas precisas se debe usar aritmetica de punto flotante*/
	printf("Con Punto flotante\n");
		while (fahr <= upper){
		Celsius = 5.0*(fahr-32)/9.0;
		printf("%3.0f %6.1f \n", fahr, Celsius); 
		fahr=fahr+step;

		}
	
	return 0;
}

