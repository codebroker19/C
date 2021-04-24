#include<stdio.h>
#include<stdlib.h>
void dectobin(int n){
    if(n==0){
        printf("0\n");
        return;
    }
    else if(n==1)
    {
        printf("1");
        return;
    }
    else
    {
        dectobin(n/2);
        printf("%d",n%2);
    }
    return;
}
int main(){
    dectobin(15);
    return 0;
}