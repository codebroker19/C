#include<stdio.h>
#include<math.h>
int main()
{
    int num,a,b,i=0,sum;
    printf("Enter the number");
    scanf("%d",&num);
    while(num>0)
    {
        a=num%10;
        num=num/10;
        i=a+(i*10);
    }
    while(i>0)
    {
        b=i%10;
        i=i/10;
        printf("%d\n",b);
    }
    return 0;
}
