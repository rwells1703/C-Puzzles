#include <stdio.h>

void main()
{
  int n, odd = 0, even = 0;
  printf("Enter a number: ");
  scanf("%d",&n);

  for (int i=0;2*i<n;i++)
  {
    odd = odd + 2*i+1;
    even = even + 2*i;
  }
  printf("Odd: %d\nEven: %d\nAll: %d",odd,even,odd+even);
  scanf("%*s");
}
