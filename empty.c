#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter any positive number:%d\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    sum=sum+i;
    }
    printf("The sum is %d\n",sum);
    return 0;
}