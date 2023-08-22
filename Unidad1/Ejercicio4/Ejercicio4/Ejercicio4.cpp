// Ejercicio4.cpp : Visualizar la tarifa de la luz según el gasto de corriente eléctrica. 
// Para un gasto menor de 1,000 kw/h la tarifa es $1.2, 
// entre 1,000 y 1,850 kw/h es $1.0 
// y mayor de 1,850 kwh, $0.9
//

#include <stdio.h>

int main()
{
    int kilowatts;
    float tarifa = 0, total = 0.0;

    printf("- Programa calcula tarifa consumo electrico -\n");
    printf("Ingrese el valor en Kilowatts/hora: ");
    scanf_s("%d", &kilowatts);

    if (kilowatts < 0)
    {
        printf("Error: Tarifa no se puede calcular con valores negativos.\n");
    }
    else
    {
        if (kilowatts >= 0 && kilowatts <= 1000)
            tarifa = 1.2;
        else if (kilowatts > 1000 && kilowatts <= 1850)
            tarifa = 1.0;
        else if (kilowatts > 1850)
            tarifa = 0.9;
    }

    printf("Tarifa a pagar por %d Kw/h es de $%.2f\n", kilowatts, tarifa);

    total = (kilowatts / 1000.0) * tarifa;

    printf("Total a pagar es: $%.6f", total);

    return 0;
}

