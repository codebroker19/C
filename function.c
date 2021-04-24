#include<stdio.h>
int sum(int l,int m);
int main()
{
  int a=10,b=24,c,d=56,e=47,f,g=35,h=14,i;
  char letter;

  printf("Enter the letter:%c\n");
  scanf("%c",&letter);
  switch(letter)
  {
      case'a':
      c=sum(a,b);
      printf("The sum of the letters is %d\n",c);
      break;
      case'd':
      f=sum(d,e);
      printf("The sum of the letters is %d\n",f);
      break;
     case'g':
      i=sum(g,h);
      printf("The sum of the letters is %d\n",i);
      break;
      default:
      printf("Enter the correct operator");
  }
      return 0;
  
}
   int sum(int l, int m)
  {
   int add;
   add=l+m;
   return add;
}
