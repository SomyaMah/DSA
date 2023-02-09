#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


int table[256];
void initialize()
{
    table[0];
    for(int i=0;i<256;i++)
    {
        table[i]=(i&1)+table[i/2];
    }
}

int count(int n)
{
    int res=table[n&0xff];
    n=n>>8;
    res=res+table[n&0xff];
    n=n>>8;
    res=res+table[n&0xff];
    n=n>>8;
    res=res+table[n&0xff];
    return res;
}

int main()
{
    initialize();
    int n;
    cin>>n;
    cout<<count(n)<<endl;
    return 0;
}