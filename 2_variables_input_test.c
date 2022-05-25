#include <stdio.h>  /* contains functions we can use, also called dependency files */
#include <stdlib.h>

int main()
{
    char f_name[20], l_name[20];
    int age=10;

    printf("Enter your first name: \n");
    scanf("%s", f_name);

    printf("Enter your last name: \n");
    scanf("%s", l_name);

    printf("Your full name is: %s %s and you are %d years old", f_name, l_name, age);

    return 0;
}