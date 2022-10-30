#include<iostream>
using namespace std;

int main(){
    enum color{red,blue,green,yellow};

    color select=yellow;
    switch(select)
    {
        case  red:
        cout<<"its  red";
        break;
        case  blue:
        cout<<"its blue";
        break;
        case  green:
        cout<<"its green";
        break;
        case  yellow:
        cout<<"its yellow";
        break;
    }
    return 0;
}