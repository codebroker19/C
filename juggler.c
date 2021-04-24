#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int juggler(int n){
    if(n==1)
    {
        printf("%4d",n);
        exit(1);
    }
    printf("%4d",n);
    if(n%2!=0)
    n=(int)pow(n,1.5);
    else
    {
        n=(int)pow(n,0.5);
    }
    juggler(n);
}
int main()
{
    juggler(3);
    return 0;
}