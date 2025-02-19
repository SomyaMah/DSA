#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

bool numFind(int arr[],int s, int e,int target)
{
    int mid=s+(e-s)/2;
    if(s>e)return false;
    if(arr[mid]==target)
    return true;
    else if(arr[mid]<target)
    return numFind(arr,mid+1,e,target);
    else
    return numFind(arr,s,mid-1,target);

}

int main()
{
    int arr[5]={4,6,7,8,9};
    int n=5;
    int target = 3;
    int s=0,e=n;
    bool search = numFind(arr,s,e,target);
    cout<<"the result of binary search using recurdion is "<<search;
    return 0;
}