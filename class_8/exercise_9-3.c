#include <stdio.h>
#include <stdlib.h>

int main() {
  char cad[50];
  int res;
  FILE *ar;

  system("pwd");

  if ((ar = fopen("arc.txt", "w")) != NULL) {
    printf("\n¿Desea ingresar una cadena de caracteres? (1 = si, 0 = no): ");
    scanf("%d", &res);
    while (res) {
      fflush(stdin);
      printf("\nIngrese una cadena de caracteres: ");
      gets(cad);
      fputs(cad, ar);

      printf("\n¿Desea ingresar otra cadena de caracteres? (1 = si, 0 = no): ");
      scanf("%d", &res);
      if (res) {
        fputc('\n', ar);
      }
    }
    fclose(ar);
  } else {
    printf("Error al abrir el archivo");
  }
}