#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20],s3[20];
    int i,j;
    printf("Enter the string 1\n");
    scanf("%s",s1);
    printf("Enter the second string");
    scanf("%s",s2);
   /* Move till the end of str1 */
    i=-1;
    while(s1[++i]);
    /* Copy str2 to str1 */
    j=0;
    while(s1[i++]=s2[j++]);
    printf("%s",s1);
    return 0;
}
