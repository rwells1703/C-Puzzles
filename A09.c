#include <stdio.h>

void main()
{
  int n = 0;
  int odd = 0;
  int even = 0;
  
  printf("Enter a number: ");
  scanf("%d", &n);

  for (int i = 0; i <= n; i++)
  {
    if (i%3 != 0 && i%4 != 0) {
      if (i%2 == 0) {
        even += i;
      } else {
        odd += i;
      }
    }
  }
  printf("Odd: %d\nEven: %d\nAll: %d", odd, even, odd + even);
}