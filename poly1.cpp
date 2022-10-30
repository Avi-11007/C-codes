#include<iostream>
using namespace std;

class King
{
    public:
    

    void pro(int a,int b)
    {
        cout<<a<<b<<"\n";
    }
void pro(int a,int b,int c,int d,int e)
    {
        cout<<(a+b+c+d+e);
    }


};


int main()
{
   King k;
   k.pro(1,2);
   k.pro(11,23,11,44,45);
}

