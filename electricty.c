#include<stdio.h>
int main()
{
    int custnum,units;
    float charges;
    printf("Enter customer number and unitsconsumed\n ");
    scanf("%d %d",&custnum,&units);
    if(units<=200)
    charges=0.5*units;
    else if(units<400)
    charges=100+0.65*(units-200);
    else if(units<600)
    charges=230+0.83*(units-400);
    else
    charges=390+(units-600);
    printf("\n\nCustomer number=%d,charges=%.2f",custnum,charges);
    return 0;
}