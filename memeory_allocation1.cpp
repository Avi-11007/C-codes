#include<iostream>
using namespace std;

int main()
{
   int *ptr1,*ptr2,*ptr3;
   int avg;
   ptr1=new int;
   ptr2=new int;
   ptr3=new int;

   cout<<"enter first number :";
   cin>>*ptr1;
   cout<<"enter second number :";
   cin>>*ptr2;
   cout<<"enter third number :";
   cin>>*ptr3;
   avg=(*ptr1+*ptr2+*ptr3)/3;
   cout<<"the average is : "<<avg<<endl;
   delete ptr1;
   delete ptr2;
   delete ptr3;
    return 0;
}