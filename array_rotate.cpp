#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int k;
    cout<<"enter value of k"<<endl;
    cin>>k;
    
    while(k--)
    {
        int shift = arr[n-1];
        for(int i=2;i<=n;i++)
        {
            arr[n-i+1]= arr[n-i];
        }
        arr[0]=shift;
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

    return 0;
}