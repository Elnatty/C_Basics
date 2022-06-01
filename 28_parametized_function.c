#include<conio.h>
#include<stdio.h>

// function to swap numbers using pointers.
swap(int *x, int *y){
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main()
{
  int a=40,b=90;
  printf("before swap: a=%d, b=%d\n", a,b);

  swap(&a, &b);
  printf("after swap: a=%d, b=%d\n", a, b);

}