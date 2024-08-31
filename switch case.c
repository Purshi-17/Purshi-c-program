#include<stdio.h>
int main()
{
  int a,b;
  char oper;
  printf("enter a number 1:");
  scanf("%d",&a);
  printf("enter a number 2:");
  scanf("%d",&b);
  printf(("enter the operation(+,-,*,/):"));
  scanf(" %c",&oper);
  switch(oper)
    {
     case'+':
        printf("the sum is %d\n",a+b);
        break;
     case'-':
        printf("the subtraction is %d\n",a-b);
        break;
     case'*':
        printf("the multiplication is %d\n",a*b);
        break;
    case'/':
       if(b !=0)
      {
          printf("the division is %d\n",a/b);
          break;
      }else
      {
          printf("division by zero is not possible\n");
      }
          break;
  default:
        printf("Invalid operation\n");
    }
}
