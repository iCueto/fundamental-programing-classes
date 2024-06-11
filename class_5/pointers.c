#include <stdio.h>

int main() {
  int a = 5;
  int *pointer;

  pointer = &a;

  printf("Este es el valor de variable a %d\n", a);
  printf("Esta es la posicion de memoria de la variable a %p", pointer);

  *pointer = a + 5;

  printf("Este es el; nuevo valor de a: %d\n", a);
  printf("Este es el lugar en memoria de a: %p\n", pointer);

  return 1;
}