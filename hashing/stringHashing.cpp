#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int hash[100000]={0};
    for(int i=0;i<n;i++)
    {
        int k=s[i]-'a';
        hash[k]+=1;
    }
    int q;
    cin>>q;
    while(q--)
    {
        char c;
        cin>>c;
        int k=c-'a';
        cout<<hash[k]<<" ";
    }
    return 0;
}