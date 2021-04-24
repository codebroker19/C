#include<stdio.h>
#define PURCHASE_PRICE 15000
#define YEARS_OF_SERVICE 20
#define DEPRECIATION 8000

int main()
{
    int price;
    float salvage_value,years_of_service;
    printf("Enter the price of the product,years_of_service\n");
    scanf("%d,%d", &price,&years_of_service);
    salvage_value=(PURCHASE_PRICE)-(DEPRECIATION*YEARS_OF_SERVICE);

    printf("The salvage_value= %5.2f",salvage_value);
    return 0;

}