#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

// code to count ki given number kitni bar array me occur ho raha h
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //precompute 
    int hash[100000] = {0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]] += 1;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int num;
        cin>>num;

        //fetch
        cout<<hash[num]<<" ";
    }

    return 0;
}