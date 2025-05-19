#include <stdio.h>

int main(void) {
	float peso, altura, imc;
	
	printf ("Ingrese su peso en kg:");
	scanf ("%f",&peso);
	printf ("Ingrese su altura en m:");
	scanf ("%f",&altura);
	
	imc = peso/(altura*altura);
	printf ("Su indice es: %.2f\n", imc);
	printf ("Indice|condicion\n");
	printf ("-----------------\n");
	printf ("<18.5|Bajo peso\n 18.5 a 24.9|Normal\n 25.0 a 29.9|Sobrepeso\n >=30|Obesidad");
	return 0;
}

