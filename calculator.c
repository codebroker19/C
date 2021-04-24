#include<stdio.h>

int main()
{
char operator;
int a,b,c;
printf("Enter any operator (+,-,*,/)\n");
scanf("%c",&operator);
printf("Enter any two positive numbers\n");
scanf("%d %d",&a,&b);
switch(operator)
{
    case'+':
   c=a+b;
    printf("%d+%d=%d\n",a,b,c);
   break;
    case'-':
    c=a-b;
    printf("%d-%d=%d\n",a,b,c);
    break;
    case'*':
    c=a*b;
    printf("%d*%d=%d\n",a,b,c);
    break;
    case'/':
    c=a/b;
    printf("%d/%d=%d\n",a,b,c);
   break;
    default:
    printf("Wrong operaator\n");
    break;
}
   return 0;
   }