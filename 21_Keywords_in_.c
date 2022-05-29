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

}