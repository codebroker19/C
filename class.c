#include<stdio.h>
int main()
{
    int i ,count;
    float height,weight;
   count =0;
    printf("Enter the height of 5 students %d\n");
  
    for(i=1;i<=5;i++)
    {
        
        scanf("%f %f",&height,&weight);
        if(weight>50&&height>170)
        count=count+1;
    }
    printf("Number of boys height>170 are %d\n",count);
    printf("Number og boys weight>50 are %d\n");
    return 0;

}