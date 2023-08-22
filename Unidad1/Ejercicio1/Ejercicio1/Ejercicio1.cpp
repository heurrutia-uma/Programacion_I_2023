// Ejercicio1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
    float nota;
    printf("Ingrese valor de la nota final: ");
    scanf_s("%f", &nota);
    if (nota >= 0 && nota <= 10)
    {
        if (nota >= 6)
            printf("Nota %.2f - Aprobado", nota);
        else
            printf("Nota %.2f - Reprobado", nota);
    }
    else
        printf("Valor de nota fuera de rango");
}
