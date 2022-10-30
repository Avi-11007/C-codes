#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"enter your string \n";
    cin>>s;
    cout<<"your string\n"<<s<<endl;
    s.push_back('y');
    cout<<"after using push_back your string is\n"<<s<<endl;
    s.pop_back();
    cout<<"after using pop_back your string is\n"<<s<<endl;
    return 0;
}