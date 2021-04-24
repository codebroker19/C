#include<stdio.h>
void swap(int x, int y);
int main()
{
    int a=10,b=20;
    printf("Enter the values %d %d",a,b);
    scanf("%d %d",&a,&b);
    swap(a,b);
    printf(" Swap the valuues of a,b %d %d",a,b);
    return 0;
}
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
   printf("After swapping the value %d %d",x,y);
    return;
}
