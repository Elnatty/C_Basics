#include<conio.h>
#include<stdio.h>
#include<string.h>
int main()
{
  // copying a string content from another string
  int i;
  char s1[20], s2[20];
  printf("enter string 1 : ");
  scanf("%s", s1);
  for (i=0; s1[i]!='\0'; i++){
    s2[i] = s1[i];
  }
  printf("copied string is : %s", s2);

  

}