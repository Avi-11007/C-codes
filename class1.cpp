#include<iostream>
using namespace std;


class Franchise
{
public:
void KFC()
{
    cout<<"we have the best chicken"<<endl;
}
void Burger_King()
{
    cout<<"we have the best burger"<<endl;
}
};


int main()
{
      Franchise fran;
      fran.KFC();
      fran.Burger_King();
      return 0;
}