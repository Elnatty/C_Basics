#include <stdio.h>
main()
{
  int RollNumber, m1, m2, m3, total;
  float avg;

  // RollNUmber.
  // printf("enter RollNumber: ");
  // scanf("%d", &RollNumber);
  // values for m1, m2, m3.
  printf("enter m1, m2, m3: ");
  scanf("%d, %d, %d", &m1, &m2, &m3);
  total = m1 + m2 + m3;
  avg = total / 3.0;

  printf("\nTotal is ... %d", total);
  printf("\nAverage is ... %5.2f", avg);
  // conditionals.
  if (avg >= 60)
    printf("\nGrade is: A");
  else if ((avg >= 50) && (avg < 60))
    printf("\nGrade is: B");
  else if ((avg >= 40) && (avg < 50))
    printf("\nGrade is: B");
}