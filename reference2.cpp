#include<iostream>
using namespace std;

int main()
{
    int num=17;
    int& n1=num;
    int& n2=num;
cout<<"the value of num is"<<num<<endl;
cout<<"the value of reference n1 is"<<n1<<endl;
cout<<"the value of reference n2 is"<<n2<<endl;
    return 0;
}