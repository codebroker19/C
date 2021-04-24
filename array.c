#include<stdio.h>
int main()
{
    int values[5],i;
    printf("Enter the values:\n");
    for(i=0;i<5;i++);
    {
        scanf("%d",&values[i]);
    }
    printf("Display the values:\n");
    for(i=0;i<5;i++);
    {
        printf("The values are %d",values[i]);
    }

    return 0;
}