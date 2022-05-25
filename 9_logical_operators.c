#include <stdio.h>
#include <conio.h>
main()
/* 
    ----->> logical operators includes:
    && --> AND operator
    || --> OR operator
    ! --> NOT operator
*/
{
    int a, b, c;
    printf("enter numbers: ");
    scanf("%d, %d, %d", &a, &b, &c);
    // checking if a is greater than b and c.
    if ((a >= b) && (a >= c))
        {
            // checking if b is greater than c.
            if (b >= c)
                {   
                    printf("\nDecending Order: %d %d %d", a, b, c);
                    printf("\nAscending Order: %d %d %d", c, b, a);
                }
            else
                {
                    printf("\nDecending Order: %d %d %d", a, c, b);
                    printf("\nAscending Order: %d %d %d", b, c, a);
                }
        }
    // checking if b is greater than a and c.
    else if ((b >= a) && (b >= c))
        {
            // checking if a is greater than c.
            if (a >= c)
                {
                    printf("\nDecending Order: %d %d %d", b, a, c);
                    printf("\nAscending Order: %d %d %d", c, a, b);
                }
            else
                {
                    printf("\nDecending Order: %d %d %d", b, c, a);
                    printf("\nAscending Order: %d %d %d", a, c, b);
                }
        }
    // checking if c is greater than a and b.
    else if ((c >= b) && (c >= b))
        {
            // checking if a is greater than b
            if (a >= b)
                {
                    printf("\nDecending Order: %d %d %d", c, a, b);
                    printf("\nAscending Order: %d %d %d", b, a, c);
                }
            else
                {
                    printf("\nDecending Order: %d %d %d", c, b, a);
                    printf("\nAscending Order: %d %d %d", a, b, c);
                }
        }
}