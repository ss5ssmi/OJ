#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[200010];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	long long ans=abs(s[0]);
	for(int i=1;i<n;i++){
		ans+=abs(s[i-1]-s[i]);
	}
	cout<<ans;
	return 0;
}
