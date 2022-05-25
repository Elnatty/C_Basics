#include <stdio.h>
#include <stdlib.h>
int main()
{
  /*
      increment >> i++ or i = i-1
      decrement >> i-- or i = i-1

      1 --> pre-increment (++i):
              int i=10;
              example: printf("%d", ++i); value of i becomes 11 and outputs 11.
      2 --> post-increment (i++):
              eg: printf("%d", i++); value of i becomes 11 but outputs 10.
  */

  // exmaple 1:
  int s=5;
  // value of s is incremented to 6, but printf(); outputs 5
  // printf("%d", s++);

  // example 2:
  int t=15;
  // value of t is incremented to 6, and printf() outputs 6.
  // printf("%d", ++t);

  // example 3:
  int x=10, y=20;
  x = y++; // the original value of y is outputed to x as initial value (20), while y becomess incremented by 1 (21).
  // printf("x is %d, y is %d", x, y);

  // example 2:
  int a=10, b=20;
  a = ++b; // original value of b is stored into a as 21, while b becomes 21.

  
  // Note: Same rules applies to Decrement Too.
}