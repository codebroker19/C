#include<stdio.h>
int main()
{
    int arr[10],n,i,place,number;
    printf("Enter the number of values in the array:\n");
    scanf("%d",&n);
    printf("Enter the values of the array:\n");
     for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to be added \n");
    scanf("%d",&number);
    printf("Enter the place to be addded \n");
    scanf("%d",&place);
    for(i=n-1;i>=place;i--)
    {
        arr[i]=arr[i-1];

    }
    arr[place -1]=number;
    n++;
    printf("Enter the array after that %d\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
return 0;
}