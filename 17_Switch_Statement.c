#include <stdio.h>
#include <conio.h>
 int main()
{
//   // create a program where if the value of x is 1 -> outputs "one", 2 -> outputs "Two", etc.... 
//   int x=33;
//   switch (x)
//     {
//       case 1:
//         printf("One\n");
//         break;
//       case 2:
//         printf("Two\n");
//         break;
//       case 3:
//         printf("Three");
//         break;
//       default:
//         printf("Not a valid number..");
//     }



  char grade='F';
  switch (grade){
    case 'A':
      printf("You did Great.");
      break;
    case 'B':
      printf("You did Alright.");
      break;
    case 'C':
      printf("You did poorly.");
      break;
    case 'D':
      printf("You did very poorly.");
      break;
    case 'F':
      printf("You did very badly.");
      break;
    default :
      printf("invalid grade..");
  }
}