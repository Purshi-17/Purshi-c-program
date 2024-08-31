#include <stdio.h>
void main()
{
  int i=1, n,a,fact=1;
  printf("Enter an number: ");
  scanf("%d", &n);
  while(i<=n)
    {
      fact=fact*i;
      i++;
  }
  printf("%d",fact);
a=fact;
printf("%d",a);
printf("remainder is %d",a%10);
 }
