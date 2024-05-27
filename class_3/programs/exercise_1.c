#include <stdio.h>
#include <stdlib.h>
#define MUL 1
#define SALIR 0

int main()
{
  // 0 es falso
  //  todo lo demas es verdadero
  int i = 0;
  int menu = 0;
  int num1 = 0;
  int num2 = 0;
  int result = 0;

  do
  {
    printf("\nMENU: 1-MUL 0-SALIR: ");
    scanf("%d", &menu);
    result = 0;

    if (menu == MUL)
    {
      printf("\nIngresa Num1:");
      scanf("%d", &num1);
      printf("\nIngresa Num2:");
      scanf("%d", &num2);

      if (num2 > num1) {
        for (i = 1; i <= num1; i++)
        {
          result += num2;
          printf("\nValor de result: %d", result);
        }
      } else {
        for (i = 1; i <= num2; i++)
        {
          result += num1;
          printf("\nValor de result: %d", result);
        }
      }

      printf("\n\nResultado: %d", result);
    }

  } while (menu != SALIR);

  printf("\n\n\nFin Programa");
  return 0;
}