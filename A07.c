#include <stdio.h>

void main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);
  for (int i=0;2*i+1<n;i++)
  {
    printf("%d\n",2*i+1);
  }
  scanf("%*s");
}
