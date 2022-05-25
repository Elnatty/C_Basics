#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*performing additions, subtraction, division and multiplication.*/
    // when performing division you must use the float data type and the %f formating.
    int a, b, c, d, e;
    float f, x, y;
    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter number 2: ");
    scanf("%d", &b);
    // division input session
    printf("Enter number 1 for division: ");
    scanf("%f", &x);
    printf("Enter number 2 for division: ");
    scanf("%f", &y);
    // define your operation before printing the action.
    c = a + b;
    d = a - b;
    e = a * b;
    f = x / y;
    printf("The sum of your inputs %d and %d is: %d\n", a, b, c);
    printf("The difference of your inputs %d and %d is: %d\n", a, b, d);
    printf("The multiplication of your inputs %d and %d is: %d\n", a, b, e);
    // %6.2f basically reduces the decimal length.
    printf("The division of your inputs %6.2f and %6.1f is: %6.2f\n", x, y, f);
}