#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[100000],ans=1;
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>s[i];
	}
	sort(s,s+n);
	for(int i=0; i<n; i++) {
		if(s[i]>=ans) {
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
