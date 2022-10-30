#include<iostream>
using namespace std;

class Parent
{
    public:
    void print()
    {
        cout<<"this is a functioon of parent class ";

    }
};
class child: public Parent
{
    public:
    void print()
    {
        cout<<"this is the function of derieved class";
    }
};


int main()
{
    child obj;
    obj.print();
    Parent p;
    p.print();
   return 0;

}

