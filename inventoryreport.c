#include<stdio.h>
#define ITEMS 4
int main()
{
    int i,quantity[5];
    float rate[5],value,total_value;
    char code[5][5];
    i=1;
    while(i<=ITEMS)
    {
        printf("Enter code,quantity,rate\n");
        scanf("%s %d %f",&code[i],&quantity[i],&rate[i]);
        i++;
    }
    printf("\n\n");
    printf("    Inventory Report    \n");
    printf("------------------\n");
    printf("Code Quantity Rate Value\n");
    printf("------------\n");
    total_value=0;
    i=1;
    while(i<=ITEMS)
    {
        value=quantity[i]*rate[i];
        printf("%5s %10d %10.2f %e\n",code[i],quantity[i],rate[i],value);
        total_value=total_value+value;
        i++;
    }
    printf("----------------\n");
    printf("             Total value=%e\n",total_value);
    printf("-------------\n");
    return 0;

}