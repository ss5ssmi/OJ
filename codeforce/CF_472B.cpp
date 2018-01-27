#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,k,s[2000];
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	sort(s,s+n);
	int ans=0;
	for(int i=n-1;i>=0;i-=k){
		ans+=2*(s[i]-1);
	}
	printf("%d\n",ans);
	return 0;
}
