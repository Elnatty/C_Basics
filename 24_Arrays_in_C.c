#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
  // single dimentional arrays
  // Declaration of arrays.
  //int marks[7];             // array of marks 0,1,2,3,4,5,6
  int flloat_averages[10];   // array from 0,1,2,3,4,5,6,8,9


  // Initialization of arrays
  //int marks[7] = {10,20,30,40,50,60,70};
  //or
  int marks[] = {10,20,30,40,50,60,70};
  char options[2] = {'T', 'F'};


  //Accessing array elements.
  // printf("%d\n", marks[3]);
  // printf("%c", options[0]);
  // int total = marks[0] + marks[1] + marks[2];

  // int total = marks[0] + marks[1] + marks[2];
  // printf("total is %d", total);

  // or we can use for loop to travers through and add the array values.
  // int i, total=0;
  // for (i=0; i<=7; i++){
  //   total = total + marks[i];
  // }
  // printf("total is %d", total);



  // programs on single arrays.
  // int n, i, a[20];
  // printf("\nenter number of array >> ");
  // scanf("%d", &n);

  // for (i=0; i<n; i++){
  //   printf("enter your number %d element >> ", i+1);
  //   scanf("%d", &a[i]);
  // }
  // for (i=0; i<n; i++){
  //   printf("value %d entered : %d\n", 1+i, a[i]);
  //   //int sum_of_2nd_3rd_values = a[1] + a
  // }
  // printf("sum of 2nd %d and 3rd %d values is %d", a[1], a[2], (a[1] + a[2]));


  // addition of array elements.
  int n, i, a[20], sum;
  printf("\nenter number of array >> ");
  scanf("%d", &n);

  for (i=0; i<n; i++){
    printf("enter your number %d element >> ", i+1);
    scanf("%d", &a[i]);
  }
  for (i=0; i<n; i++){
    sum = sum + a[i];
  }
  printf("sum of entered elements = %d", sum);

}