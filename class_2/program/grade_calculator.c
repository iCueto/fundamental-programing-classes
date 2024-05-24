#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main()
{
  float PRO;

  while (TRUE)
  {

    printf("Enter the average: ");
    scanf("%f", &PRO);

    if ((PRO >= 0) && (PRO <= 4))
    {
      if (PRO >= 3.2)
      {
        printf("Approved\n");
      }
      else
      {
        printf("Disapproved\n");
      }
    }
    else
    {
      printf("Invalid average\n\n");
    }
  }

  return 0;
}