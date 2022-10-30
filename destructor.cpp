#include<iostream>
using namespace std;


class Gambit
{
public:
Gambit()
{
    cout<<"i am in the constructor"<<endl;
}
~Gambit()
{
    cout<<"i am in the destructor"<<endl;
}
void display()
{
    cout<<"hello i am in display function"<<endl;
}
};


int main()
{
      Gambit gam;
      gam.display();
      return 0;
}