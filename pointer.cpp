#include<iostream>
using namespace std;
int main()
{
   int val = 105;
   int *ptr;
   ptr=&val;
   cout<<"the value of val is :"<<val<<endl;
   cout<<"value of ptr is :"<<ptr<<endl;
   cout<<"value of *ptr is :"<<*ptr<<endl;
   
    return 0;
}