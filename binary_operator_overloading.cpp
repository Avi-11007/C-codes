#include<iostream>
using namespace std;
class Complex

{
    private:
    int real,imag;
    public:
    void input()
    {
       cout<<"enter real and imaginary part respectively :";
       cin>>real>>imag;

    }
    Complex operator + (Complex obj)
    {
        Complex temp;
        temp.real=real+obj.real;
        temp.imag=imag+obj.imag;
        return temp;
    }
    void output()
    {
        cout<<"output is :"<<real<<"+"<<imag<<"i";
    }
};


int main()
{
    Complex com1,com2,res;
    cout<<"enter first complex number i.e\n";
    com1.input();
    cout<<"enter second complex number i.e\n";
    com2.input();
    res=com1+com2;
    res.output();
    return 0;

}

