#include<iostream>
using namespace std;

class Chemistry
{
    public:
    int marks1;

    void chemistry_marks()
    {
        cout<<"enter marks in chemistry  ";
        cin>>marks1;
    }
};
class Physics: public Chemistry
{
    public:
    int marks2;
    void physics_marks()
    {
        cout<<"enter marks in physics \n";
        cin>>marks2;
    }
    };
    class Maths: public Physics
{
    public:
    int marks3;
    void maths_marks()
    {
        cout<<"enter marks in maths \n";
        cin>>marks3;
    }

    void result()
    {
       int total=marks1+marks2+marks3;
        cout<<"total mark is :"<<total;
    }
    };
    

int main()
{
    Maths m;
    m.chemistry_marks();
    m.physics_marks();
    m.maths_marks();
    m.result();
}

