#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int s,int e)
{
    int mid = s + (e-s)/2;
    int lsize= mid-s+1;
    int rsize= e-mid;

    vector<int> l(lsize), r(rsize);

    int mainArrayindex= s;

    for(int i=0;i<lsize;i++)
    {
        l[i]=arr[mainArrayindex++];
    }

    for(int j=0;j<rsize;j++)
    {
        r[j]=arr[mainArrayindex++];
    }

    // merge 
    int index1=0, index2=0;
    mainArrayindex =s;
    while(index1<lsize && index2<rsize)
    {
        if(l[index1]<=r[index2])
        {
            arr[mainArrayindex++] = l[index1++];
        }
        else
        {
            arr[mainArrayindex++] = r[index2++];
        }
    }
        while(index1<lsize)
        {
            arr[mainArrayindex++]=l[index1++];
        }
        while(index2<rsize)
        {
            arr[mainArrayindex++]=r[index2++];
        }
}

void mergeSort(int arr[],int s,int e)
{
    if(s>=e)
    return ;

    int mid= s+(e-s)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);

    merge(arr,s,e);
}

int main()
{
    int arr[6]={2,5,3,9,4,5};
    int n=6;
    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}