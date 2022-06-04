#include<conio.h>
#include<stdio.h>
int main()
{
  // initialising a new file
  //"w" --> write, "a" --> append, "r" --> read
  // FILE *new_file = fopen("employees.txt", "a");
  // // writing content into file
  // fprintf(new_file, "\nMary, cus care");
  // fclose(new_file);   // always close file


  // reading contents of a file.
  char line[255];
  FILE *new_file = fopen("employees.txt", "r");
  // viewing contents
  fgets(line, 255, new_file);
  printf("%s", line);

}