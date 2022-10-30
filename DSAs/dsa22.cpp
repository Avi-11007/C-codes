#include <bits/stdc++.h> 
using namespace std;


int binarySearch(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while (start<=end)
    {
       if (arr[mid]==key)
       {
        return mid;
       }

       else if (arr[mid]>key)
       {
          end=mid-1;
       }

       else
       {
        start=mid+1;
       }
       
       mid=start+(end-start)/2;
       
    }
    return -1;

}

int getPivot(int arr[],int n)
{
    int s=0,e=n-1;
    int mid=s+(e-s)/2;

    while (s<e)
    {
        if (arr[mid]>arr[0])
        {
           s=mid+1;
        }
        else
        {
            e=mid;
        }
        

        mid=s+(e-s)/2;
    }
    
    return s;
}


int main()
{
    int arr[5]={8,10,17,1,3};
    cout<<"pivot is "<<getPivot(arr,5);
}
