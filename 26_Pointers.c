#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
  // pointers in C: are variables which stores address location of another variable. and it can be used to derive values stored at that address location.
  int age=23;
  *(&age);    // meaning value at address of age.
  &age;        // gives address location of age.

  // using pointers
  int a = 10;
  int *val = &a;
  printf("address of a : %p\n"); // address of a
  printf("pointer of a : %d\n", *(&a)); //or
  printf("pointer of a : %d\n", *&a); //or
  printf("pointer of a : %d\n", *val);

}