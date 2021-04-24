#include <stdio.h>
int main()
{
    int a,b,c;
    float x,y,z;
    a=9;
    b=12;
    c=3;
    x=a-b/c+(3*2-1);
    y=a-b/(c+3)*(2-1);
    z=a-(b/(c+3)*2)-1;
    printf("x=%f\n",x);
    printf("y=%f\n",y);
    printf("z=%f\n",z);
    return 0;



}