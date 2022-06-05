#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
// read and write a file character by character.
int main()
{
  // FILE *fp = fopen("test.txt", "w");  // file pointer variable
  char ch[100];
  // // get input text from users.
  // printf("enter text: ");
  // gets(ch);
  // // save into file with fputs()
  // fputs(ch, fp);
  // fclose(fp);

  // iterating through to print out content of a file line by line.
  FILE *fp = fopen("test.txt", "r");
  while (1)
  {
    if (fgets(ch, 10, fp) ==NULL)
      break;
    else
      printf("%s", ch);
  }
  

}