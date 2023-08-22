// Ejercicio5.cpp : Calcular el mayor de dos números leídos del teclado y visualizarlo en pantalla.
//

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("- Programa calcula mayor de dos numeros -\n");

    printf("Ingrese el primer numero entero: ");
    scanf_s("%d", &num1);

    printf("Ingrese el segundo numero entero: ");
    scanf_s("%d", &num2);

    if (num1 < num2)
        printf("%d es menor que %d.\n", num1, num2);
    else
        printf("%d es mayor que %d.\n", num1, num2);

    return 0;
}

