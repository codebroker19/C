#include<stdio.h>
 main()
{FILE*fp;
    fp=fopen("C:\\Users\\deban\\Desktop\\Academic\\coding\\empty.c","w");
    fprintf(fp,"This is a testing statement for fprintf\n");
    fputs("This is a testing for fputs\n",fp);
    fclose(fp);
}