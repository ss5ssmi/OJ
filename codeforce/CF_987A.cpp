#include<bits/stdc++.h>
using namespace std;
int main() {
	map<string,string> m;
	map<string,string>::iterator it;
	m["purple"]="Power";
	m["green"]="Time";
	m["blue"]="Space";
	m["orange"]="Soul";
	m["red"]="Reality";
	m["yellow"]="Mind";
	int n;
	string s;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		m[s]="";
	}
	printf("%d\n",6-n);
	for(it=m.begin();it!=m.end();it++){
		if(it->second != ""){
			cout<<it->second<<endl;
		}
	}
	return 0;
}
