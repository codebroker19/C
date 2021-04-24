#include<stdio.h>
int main()
{
    int marks[10],sum=0,average,n,i;
    printf("Enter the number of marks %d\n",n);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the value of marks%d\n",i+1);
        scanf("%d",&marks[i]);
        sum=sum+marks[i];

    }
    average=sum/n;
    printf("The average is %d\n",average);
    return 0;
}