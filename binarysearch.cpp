#include<iostream>
using namespace std;

int binarysearch(int a[],int lb,int ub,int key)
{
    if(lb>ub)
    {
        return -1;
    }
    int m=(lb+ub)/2;
    if(a[m]==key)
    {
        return m;
    }
    else if(key>a[m])
    {
        return binarysearch(a,m+1,ub,key);
    }
    else
    {
        return binarysearch(a,lb,m-1,key);
    }
}
int main()
{
int a[9]={9,18,27,36,45,54,63,72,81};
int k=binarysearch(a,0,8,63);
if(k==-1)
{
    cout<<"Target not found"<<"\n";
}
else
{
    cout<<"Target found at"<<" "<<k<<"\n";
}
return 0;
}