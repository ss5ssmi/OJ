#include<bits/stdc++.h>
using namespace std;
int main() {
	string s,t;
	cin>>s>>t;
	int ans=1;
	for(int i=0,j=0;i<t.size();i++){
		if(s[j]==t[i]) {ans++;j++;}
	}
	cout<<ans;
	return 0;
}
