#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    for (int x = 1; x<=10;x++)
    {
        v.push_back(x);

    }
    cout<<"vector size is :"<<v.size()<<endl;
    cout<<"capacity of vector is"<<v.capacity()<<endl;
    cout<<"maximum size of vector is"<<v.max_size()<<endl;
    v.resize(5);
    cout<<"vactor size after resizing"<<v.size()<<endl;

    if(v.empty()==false)
    {
        cout<<"vector is not empty"<<endl;
    }
    else{
        cout<<"vector is empty";
    }
    return 0;
}