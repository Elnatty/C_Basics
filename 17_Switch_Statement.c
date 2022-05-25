#include <stdio.h>
#include <conio.h>
int main()
{
  // create a program where if the value of x is 1 -> outputs "one", 2 -> outputs "Two", etc.... 
  int x=33;
  switch (x)
    {
      case 1:
        printf("One\n");
        break;
      case 2:
        printf("Two\n");
        break;
      case 3:
        printf("Three");
        break;
      default:
        printf("Not a valid number..");
    }

}