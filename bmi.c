#include <stdio.h>

//https://github.com/aguevara7/Info1-2025.git

int main(void) {
	float peso, altura, imc;
	
	printf ("Ingrese su peso en kg:");
	scanf ("%f",&peso);
	
	while (peso<=0) {
		printf ("Error. Ingrese nuevamente el peso:");
		scanf ("%f", &peso);
	}
	
	printf ("Ingrese su altura en m:");
	scanf ("%f",&altura);

	while (altura<=0) {
		printf ("Error. Ingrese nuevamente la altura:");
		scanf ("%f", &altura);
	}
	
	imc = peso/(altura*altura);
	printf ("Su indice es: %.2f\n", imc);
	printf ("\nIndice|condicion\n");
	printf ("-----------------\n");
	printf ("<18.5|Bajo peso\n 18.5 a 24.9|Normal\n 25.0 a 29.9|Sobrepeso\n >=30|Obesidad\n");
	
	if (imc < 18.5) 
		printf("La condición del usuario es: Bajo peso\n");
	else if (imc < 25.0)
		printf("La condición del usuario es: Normal\n");
	else if (imc < 30.0)
		printf("La condición del usuario es: Sobrepeso\n");
	else
		printf("La condición del usuario es: Obesidad\n");

	return 0;
}

