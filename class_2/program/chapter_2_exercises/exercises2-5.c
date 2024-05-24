#include <stdio.h>

/* Descuento en tienda.
El programa, al recibir como dato el monto de una compra,
aplica un descuento dependiendo del monto.
COMPRA: variable de tipo real. */

int main(void)
{
    // Declara la variable para el monto de la compra
    float COMPRA, DESC;
    // Solicita al usuario que ingrese el monto de la compra
    printf("Ingrese el monto de la compra: ");
    // Lee el valor ingresado por el usuario y lo guarda en la variable COMPRA
    scanf("%f", &COMPRA);
    // Verifica el rango del monto de la compra y aplica el descuento correspondiente
    if (COMPRA < 500)
        DESC = COMPRA * 0.05; // 5% de descuento
    else if (COMPRA < 1000)
        DESC = COMPRA * 0.10; // 10% de descuento
    else if (COMPRA < 7000)
        DESC = COMPRA * 0.15; // 15% de descuento
    else
        DESC = COMPRA * 0.20; // 20% de descuento
    // Calcula el total después de aplicar el descuento
    COMPRA -= DESC;
    // imprime el total a pagar después del descuento
    printf("\nTotal a pagar después del descuento: %7.2f", COMPRA);
}