#include<stdio.h>
#include<string.h>
int main()
{
char s1[100];
int i;
printf("Enter the word");
scanf("%s",s1);
for(i=0;s1[i]!=0;i++)
{
    if(s1[i]>=65&&s1[i]<=92)
    s1[i]=s1[i]+32;}
    printf("%s",s1);


return 0;
}