// Ejercicio1.cpp : Programa que solicita dos números enteros e indique 
// si el primer número es divisible entre el segundo.
//

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("-Programa numero es divisible entre otro-\n");
    printf("Ingrese el primer numero entero: ");
    scanf_s("%d", &num1);

    printf("Ingrese el segundo numero entero: ");
    scanf_s("%d", &num2);

    if (num2 == 0)
    {
        printf("Error: No se puede dividir por cero.\n");
    }
    else
    {
        if (num1 % num2 == 0) {
            printf("%d es divisible por %d.\n", num1, num2);
        }
        else {
            printf("%d no es divisible por %d.\n", num1, num2);
        }
    }

    return 0;
}

