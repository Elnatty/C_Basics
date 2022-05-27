#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
  int i, n=20;
  for (i=2; i<=n/2; i++)
    {
      if (n % i == 0)
        {
          printf("%d is not a prime number.", n);
          exit(0);
        }
    }
  printf("%d is a prime number.", n);

}