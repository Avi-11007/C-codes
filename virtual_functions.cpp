#include<iostream>
using namespace std;

class base
{
    public:
    virtual void print()
    {
        cout<<"this is the function of the base class";

    }
};

class derieved: public base
{
public:
    void print()
    {
        cout<<"this is the function of the derieved class";

    }
};


int main()
{
    base *b;
    derieved d;
    b=&d;
    b->print();
    

  return 0;
}

