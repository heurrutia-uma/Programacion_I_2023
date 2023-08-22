// EjercicioWhileFibonacii.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
	int n, i = 0;
	int primero = 0, segundo = 1, siguiente;

	printf("Ingrese la cantidad de terminos de la secuencia de Fibonacii: ");
	scanf_s("%d", &n);

	while (i < n)
	{
		if (i <= 1)
			siguiente = i;
		else
		{
			siguiente = primero + segundo;
			primero = segundo;
			segundo = siguiente;
		}

		printf("%d ", siguiente);
		i++;
	}
}
