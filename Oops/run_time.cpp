#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

class Parent{
    public:
    void show()
    {
        cout<<"inside parent class"<<endl;
    }
};
class child:public Parent{
  public:
  void show()
  {
    cout<<"inside child class"<<endl;
  }
};

int main()
{
    child p;
    p.show();
}