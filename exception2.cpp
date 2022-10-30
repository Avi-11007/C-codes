#include<iostream>
using namespace std;

int main(){
    int num,denum,output;
    cout<<"enter the numbers to do thr division "<<endl;
    cin>>num>>denum;
    try
    {
        if (denum==0)
        {
            throw(denum);
        }
        else{
            output=num/denum;
        }
    }
    catch(int denum)
    {
        cout<<"cannot divide by zerooo000";
    }
    cout<<"the output after division is:"<<output;
    return 0;
}