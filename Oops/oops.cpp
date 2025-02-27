#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

class Hero{
    //public:
    int health;
    public:

    Hero()
    {
        cout<<"this is constructor call"<<endl;
    }

    //Parameterised constructor 
    Hero(int health){

    }

    char level;

    // if the data members are private, then we can access it through getter and setter 
    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }
    void setLevel(char c)
    {
        level = c;
    }
};

int main()
{
    Hero ramesh;
    // hero raj;
    // raj.setHealth(40);
    // raj.level = 'A';
    // cout<<"the health is "<<raj.getHealth()<<endl;
    // cout<<"The level is "<<raj.level;

    return 0;
}