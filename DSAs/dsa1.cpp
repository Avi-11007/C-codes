#include<bits/stdc++.h>
using namespace std;
void printWords(string str)
{
    // word variable to store word
    string word;
 
    // making a string stream
    stringstream iss(str);
 
    // Read and print each word.
    while (iss >> word)
        cout << word << endl;
}

int main()
{
    string i;
    getline(cin,i);
    transform(i.begin(), i.end(), i.begin(), ::toupper);
    printWords(i);
    
}
