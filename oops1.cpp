#include<iostream>
using namespace std;

class Parent
{
    public:
    string name1="harley";
};
class Child: public Parent
{
    public:
    string name2=" davidson";
};
int main()
{
    Child ch;
    cout<<ch.name1+""+ch.name2;
    return 0;

}