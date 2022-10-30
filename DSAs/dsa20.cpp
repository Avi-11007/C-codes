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



int main()
{
    int even[6]={2,4,6,8,10,12};
    int odd[5]={1,2,37,89,97};

    int index=binarySearch(even,6,10);

    cout<<"index of 10 is "<<index<<endl;

    int oddIndex=binarySearch(odd,6,10);

    cout<<"index of 45 is "<<oddIndex<<endl;
}
