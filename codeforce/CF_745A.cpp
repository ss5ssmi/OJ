#include<bits/stdc++.h>
using namespace std;
int main() {
	string s,t;
	set<string> set;
	cin>>s;
	for(int i=0;i<s.size();i++){
		t+=s;
	}
	for(int i=0;i<s.size();i++){
		string tmp;
		for(int j=i;j<s.size()+i;j++){
			tmp+=t[j];
		}
		set.insert(tmp);
	}
	cout<<set.size();
	return 0;
}
