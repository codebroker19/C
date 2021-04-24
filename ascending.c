#include<stdio.h>
int main()
{
    int arr[50],i,j,n,temp;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the elemments");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   for(i=0;i<n;i++) 
   {
   for(j=i+1;j<n;j++)
   {
       if(arr[i]>arr[j])
      { temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
   }}}
   for(i=0;i<n;i++)
   {
       printf(" %d ",arr[i]);
   }
   return 0;
}