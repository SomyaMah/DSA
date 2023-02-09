#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

bool palindrome(int n)
{
    int k=0,a=n;
    while(n>0)
    {
        //int k=n%10;
        k=k*10+n%10;
        n=n/10;
    }
    if(k==a)
    return true;
    else
    return 
    false;

}
 
 int main()
 {
     int n;
     cout<<"Enter a number "<<endl;
     cin>>n;
     cout<<palindrome(n)<<endl;
     return 0;
 }