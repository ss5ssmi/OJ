#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,h[100000];
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>h[i];
	}
	int ans=0;
	ans+=h[0]+1;
	for(int i=1; i<n; i++) {
		if(h[i]>h[i-1]) ans+=h[i]-h[i-1]+2;
		else ans+=h[i-1]-h[i]+2;
	}
	cout<<ans;
	return 0;
}
