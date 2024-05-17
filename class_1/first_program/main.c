#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x = 0.0;
    double b = 0.0;

    double tmp = 0.0;

    int cnt = 0;

    printf("Program Calculus Square Root");
    printf("Enter a number: ");
    scanf("%lf", &x);
    b = x;

    while(!(b==(x/b))) {

        b = 0.5*((x/b)+b);
        printf("Root %lf", b);

        cnt++;

        if (cnt == 100) {
            break;
        }
    }

    printf("Root %lf = %lf", x, b);

    return 0;
}
