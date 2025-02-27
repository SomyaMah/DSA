#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

class Human{
    public:
    int age;
    string name;
    int weight;
};

class male:public Human{
    public:
    string country;
    void sleep()
    {
        cout<<"this is male class"<<endl;
    }
};

int main()
{
    male raj;
    raj.age =45;
    raj.sleep();
    return 0;
}