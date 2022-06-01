#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
  char s1[100]="DPhenixKing";
  char s2[100]="UniAbuja.";

  // printf("In Lowercase: %s\n", strlwr(s1));
  // printf("In Uppercase: %s\n", strupr(s1));
  // printf("In Reverse: %s\n", strrev(s1));
  // printf("I finished from %s\n", s2);
  
  // looping through strings (for loop)
  // for (int i=0; s1[i]!='\0'; i++){
  //   printf("%c\n", s1[i]);
  // }

  // (while loop)
  // int x = 0;
  // printf("in while loop...\n");
  // while (s2[x] != '\0'){
  //   printf("%c\n", s2[x]);
  //   x++;
  // }

  // (do-while loop)
  int c=0;
  if (s2[c] != '\0'){
    do {
      printf("%c\n", s2[c]);
      c++;
    }
    while (s2[c] != '\0');
  }

}