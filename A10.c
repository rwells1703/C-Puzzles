#include <stdio.h>

void main()
{
    for (int i = 0; i <= 24; i++)
    {
      if (i != 0 && i % 5 == 0) {
        printf("\n");
      }
      
      if (i < 10) {
        printf(" ");
      }

      printf("%d ", i);
    }
}