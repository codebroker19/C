#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int l1,i,j;
    printf("Enter any string");
    scanf("%s",s);
    l1=strlen(s);
    if(l1<10)
    {
        for(i=l1;i<10;i++)
        {
            s[i]='*';
        }
        for(i=0;i<10;i++)
        {
            printf("%c",s[i]);
        }
    }
    else if(l1>10)
    printf("%s",s);
    
    return 0;

}