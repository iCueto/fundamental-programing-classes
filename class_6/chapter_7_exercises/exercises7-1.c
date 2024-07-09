#include <stdio.h> // Incluimos la librería stdio.h para poder usar printf, scanf, getchar, putchar y fflush.
void main(void) {
    char p1, p2, p3 = '$'; // Aquí declaramos tres variables tipo caracter. A p3 le asignamos el símbolo $.
    printf("\nIngrese un caracter: "); // Pedimos al usuario que ingrese un caracter.
    p1 = getchar(); // Guardamos el caracter ingresado en p1 usando getchar.
    putchar(p1); // Mostramos el caracter ingresado con putchar.
    printf("\n"); // Imprimimos una nueva línea para que quede bonito.
    fflush(stdin); // Limpiamos el buffer de entrada, ¡es como hacer la cama!
    printf("\nEl caracter p3 es: "); // Anunciamos lo que vamos a mostrar.
    putchar(p3); // Mostramos el caracter almacenado en p3.
    printf("\n"); // Y terminamos con otra línea nueva para que quede ordenado.
}
