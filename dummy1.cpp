#include <bits/stdc++.h>
#include<cstring> 
using namespace std;
int main()
{
    int n,i,max,min,j;
    char s[100],b[100];
    cout<<"Enter the word"<<"\n";
    cin>>s;
    for(i=0;s[i]!='\0';i++)
    {}
    i=i-1;   
 for(j=0;i>=0;i--,j++)
    {
        b[j]=s[i];
    }
    b[j]='\0';
    cout<<b;
    for(i=0,j=0;s[i]!='\0'&&b[j]!='\0';i++,j++)
    {
        if(s[i]==b[j])
        cout<<"Palindrome"<<"\n";
        else
        {
            cout<<"Not a palindrome"<<"\n";
        }
        
    }
    
    return 0;
}