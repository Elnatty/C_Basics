#include <stdio.h>
#include <conio.h>
int main()
{ 
  // eg 1.
  // Pattern Programming.
  // int i, j, n=6;
  // for (i=1; i <= n; i++)
  //   {
  //     for (j=1; j <= n; j++)
  //       {
  //         printf("*");
  //       }
  //     printf("\n");
  //   }

  // eg 2.
  // int i, j, n=6;

  // for (i=1; i<=n; i++)
  //   {
  //     for (j=1; j<=i; j++)
  //       {
  //         printf("*");
  //       }
  //     printf("\n");
  //   }

  // eg 3.
  // int i, j, n=6;
  // for (i=n; i>=1; i--)
  //   {
  //     for (j=1; j<=i; j++)
  //       {
  //         printf("*");
  //       }
  //     printf("\n");
  //   }

  // eg 4.
  // int i, j, n=6, k;
  // for (i=1; i<=n; i++)
  //   {
  //     for (k=1; k<=i; k++)
  //       {
  //         printf(" ");
  //       }
  //     for (j=i; j<=n; j++)
  //       {
  //         printf("#");
  //       }
  //     printf("\n");
  //   }

  // eg 5.
  int i, j, n=5;
  for (i=1; i<=n; i++)
    {
    for (j=1; j<=i; j++)
      {
        printf("%d", i);
      }
    printf("\n");
    }

}