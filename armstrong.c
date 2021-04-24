#include<stdio.h>
int main()
{
    int a,n,remainder,cube=0,sum=0;
    printf("Enter any number\n");
    scanf("%d",&n);
    a=n;
    while(a!=0)
    {
        remainder=a%10;
        cube+=remainder*remainder*remainder;
        a=a/10;
        
    }
    if(cube==n)
    {
      printf("It is armstrong number");
    }
    else
    {
      printf("It is not armstrong");  
    }
    return 0;
}