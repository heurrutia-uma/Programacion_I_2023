// EjercicioForFracciones.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
    int n;

    printf("Ingrese un numero entero: ");
    scanf_s("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 4; j++)
            printf("%d/%d ", i, j);

        printf("\n");
    }
}

