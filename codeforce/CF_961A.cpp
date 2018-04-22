#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,m,t,s[1010]={0};
	cin>>n>>m;
	for(int i=0; i<m; i++) {
		cin>>t;
		s[t]++;
	}
	sort(s+1,s+n+1);
	cout<<s[1];
	return 0;
}
