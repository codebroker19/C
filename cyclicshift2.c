#include<stdio.h>
#include<string.h>
int main()
{
    char s[70];
    int i,n;
    
    printf("Enter the string");
    scanf("%s",s);

    for(i=0;s[i]!=0;i++)
    {
        s[i]=s[i]-1;
    }
    printf("%s",s);
    return 0;
}