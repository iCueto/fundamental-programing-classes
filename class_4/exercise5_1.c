#include <stdio.h>
#include <stdlib.h>

int main() {
  int I, NUM, CUE, POS = 0;
  int ARRE[10];

  for (I = 0; I < 10; I++) {
    printf("Enter a number: ", I + 1);
    scanf("%d", &ARRE[I]);
  }

  printf("Enter a number to search into the array: ");
  scanf("%d", &NUM);

  for (I = 0; I < 10; I++) {
    if (ARRE[I] == NUM) {
      CUE++;
      printf("The number %d was found in the position %d\n", NUM, I);
    }
  }
  printf("The number %d was found %d times\n", NUM, CUE);

  return 0;
}