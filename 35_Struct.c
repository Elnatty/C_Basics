#include<conio.h>
#include<stdio.h>
#include<string.h>
// Struct: you can save different data type in it.
struct Student{
  char name[50];
  char major[50];
  int age;
  double gpa;
};


int main()
{
  // initialising a struct instance ---> 1
  struct Student student1;    // creating an instance "student1" of Student.
  student1.age = 22;
  student1.gpa = 3.5;
  strcpy(student1.name, "Obi");
  strcpy(student1.major, "Business");

  // calling the struct instance.
  printf("%s\n", student1.name);
  printf("%f\n", student1.gpa);
  

  // initialising a struct instance ---> 2
  struct Student student2;
  student2.age = 24;
  student2.gpa = 3.2;
  strcpy(student2.name, "MD");
  strcpy(student2.major, "Arts");

  printf("%s\n", student2.name);
  printf("%f\n", student2.gpa);
}