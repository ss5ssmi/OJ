#include<bits/stdc++.h>
using namespace std;
int ans=0;
long long n;
void dfs(long long m){
	if(m>n) return ;
	if(m<=n) ans++;
	dfs(m*10+4);
	dfs(m*10+7);
}
int main() {
	scanf("%lld",&n);
	dfs(4);
	dfs(7);
	printf("%d\n",ans);
	return 0;
}
