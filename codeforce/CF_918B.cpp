#include<bits/stdc++.h>
using namespace std;
int main() {
	map<string,string> ser;
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		string ip,name;
		cin>>name>>ip;
		ip+=';';
		ser[ip]=name;
	}	
	for(int i=0;i<m;i++){
		string comm,ip;
		cin>>comm>>ip;
		string name=ser[ip];
		cout<<comm<<" "<<ip<<" #"<<name<<endl;
	}
	return 0;
}
