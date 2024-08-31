#include<stdio.h>
int main()
{
  int  array[10],i;
  array[0]=1;
  array[1]=2;
  array[2]=3;
  for(i=3;i<10;i++)
    {
      printf("enter value for array[%d]:",i);
      scanf("%d",&array[i]);
  }
  for(i=3;i<10;i++)
    {
    printf("array[%d]=%d\n",i,array[i]);
  }
  return 0;

}
