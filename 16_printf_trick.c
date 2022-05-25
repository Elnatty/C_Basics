#include <stdio.h>
#include <conio.h>
int main()
{
  /* Trick 1:
        using printf(); without the ;
        use the preprocessor '#define', then specify x;
  */ 
  #define x printf("This is trick 1..\n")
  x;

  /*
      Trick 2:
      using printf(); without the ;
      use the if statement, since the if block takes in a value, and the printf() prints/gives out a value used by if(). 
  */
  if (printf("This is trick 2..\n"))
    {

    }

}