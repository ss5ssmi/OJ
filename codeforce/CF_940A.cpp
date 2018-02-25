#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,d,s[110],ans=0;
	cin>>n>>d;
	for(int i=0; i<n; i++) {
		cin>>s[i];
	}
	sort(s,s+n);
	if(s[n-1]-s[0]<=d) {
		printf("0\n");
		return 0;
	}
	for(int i=0; i<n; i++) {
		for(int j=i; j<n; j++) {
			if(s[j]-s[i]<=d) {
				ans=max(ans,j-i+1);
			}
		}
	}
	cout<<n-ans;
	return 0;
}
