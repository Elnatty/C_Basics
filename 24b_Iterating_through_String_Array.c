#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
  system("cls");

  char *x[] = {"one", "two", "three", "four", "five"};

  // for (int i=0; x[i]!='\n'; i++){
  //   printf("%s\n", x[i]);
  // }
  
  int i=0;
  while (x[i] != '\0'){
    printf("line %d --> %s\n", i+1, x[i]);
    i++;
  }



}