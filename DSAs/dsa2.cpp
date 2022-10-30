#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
    string n;
	getline(cin,n);
	int sum=1;
	for(int i=0;i<n.size();i+1){
		sum=sum*n[i];
	}
	if(sum%10==2 || sum%10==3 || sum%10==5 ){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	}
    
}
