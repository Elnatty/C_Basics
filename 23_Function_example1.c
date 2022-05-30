#include <conio.h>
#include <stdio.h>

//function to calculate factorial
fact (int x){
  int i, fact=1;
  for (i=1; i<=x; i++){
    fact = fact * i;
  }
  printf("Factorial is %d", fact);
}

// function to calculate prime numbers.
is_prime (int x){
  int i;
  for (i=2; i<=x-1; i++){
    if (x % i == 0){
      printf("\n%d is Not a prime number\n", x);
      return 0;
    }
    printf("\n%d Is a Prime number\n", x);
    return 0;
  }
}

// square and cube of a number.
sqr_ (int x){
  return (x * x);
}
cube_ (int x){
  return (x * x * x);
}
int main()
{
  // calling the functions.
  int a=4;
  // fact(a);
  // is_prime(a);
  // printf("sqr of %d is %d\ncube of %d is %d", a, sqr_(a), a, cube_(a));
}