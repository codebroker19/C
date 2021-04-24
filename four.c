#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter any two numbers\n");
    scanf("%d %d",&a,&b);
     if (a<=b)
    {
     if(a<b)
    {
        printf("b is greater than a\n");
     }
     else
     {
         printf("both the numbers are equal\n");
     }
    }
    else
    {
        printf("a greater than b\n");
    }
    return 0;
}