#include<conio.h>
#include<stdio.h>
// function to print single item in array using pointers.
void foo(int *param){
  printf("%d", *param);
}

int main()
{
  int array[4]={10,20,30,40};
  foo(&array[2]);   // printing the 3rd index in array.
}