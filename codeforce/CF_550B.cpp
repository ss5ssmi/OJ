#include<bits/stdc++.h>
using namespace std;
int n,l,r,x,s[16],ans=0,ti;
int dfs(int i,int sum){
	sum+=s[i];
	if(sum>r) return 0;
	if(sum>=l && sum<=r && s[i]-s[ti]>=x) ans++;
	for(int j=i+1;j<n;j++){
		dfs(j,sum);
	}
}
int main() {
	cin>>n>>l>>r>>x;
	for(int i=0; i<n; i++) {
		cin>>s[i];
	}
	sort(s,s+n);
	for(ti=0;ti<n;ti++){
		if(s[ti]+s[ti+1]>r) break;
		dfs(ti,0);
	}
	cout<<ans<<endl;
	return 0;
}
