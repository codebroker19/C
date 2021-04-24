#include <stdio.h>
#define BASE_SALARY 1500.00
#define BONUS_RATE 200.00
#define COMMISSION 0.02
int main()
{
    int quantity;
    float gross_salary,price,bonus,commission;
    printf("Input the number of computers sold and price\n");
    scanf("%d %f",&quantity,&price);
    bonus=BONUS_RATE*quantity;
    commission=COMMISSION*quantity*price;
    gross_salary=BASE_SALARY+bonus+commission;
    printf("bonus=%6.2f\n",bonus);
    printf("commission=%6.2f\n",commission);
    printf("gross_salary=%6.2f\n",gross_salary);
    return 0;
} 