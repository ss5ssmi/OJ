#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,ans=0;
	string t;
	map<string,int> s;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		s[t]++;
		ans=max(ans,s[t]);
	}
	cout<<ans;
	return 0;
}
