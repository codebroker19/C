#include<stdio.h>
int main()
{
    int n,i,j,a[5][5],b[5][5],c[5][5];
    printf("Enter the number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
          printf("Enter the elements of the array");
          scanf("%d",&a[i][j]);
      }
    }
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
          printf("Enter the elements");
          scanf("%d",&b[i][j]);
      }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
     for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
         printf("\n");
         printf("%d",c[i][j]);
         
      }
    }
     return 0;
    
}