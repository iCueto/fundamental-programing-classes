#include <stdio.h>

/* Conversión de grados Celsius a Fahrenheit.
El programa, al recibir como dato una temperatura en grados Celsius,
la convierte a grados Fahrenheit.
CEL y FAH: variables de tipo real. */

void main(void)
{
    // Declaramos las variables para los grados Celsius y Fahrenheit
    float CEL, FAH;
    // Solicitamos al usuario que ingrese una temperatura en grados Celsius
    printf("Ingrese una temperatura en grados Celsius: ");
    // Leemos el valor ingresado por el usuario y lo almacenamos en la variable CEL
    scanf("%f", &CEL);
    // Convertimos la temperatura a grados Fahrenheit
    FAH = (CEL * 9 / 5) + 32;
    // Imprimimos el valor de la temperatura en grados Fahrenheit
    printf("La temperatura en grados Fahrenheit es: %.2f", FAH);
}
