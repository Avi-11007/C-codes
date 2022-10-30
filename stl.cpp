#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    for (int i = 1; i <=10; i++)
    {
        v.push_back(i);
    }
    cout<<"the size of the vector is :"<<v.size();
    v.resize(7);
    cout<<"after resizing it becomes"<<v.size();
    if (v.empty()==false)
    {
        cout<<" \nits not empty";

    }
    else{
        cout<<"its empty";
    }

    cout<<"\n elements of the vectors are";
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout<<*it;
    }
    
    
    return 0;
}