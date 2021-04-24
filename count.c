#include <stdio.h>
int main()
{
   int number;
   printf("Enter any number you want\n");
   scanf("%d",&number);
   if (number<100)
   printf("The number is very small\n");
   else 
   printf("The number is big\n");
   return 0;
}