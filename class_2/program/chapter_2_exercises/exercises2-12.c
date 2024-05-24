#include <stdio.h>

/* Sueldo con horas extra.
El programa, al recibir como datos el sueldo base y las horas extra trabajadas,
calcula el sueldo total a pagar.
SUELDO_BASE y HORAS_EXTRA: variables de tipo real.
PAGO_EXTRA: variable de tipo entero. */

int main(void)
{
    // Declara las variables para el sueldo base, las horas extra y el pago extra
    float SUELDO_BASE, SUELDO_TOTAL;
    int HORAS_EXTRA, PAGO_EXTRA;
    // Solicita al usuario que ingrese el sueldo base
    printf("Ingrese el sueldo base: ");
    // Lee el valor ingresado por el usuario y lo guarda en la variable SUELDO_BASE
    scanf("%f", &SUELDO_BASE);
    // Solicita al usuario que ingrese las horas extra trabajadas
    printf("Ingrese las horas extra trabajadas: ");
    // Lee el valor ingresado por el usuario y lo guarda en la variable HORAS_EXTRA
    scanf("%d", &HORAS_EXTRA);
    // Verifica el rango de horas extra y asigna el pago extra correspondiente
    if (HORAS_EXTRA <= 40)
        PAGO_EXTRA = HORAS_EXTRA * 50; // $50 por hora extra
    else
        PAGO_EXTRA = 40 * 50 + (HORAS_EXTRA - 40) * 75; // $75 por hora extra adicional
    // Calcula el sueldo total
    SUELDO_TOTAL = SUELDO_BASE + PAGO_EXTRA;
    // Imprime el sueldo total a pagar
    printf("\nSueldo total a pagar: %7.2f", SUELDO_TOTAL);
}
