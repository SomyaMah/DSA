#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int sumNum(int arr[],int n)
{
    int sum=0;
    if(n==0)
    return 0;
    else{
        return arr[n-1]+ sumNum(arr,n-1);
    }
}

bool numFind(int arr[],int n, int target,int index=0)
{
    if(index==n)
    return false;

    if(arr[index]==target)
    {
         return true;
    }
    return numFind(arr,n,target,index+1);
       
}

int main()
{
    int arr[6] = {2,3,4,5,6,6};
    int n = 6;
    // int ans= sumNum(arr,n);
    // cout<<ans;

    int target = 5;
    bool find = numFind(arr,n,target);
    cout<<find;

    return 0;
}