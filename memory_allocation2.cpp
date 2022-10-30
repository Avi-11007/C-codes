#include<iostream>
using namespace std;

int main()
{
   
   int size;
   

   cout<<"enter the size :";
   cin>>size;
   int*ptr;
   ptr=new int[size];
   
   cout<<"enter the elements \n"<<endl;
   for (int i = 0; i < size; i++)
   {
       cout<<"element :";
       cin>>ptr[i];
   }
   cout<<"the element you have entered"<<endl;
   for (int i = 0; i < size; i++)
   {
       cout<<"elements are :"<<ptr[i]<<endl;
      
   }
   
   
    return 0;
}