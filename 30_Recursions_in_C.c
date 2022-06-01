#include<conio.h>
#include<stdio.h>
// Recursion is used when we want to call a user-defined function repeatedly, ie, so we create another function inside a function to achieve this.

// user-defined function.
void recursive_function(){
  // another function to carry out Recursion.
  recursive_function();
}

int main()
{
  // then we call the second function.
  recursive_function();
}