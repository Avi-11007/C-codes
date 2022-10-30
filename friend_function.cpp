#include<iostream>
using namespace std;
class Salary
{
private:
    int sal=0;

friend int increment(Salary s);
};

int increment(Salary s)
{
s.sal=s.sal+7000;
return s.sal;
}

int main()
{
    Salary s;
    cout<<"increment is :";
    cout<<increment(s);
    return 0;
}