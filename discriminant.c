#include <stdio.h>
#include<math.h>
int main()
{
    float a,b,c,discriminant,root1,root2;
    printf("Enter the values of a b and c\n");
    scanf("%f %f %f",&a,&b,&c);
    discriminant=b*b-4*a*c;
    if(discriminant<0)
       printf("The roots are imaginary\n");
    else
    {
       root1=(-b+sqrt(discriminant))/(2*a);
       root2=(-b-sqrt(discriminant))/(2*a);
      printf("root1=%5.2f/n/nroot2=%5.2f\n\n",root1,root2);
    }
    return 0;
    

}
