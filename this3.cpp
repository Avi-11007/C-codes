#include<iostream>
using namespace std;
class Test
{
    int num;
    public:
    Test & assign(int num)
    {
        this->num=num+1000;
        return *this;
    }
    void display(){
        cout<<"the value of num is"<<num<<endl;
    }
};


int main()
{
    Test n1;
    n1.assign(100).display();
    return 0;
}