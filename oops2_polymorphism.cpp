#include<iostream>
using namespace std;

class Animal
{
    public:
    void speed()
    {
        cout<<"who is more faster :? \n";
    }
};
class Dolphin: public Animal
{
    public:
    void speed()
    {
        cout<<"i am afaster in water \n";
    }
    };
    
    class Cheetah: public Animal
{
    public:
    void speed()
    {
        cout<<"i am a faster on Land \n";
    }
};

int main()
{
    Animal a;
    Cheetah c;
    Dolphin d;
    a.speed();
    c.speed();
    d.speed();
}

