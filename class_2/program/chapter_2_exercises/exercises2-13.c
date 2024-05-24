#include <stdio.h>
#include <math.h>

/* Área del triángulo.
El programa, al recibir como datos las coordenadas de los vértices de un triángulo,
calcula su área.
X1, Y1, X2, Y2, X3, Y3: variables de tipo real.
AREA: variable de tipo real. */

int main(void)
{
    // Declara las variables para las coordenadas de los vértices y el área
    float X1, Y1, X2, Y2, X3, Y3, AREA;
    // Solicita al usuario que ingrese las coordenadas de los vértices
    printf("Ingrese las coordenadas de los vértices del triángulo (X1 Y1 X2 Y2 X3 Y3): ");
    // Lee los valores ingresados por el usuario y los guarda en las variables correspondientes
    scanf("%f %f %f %f %f %f", &X1, &Y1, &X2, &Y2, &X3, &Y3);
    // Calcula el área del triángulo usando la fórmula
    AREA = 0.5 * fabs(X1 * (Y2 - Y3) + X2 * (Y3 - Y1) + X3 * (Y1 - Y2));
    // Imprime el área del triángulo
    printf("\nEl área del triángulo es: %7.2f", AREA);
}
