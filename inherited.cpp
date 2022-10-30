#include<iostream>
using namespace std;

class Beverage
{
    public:
    void drinks()
    {
        cout<<"all drinks are available \n";
    }
};
class Coffee: public Beverage
{
    public:
    void mocha()
    {
        cout<<"mocha tastes best \n";
    }
    };
    

int main()
{
    Coffee c;
    c.drinks();
    c.mocha();
    return 0;
}

