#include <stdio.h>

/* Declaración de cadenas de caracteres y asignación de valores */

void main(void) {
    // Declaramos un apuntador a char
    char *cad0;
    // Asignamos una cadena al apuntador
    cad0 = "Argentina";  
    puts(cad0);  // Mostramos la cadena

    // Asignamos una nueva cadena al apuntador
    cad0 = "Brasil";
    puts(cad0);  // Mostramos la nueva cadena
}
