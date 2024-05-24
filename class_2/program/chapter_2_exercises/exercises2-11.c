#include <stdio.h>

/* Descuento de Navidad.
El programa, al recibir como dato el monto de una compra,
aplica un descuento dependiendo del monto durante la temporada de Navidad.
COMPRA: variable de tipo real. */

int main(void)
{
    // Declara la variable para el monto de la compra y el descuento
    float COMPRA, DESC;
    // Solicita al usuario que ingrese el monto de la compra
    printf("Ingrese el monto de la compra: ");
    // Lee el valor ingresado por el usuario y lo guarda en la variable COMPRA
    scanf("%f", &COMPRA);
    // Verifica el rango del monto de la compra y aplica el descuento correspondiente
    if (COMPRA < 800)
        DESC = 0; // Sin descuento
    else if (COMPRA <= 1500)
        DESC = COMPRA * 0.10; // 10% de descuento
    else if (COMPRA <= 5000)
        DESC = COMPRA * 0.15; // 15% de descuento
    else
        DESC = COMPRA * 0.20; // 20% de descuento
    // Calcula el total después de aplicar el descuento
    COMPRA -= DESC;
    // Imprime el total a pagar después del descuento
    printf("\nTotal a pagar después del descuento: %7.2f", COMPRA);
}
