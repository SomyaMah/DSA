#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,k;
        cout<<"Enter the value of n and k";
            cin>>n>>k;
                int arr[5]={-1,3,5,2,-3};
                    int sum=0,l=0,r=0;
                        int maxSum=0;
                            while(r<n)
                                {
                                        sum=sum+arr[r];
                                                maxSum=max(maxSum,sum);
                                                        if(sum<0) 
                                                                {
                                                                            sum=0;
                                                                                    }
                                                                                            r++;
                                                                                                }

                                                                                                    cout<<"the maximum sum is "<<maxSum;
                                                                                                        return 0;
                                                                                                        }