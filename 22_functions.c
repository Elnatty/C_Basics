#include <stdio.h>
#include <conio.h>

// declare functions outside the entire code block...
// function example 1:
// addition function.
int add_1 (int x, int y){
  return (x + y);
}
// substraction function.
int sub_1 (int x, int y){
    return (x - y);
  }
// multiplication function.
int mult_1 (int x, int y){
    return (x * y);
  }
// division function.
int div_1 (int x, int y){
    return (x / y);
  }

void main()
{
  // calling add_1 function
  int a=20, b=5;

  // calling functions.
  printf("Addition of %d and %d is >> %d\n", a, b, add_1(a, b));
  printf("Substraction of %d and %d is >> %d\n", a, b, sub_1(a, b));
  printf("Multiplication of %d and %d is >> %d\n", a, b, mult_1(a, b));
  printf("Division of %d and %d is >> %d\n", a, b, div_1(a, b));

}