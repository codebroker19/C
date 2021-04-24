#include<stdio.h>
#include<string.h>
struct store
{
    char vegetable[50];
    int weight;
    int cost;
    int totalprice;
};
int main()
{
  int i,j,n,totalprice=0;
  struct store s[60];
  printf("Enter the number of vegetables");
  scanf("%d",&n);
  printf("Enter the name of the vegetable\n");
  printf("Enter the weight of the vegetables\n");
  printf("Enter the cost of the vegetables\n");
  
   
   
  for(i=0;i<n;i++)
  {
   scanf("%s",&s[i].vegetable);
   scanf("%d",&s[i].weight);
   scanf("%d",&s[i].cost);
   
  }
  s[i].totalprice=(s[i].weight)*(s[i].cost);
   for(i=0;i<n;i++)
   {
     printf("The vegetable name =%s\n",s[i].vegetable);
     printf("The total weight is %d\n",s[i].weight);
     printf("The total cost is %d\n",s[i].cost);
     printf("The total price is %d\n",s[i].totalprice);
   }
   return 0;
}