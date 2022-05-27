#include <conio.h>
#include <stdio.h>
int main()
{
  // special characters ie, 65-90 represents A-Z
  int x, y=90;
  for (x=65; x<=y; x++)
    {
      printf("%d = %c\n", x, x);
    }
}