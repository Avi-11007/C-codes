#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 2; i < n; i++)
    {
       int rem=n%i;
       if (rem==0)
       {
        cout<<"Not a Prime Number";
        break;
       }

       else
       {
        cout<<"Its a Prime Number";
        break;
       }
       
    }
    

}