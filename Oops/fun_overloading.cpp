#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

class poly{
    public:
    void fun(int x)
    {
        cout<<"This is one parameter function with int type "<<x<<endl;
    }

    void fun(char x)
    {
        cout<<"this is one parameter function with char type "<<x<<endl;
    }
    void fun(int x,int y)
    {
        cout<<"this is 2 parameter function "<<x<<" "<<y<<endl;
    }
};



int main()
{
    poly run;
    run.fun(3);
    run.fun('a');
    run.fun(4,7);


    return 0;
}