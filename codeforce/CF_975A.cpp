#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,ans=0;
	string s;
	set<string> m;
	m.clear();
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>s;
		string tmp="";
		for(int j=0;j<s.length();j++){
			if(tmp.find(s[j])==std::string::npos){
				tmp+=s[j];
			}
		}
		sort(tmp.begin(),tmp.end());
		m.insert(tmp);
	}
	cout<<m.size();
	return 0;
}
