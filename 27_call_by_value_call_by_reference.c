#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

// an add function.
// int add(int a, int b){
//     int c = a + b;
//     return c;
//   }

// int add_2(int *a, int *b){
//   int c = *a + *b;
//   return c;
// }

void add_3(int *a, int *b, int *c){
  *c = *a + *b;
}

int main()
{
  // call by value. example 1..
  // int x=10, y=20;
  // int z = add(x, y);
  // printf("%d", z);

  // int x=100, y=200, z;
  // z = add_2(&x, &y);
  // printf("%d", z);

  int x=10, y=20, c;
  add_3(&x, &y, &c);


}