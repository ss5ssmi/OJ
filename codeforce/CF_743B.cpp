#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL dfs(LL n,LL k){
	if(n==1) return n;
	long long t=(1LL<<(n-1));
	if(k==t) return n;
	if(k>t) return dfs(n-1,k-t);
	return dfs(n-1,k);
}
int main() {
	LL n,k;
	cin>>n>>k;
	printf("%I64d",dfs(n,k));
	return 0;
}
