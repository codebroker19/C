#include<stdio.h>
int main()
{
    int i,n,reverse,remainder;
    printf("Enter any number");
    scanf("%d",&n);
    while (n!=0)
    {
        remainder=n%10;
        reverse=reverse*10+remainder;
        n=n/10;
    }
    printf("%d",reverse);
    return 0;
    
}