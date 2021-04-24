#include<stdio.h>
#include<stdlib.h>
int binarysearch(int arr[],int lb,int ub,int target)
{
    if(lb>ub){
        return -1;
    }
    int m=(lb+ub)/2;
    if(arr[m]==target){
    return m;
    }
    else if(target>arr[m])
    {
        return binarysearch(arr,m+1,ub,target);
    }
    else
    {
        return binarysearch(arr,lb,m-1,target);
    }
    
}
int main()
{
    int arr[9]={0,10,20,30,40,50,60,70,80};
    int k=binarysearch(arr,0,8,34);
    if(k==-1)
    printf("Target does not exist");
    else
    {
        printf("Target found at %d",k);
    }
    return 0;
    
}