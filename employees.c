#include<stdio.h>
#include<string.h>
int main()
{
    int len,left,right;
    char s[30],chk='t';
    printf("Enter any number");
    scanf("%s",s);
    len=strlen(s);
    left=0;
    right=left-1;
    while(left<right&&chk=='t')
   { if(s[left]==s[right])
    ;
    else
    {
        chk='f';
        left++;
        right--;

    }}
    if(chk=='t')
    {
        printf("The string is a palindrome");

    }
    else
    {
     printf("It is not a palindrome");
    }
    return 0;
    

}