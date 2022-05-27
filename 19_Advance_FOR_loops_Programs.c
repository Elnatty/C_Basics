#include <stdio.h>
#include <conio.h>
int main()
{
  int i, fact=1, n=10;
  for (i=1; i<=n; i++)
    {
      fact = fact * i;
    }
  printf("factorial of %d is : %d", n, fact);

}