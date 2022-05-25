#include <stdio.h>
#include <conio.h>
main()
{
  /*
      We have 3 Loop Structures in C:
        --> while loops.
        --> do while loops.
        --> for loops

        Comparisions..
          While Loops..                                            Do-While Loops..
        >> Conditions are checked at the top.                    >> at the bottom.
        >> Code block never executes if condition is false.      >> Code blocks executes at least ones, if conditionis false 
  */

  // 1: While Loop.
  // int i=1;
  // while (i <= 10)
  // {
  //   printf("\ni is now %d", i);
  //   i+=1;   // or i++
  // }



  // 2: Do-While Loop.
  // while loop in reverse.
  // int i=10;
  // do
  //   {
  //     printf("%d\n", i);
  //     i -= 1;  // or i--
  //   }
  // while (i >= 1);


  // While Loop examples:
  // print 1st n even numbers.
  // int i=2, n;
  // printf("enter n: ");
  // scanf("%d", &n);

  // while (i <= n)
  // {
  //   printf("%d\n", i);
  //   i = i + 2;
  // }


  // reverse a given number.
  int n=4265, rem;
  while (n > 0)
    {
      rem = n % 10;
      printf("%d", rem);
      n = n/10;
    }
  

}