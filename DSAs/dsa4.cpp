#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        int space=n-i;
        while (space)
        {
           cout<<" ";
           space--;
        }
        
        while (j<=i)
        {
            cout<<j;
            j++;
        }
        
        int start=i-1;
        while (start)
        {
           cout<<start;
           start=start-1;
        }
        
        cout<<endl;
        i=i+1;
        
    }
    
    
}
