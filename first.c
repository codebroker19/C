#include<Stdio.h>
int main() 
{

int n,sum=0;
do
{
  
  printf("Enter any positive number\n");
  scanf("%d",&n);
  sum=sum+n;
}
  while(n!=0);
  printf("%d\n",sum);

return 0;
}