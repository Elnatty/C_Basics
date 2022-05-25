#include <stdio.h>

main()
{
    // swapping numbers
    int Temp, A, B;
    printf("Enter mumber 1: ");
    scanf("%d", &A);
    printf("Enter mumber 2: ");
    scanf("%d", &B);
    printf("Your numbers are A is %d and B is %d reaspectively\n", A, B);
    Temp = A;
    A = B;
    B = Temp;
    printf("After swapping, A is %d and B is %d", A, B);
}
