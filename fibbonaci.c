#include<stdio.h>
int main()
{
    int t1=0;
    int t2=1;
    int next=0;
    int n;
    printf("Enter any positive integer:\n");
    scanf("%d",&n);
    printf("The series %d %d",t1,t2);
    next=t1+t2;
    while (next<=n)
    {
        printf("%d",next);
        next=t1+t2;
        t1=t2;
        next=t2;

    }
    return 0;
    

}