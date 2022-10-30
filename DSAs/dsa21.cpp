#include <bits/stdc++.h> 
using namespace std;


int firstOccurence(int arr[],int n,int key)
{
    int s=0,e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;

    while (s<=e)
    {
        if (key==arr[mid])
        {
            ans=mid;
            e=mid-1;
        }

        else if (key>arr[mid])
        {
           s=mid+1;
        }
        else if (key<arr[mid])
        {
            e=mid-1;
        }

        mid=s+(e-s)/2;
    }
    
    return ans;
}

int lastOccurence(int arr[],int n,int key)
{
    int s=0,e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;

    while (s<=e)
    {
        if (key==arr[mid])
        {
            ans=mid;
            s=mid+1;
        }

        else if (key>arr[mid])
        {
           s=mid+1;
        }
        else if (key<arr[mid])
        {
            e=mid-1;
        }

        mid=s+(e-s)/2;
    }
    
    return ans;
}



int main()
{
    int fo[10]={0,2,3,3,3,3,3,3,5,6};
    int findex=firstOccurence(fo,10,3);

    cout<<"first index of 3 is "<<findex<<endl;

    int lIndex=lastOccurence(fo,10,3);

    cout<<"last index of 3 is  "<<lIndex<<endl;
}
