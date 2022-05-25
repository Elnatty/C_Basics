#include <stdio.h>
#include <conio.h>
main()

// // ----->> getting input from user while checking largest of the two numbers
{
    int a, b;
    printf("Enter numbers: ");
    scanf("%d %d", &a, &b);
    printf("you entered %d and %d\n", a, b);
    // conditionals
    if (a > b)
        printf("%d is greater than %d", a, b);
    else
        printf("%d is greater than %d", b, a);
    return 0;
}


// // ----->> checking if number is positive or negative
// {
//     int n;
//     printf("Enter numbers: ");
//     scanf("%d", &n);
//     // conditionals
//     if (n > 0)
//         printf("%d is a positive integer", n);
//     else if (n < 0)
//         printf("%d is a negative integer", n);
    
//     else
//         printf("given number is zero");
// }


// // ----->> checking for odd or even numbers from user input
// {
//     int n;
//     printf("Enter an integer: ");
//     scanf("%d", &n);
//     // conditionalss
//     if (n % 2 == 0)
//         printf("%d is an even number", n);
//     else
//         printf("%d is an odd number", n);
// }