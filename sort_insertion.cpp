#include<iostream>
using namespace std;
//sorting via insertion method
int main()
{
    int i,j;
    int temp,num;
    int arr[30];
    cout<<"Enter the number of elements of the array \n";
    cin>>num;
    cout<<"enter the elements :";
    for (int i = 0; i < num; i++)
    {
       cin>>arr[i];
    }
    for (int i = 1; i < num-1; i++)
    {
      temp=arr[i];
      j=i-1;
      while((temp<arr[j])&&(j>0))
    {
      arr[j+1]=arr[j];
      j=j-1;
    }
    arr[j+1]=temp;
    }
    
   cout<<"sorted elements \n";
     for (int i = 0; i < num; i++)
    {
       cout<<arr[i]<<" \t";
    }
    cout<<endl;
    return 0;
}