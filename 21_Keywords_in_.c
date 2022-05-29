#include<conio.h>
#include<stdio.h>
int main()
{
  /* 
    1: 'goto' keyword: if the "if" statement is true, then it executes the invalidator statement
  */

  // int i = 50;
  //   repeat_from_here:		// the label ( destination )
  //   	printf("%d\n",i++);
  //   if( i <= 10 )				// Until the condition is satisified
  //   	goto repeat_from_here;	// the control will jump to the label ( source )
	// return 0;

  // int age=40;
  // if (age <= 0)
  //   {
  //     goto invalid_entry;
  //   }
  // invalid_entry:
  //   printf("invalid entry...");


  /*
    2: "break" and "continue" keywords.
        >> continue: is used to skip an execution if a certain condition is met.
  */
  // int i;
  // while ((i<=10)){
  //   printf("%d\n", i);
  //   if (i == 5){
  //     break;
  //   }
  //   i++;
  // }
  // printf("This loop has ended....\n");

  

  // CASE CONTROL STRUCTURE... (Switch)
  // executes the case block if condition is satisfied, or the default block if otherwise.
  // cant be used with variables only digits... use if-else for variables instead.
  // int i=2;
  // switch (i){
  //   case 1:
  //     printf("The value of i is %d", i);
  //     break;
  //   case 2:
  //     printf("The value of i is %d", i);
  //     break;
    
  //   default:
  //     printf("The value of i is %d", i);
  //     break;
  // }


  // Example 1: Switch use cases:
  // int n;
  // printf("Enter an integer: ");
  // scanf("%1d", &n);   // %1d implies: taking only one integer.. if user enters 2 or more digits, only the 1st digit is stored.
  // switch(n){
  //   case 1: printf("One"); break;
  //   case 2: printf("Two"); break;
  //   case 3: printf("Three"); break;
  //   case 4: printf("Four"); break;
  //   case 5: printf("Five"); break;
  //   // default: printf("invalid entry...");
  // }


  // print numbers in words in reverse order.
  // int n, rem;
  // printf("enter number >> ");
  // scanf("%d", &n);
  // while (n>0){
  //   rem = n % 10;
  //   switch (rem){
  //     case 0: printf("Zero"); break;
  //     case 1: printf("One"); break;
  //     case 2: printf("Two"); break;
  //     case 3: printf("Three"); break;
  //     case 4: printf("Four"); break;
  //     case 5: printf("Five"); break;
  //     case 6: printf("Six"); break;
  //     case 7: printf("Seven"); break;
  //     case 8: printf("Eight"); break;
  //     case 9: printf("Nine"); break;
  //     case 10: printf("Ten"); break;
  //   }
  //   n = n/10;
  // }


  // int a,b;
  // char op;
  // printf("enter operation >> ");
  // scanf("%c", &op);
  
  // printf("enter 2 integers >> ");
  // scanf("%d%d", &a, &b);

  // switch (op){
  //   case '+': printf("Result: %d", a+b); break;
  //   case '-': printf("Result: %d", a-b); break;
  //   case '*': printf("Result: %d", a*b); break;
  //   case '/': printf("Result: %d", a/b); break;
  //   // default: printf("invalid entry..");
  // }


}