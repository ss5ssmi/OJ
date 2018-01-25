#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	int n,k,s[100000]={0};
	cin>>n>>k;
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		s[i]+=t/k;
		if(t%k!=0) s[i]++;
	}
	ll ans=0;
	for(int i=0;i<n;i++){
		ans+=s[i];
	}
	if(ans%2==0) cout<<ans/2;
	else cout<<(ans/2)+1;
	return 0;
}
