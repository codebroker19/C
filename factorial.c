#include<stdio.h>
int main()
{
  int num,fact=1;
  printf("Enter any positive number :\n");
  scanf("%d",&num);
  while(num>0)
  {
    fact=fact*num;
    num--;
  }
  printf("%d",fact);
  return 0;
}