#include<conio.h>
#include<stdio.h>
// declaring global variable
int global_variable;
int a = 20;  // a global variable.

int main()
{
  int loc_v = 10;
  global_variable = 11;
  printf("\nglobal variable is %d\nlocal variable is %d", global_variable, loc_v);

  // calling the add fuction.
  printf("\nsum = %d\n", add(&loc_v));

  // declaring local variables.
  int a=10, b=15, c;
  printf("a=%d in main()\n", a);
  c = sum(a,b);
  printf("c=%d in main()\n", c);
}

// function for add.
add(int *loc_v){
  return (*loc_v + global_variable);
}

int sum(int a, int b){
  printf("a=%d in sum()\n", a);
  printf("b=%d in sum()\n", b);
  return a + b;
}