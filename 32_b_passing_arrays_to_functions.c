#include<conio.h>
#include<stdio.h>
void foo(int param[]){
  for (int i=0; i<4; i++){
    printf("\n%d", param[i]++);
  }
}

int main(){
  int array[4]={10,20,30,40};
  printf("values before function call..");
  foo(array);
  printf("\n");
  printf("values after function call..");
  for (int i=0; i<4; i++){
    printf("\n%d ", array[i]);
  }
}