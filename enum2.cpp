#include<iostream>
using namespace std;

enum Supercars{ venom=301,veryon=268,valkyrie=240,roadster=250};



int main()
{
    Supercars speed1;
    Supercars speed2;
    speed1=valkyrie;
    speed2=roadster;
    if (speed1<speed2)
    {
        cout<<"its a win for roadster with a speed of"<<speed2;
    }
    else{
        cout<<"its a win for valyrie with a speed of "<<speed1;
    }
    return 0;
}