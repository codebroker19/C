#include<stdio.h>
int main()
{
   int a=10;
   LOOP:printf("Check statement");
   do
   {
      if(a==15)
     {
         a=a+1;
      goto LOOP;
      }
   
   printf("The value of a is %d\n",a);
   a++;
   }
   while(a<20);
   return 0;

   

}