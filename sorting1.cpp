#include<iostream>
using namespace std;
//sorting via bubble method
int main()
{
    int i,j;
    int temp;
    int arr[8]={10,1,20,3,4,56,26,7};
    cout<<"unsorted array \n";
    for (int i = 0; i < 8; i++)
    {
       cout<<arr[i]<<"\t ";
    }
    cout<<endl;
    for (int i = 0; i < 8; i++)
    {
      for (int j = i+1; j < 8; j++)
    {
      if (arr[j]<arr[i])
      {
         temp=arr[i];
         arr[i]=arr[j];
         arr[j]=temp;
      }
      
    }
    }
    cout<<"sorted elements \n";
     for (int i = 0; i < 8; i++)
    {
       cout<<arr[i]<<" \t";
    }
    cout<<endl;
    return 0;
}