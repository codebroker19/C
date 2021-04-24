#include<stdio.h>
const int MAX= 3;
int main()
{
 int var ={10,200,300};
int i,*ptr;
var =ptr;
for(i=0;i<MAX;i++)
{
printf("Address of var[%d]=%x\n",i,ptr);
printf("Enter the value of ptr[%d]=%d\n",i,*ptr);
ptr++;
}
return 0;
}

