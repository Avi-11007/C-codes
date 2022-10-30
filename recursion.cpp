#include<iostream>
using namespace std;
int sum(int a){
    if (a!=0){
        return a+sum(a-1);
    }
}

int main()
{
    int num;
    cout<<"enter the number \n";
    cin>>num;
    cout<<"the sum of number upto"<<num<<"is \n"<<sum(num);
    return 0;
}