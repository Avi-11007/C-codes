#include<iostream>
using namespace std;


int fact(int num)
{
if(num<1){
    return 1;
}
else{
    return num*fact(num-1);
}
}
int main()
{
    int num;
    cout<<"enter the number \n";
    cin>>num;
    cout<<"the factorial of number "<<num<<"is \n"<<fact(num);
    return 0;
}