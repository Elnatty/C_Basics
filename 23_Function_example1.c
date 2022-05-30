#include <conio.h>
#include <stdio.h>

//function to calculate factorial
int factorial (int x){
  int i, fac, tem;
  tem = x;    // saving the value of x into tem
  for (i=(x-1); i > 0; i--){
    x = x * i;
  }
  printf("The factorial of %d is %d", tem, x);
}

// function to calculate prime numbers.
// is_prime (int x){
//   int i;
//   for (i=2; i<=x-1; i++){
//     if (x % i == 0){
//       printf("\n%d is Not a prime number\n", x);
//       return 0;
//     }
//     printf("\n%d Is a Prime number\n", x);
//     return 0;
//   }
// }

// // square and cube of a number.
// sqr_ (int x){
//   return (x * x);
// }
// cube_ (int x){
//   return (x * x * x);
// }


int main()
{
  // calling the functions.
  int a=4;
  factorial(a);
  // is_prime(a);
  // printf("sqr of %d is %d\ncube of %d is %d", a, sqr_(a), a, cube_(a));
}