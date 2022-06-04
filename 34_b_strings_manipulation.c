#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
// length of string using user defined function A


{
  char word[50];
  //printf("length of word is : %d", string(word));
  gets(word);   // user input
  printf("len is : %d", string_(word));

  // length of string using user defined function A
  // int i, len=0;
  // char s[50];
  // gets(s);  // to get multiple inputs from user, unlike scanf()
  // for (i=0; s[i] != '\0'; i++){
  //   len++;
  // }
  // printf("%d", len);

}
// declaring my own function
int string_ (char *s){
  int i, len=0;
  for (i=0; s[i] != '\0'; i++){
    len++;
  }
  return len;
}