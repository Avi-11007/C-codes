#include <iostream>
using namespace std;

bool search(int arr[],int size,int key)
{
    for (int  i = 0; i <size; i++)
    {
        if (key==arr[i])
        {
           return 1;
        }
        
    }
    return 0;
    
}


int main()
{
    int arr[10]={5,7,8,9,-22,11,1,23,1};

    cout<<"Enter the element to search for "<<endl;
    int key;
    cin>>key;
  
  bool found=search(arr,10,key);
  if (found)
  {
    cout<<"Element is present";
  }
  
else{
    cout<<"Element is absent";
}


}