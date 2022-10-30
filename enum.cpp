#include<iostream>
using namespace std;


enum captain{Avi,Sid, Robbie,Sami,Jake};

int main(){
    captain cap=Avi;
    if (cap==Avi)
    {
        cout<<"our captain is avi and its value is :"<<Avi<<endl;
    }
    else{
        cout<<"he is not our captain";
    }
    
    return 0;
}