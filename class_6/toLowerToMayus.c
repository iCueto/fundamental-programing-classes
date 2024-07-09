#include <stdio.h>

int main() {
  printf("\nIngrese un caracter: ");
  char p1 = getchar();

  if (p1 >= 'a' && p1 <= 'z') {
    p1 = p1 - 32;
  } else if (p1 >= 'A' && p1 <= 'Z') {
    p1 = p1 + 32;
  }

  printf("\nEl caracter es: ");
  putchar(p1);
  
}