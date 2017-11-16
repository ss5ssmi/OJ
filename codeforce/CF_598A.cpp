#include<bits/stdc++.h>
using namespace std;
int main() {
	long long n,ans;
	int t,tmp;
	scanf("%d",&t);
	while(t--){
		scanf("%lld",&n);
		ans=n*(n+1)/2;
		tmp=1;
		while(n){
			ans-=2*tmp;
			tmp*=2;
			if(n==1) break;
			n/=2;			
		}
		printf("%lld\n",ans);
	}
	return 0;
}
