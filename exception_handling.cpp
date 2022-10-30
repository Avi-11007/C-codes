#include<iostream>
using namespace std;

int main(){
    int age=25;
try{
    if(age>=24){
        cout<<"you can drink alcohol";
    }
    else{
        throw(age);
    }
}
catch(int age)
{
    cout<<"you cant drink ..as you are less than 24";
    cout<<"your age is"<<age;
}
    return 0;
}