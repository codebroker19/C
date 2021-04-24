#include<stdio.h>
#include<string.h>
struct details
{
    char name[60];
    int hiredate;
    float salary;
};
int main()
{   int i,j,n;
    struct details s[100];
   printf("Enter the number of employs");
   scanf("%d",&n);
   printf("Enter the name of the employe\n");
   printf("Enter the salary of the employe\n");
   printf("Enter the hiredate of the employ\n");
   
    for(i=0;i<n;i++)
    {
      scanf("%s",s[i].name);
      scanf("%f",&s[i].salary);
      scanf("%d",&s[i].hiredate);
    }
    for(i=0;i<n;i++)
    {
        printf("Name is %s\n",s[i].name);
        printf("The salary is %.2f\n",s[i].salary);
        printf("Hire date is %d\n",s[i].hiredate);
    }
    return 0;
}
    









