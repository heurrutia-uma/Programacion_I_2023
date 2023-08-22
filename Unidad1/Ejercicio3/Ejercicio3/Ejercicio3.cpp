// Ejercicio3.cpp : Programa que indique si un número entero es negativo, positivo o cero.
//

#include <stdio.h>

int main()
{
    int num;

    printf("- Programa determina numero es negativo, positivo o cero -\n");
    printf("Ingrese un numero entero: ");
    scanf_s("%d", &num);

    if (num == 0)
        printf("Numero es igual a cero.\n");
    else
    {
        if (num < 0)
            printf("Numero es negativo.\n");
        else
            printf("Numero es positivo.\n");
    }

    return 0;
}
