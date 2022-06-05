#include<conio.h>
#include<stdio.h>
/*
NOTES: 
"r" --> reading from a file.
"w" --> writing to a file, contents are overwritten.
"a" --> adds new content to end of the file.
"r+" --> read, write and modify existing content.
"w+" --> contents are overwritten, write new content, modify existing, reading back ne content.
"a+" --> read existing, appending new content, modify existing content.

----->> "a", "w+", "a+" creates a new file if specified file does not exist.

fopen --> open file in specified mode.
fclose --> close a file.
getc --> read character current cursor location.
putc --> writes charater on current cursor location.
fgets --> reads a line from file.
fputs --> writes a string to file.
EOF --> end of file..
*/
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