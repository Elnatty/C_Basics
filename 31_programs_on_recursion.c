#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
// factorial function using recursion.
fact(int n){
  int f;
  if (n == 1){
    return 1;
  }
  else{
    f = n * fact(n-1);
  }
  return f;
}

int main(){
  int n;
  printf("enter number >> ");
  scanf("%d", &n);
  printf("\nfactorial is %d", fact(n));
}