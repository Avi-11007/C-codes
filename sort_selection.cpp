#include<iostream>
using namespace std;
//sorting via selection method
int main()
{
    int i,j,p,min;
    int temp,num;
    int arr[10];
    cout<<"Enter the number of elements of the array \n";
    cin>>num;
    cout<<"enter the elements :";
    for (int i = 0; i < num; i++)
    {
       cin>>arr[i];
    }
    for (int i = 0; i < num-1; i++)
    {
     min=arr[i];
     p=i;
     for (j=i+1; j <num; j++)
     {
        if(min>arr[j]){
            min=arr[j];
            p=j;

        }
     }
     temp=arr[i];
     arr[i]=arr[p];
     arr[p]=temp;
     
    }
    
   cout<<"sorted elements \n";
     for (int i = 0; i < num; i++)
    {
       cout<<arr[i]<<" \t";
    }
    cout<<endl;
    return 0;
}