#include <iostream>
#include<math.h>
using namespace std;

int arithmatic(int n)
{
    int nterm=(3*n) + 7;
    return nterm;
    
}

int totalSetbits(int a,int b)
{
    int count=0;
    while (a!=0)
    {
      if (a&1)
      {
        count ++;
      }
      a=a>>1;
      
    }
    while (b!=0)
    {
        if (b&1)
        {
           count ++;
          
        }
         b=b>>1;
        
    }
    return count;
}

void fibonacci (int n)
{
    int a=0;
    int b=1;

    for (int i = 1; i <= n; i++)
    {
       int nextNumber=a+b;
       cout<<nextNumber<< " ";
       
       a=b;
       b=nextNumber;
    
    }
    
}

int main()
{

  cout<<fibonacci(5);
}