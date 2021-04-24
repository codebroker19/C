#include<stdio.h>
#include<string.h>
#define FILENAME"Test.text"
int main()
{
    FILE*fp=NULL;
    char ch;
    int linescount=0;
    fp=fopen(FILENAME,"r");
    if(fp==NULL)
    printf("File does not exist");
    return -1;
    while((ch=fgets
    (fp))!=EOF)
    {
        if(ch!='\n')
        linescount++;
    }
    fclose(fp);
    fp=NULL;
    printf("Number of lines=%d",linescount);
    return 0;
}
