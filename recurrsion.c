#include<stdio.h>
#include<stdlib.h>
void print()
{
    static int k=1;
    printf("Hello!!!=%d\n",k);
    k++;
    
    if(k<=4)
    print();
    else
    {
        return;
    }
    
}
int main()
{
    print();
    return 0;
}