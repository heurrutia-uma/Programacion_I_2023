// Ejercicio2.cpp : Programa que solicite nota obtenida por un estudiante 
// y que indique si examen fue aprobado.
//

#include <stdio.h>

int main()
{
    float nota;

    printf("- Programa indica nota -\n");
    printf("Ingrese valor de la nota final: ");
    scanf_s("%f", &nota);

    if (nota >= 0)
    {
        if (nota < 6)
            printf("Nota %.2f - Reprobada\n", nota);
        else
            printf("Nota %.2f - Aprobada\n", nota);
    }
}
