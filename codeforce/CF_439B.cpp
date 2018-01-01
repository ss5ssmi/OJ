#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,x,s[100000];
	scanf("%d%d",&n,&x);
	for(int i=0; i<n; i++) {
		scanf("%d",&s[i]);
	}
	sort(s,s+n);
	__int64 ans=0;
	for(int i=0;i<n;i++){
		ans+=1LL*s[i]*x;
		if(x>1){
			x--;
		}
	}
	printf("%I64d\n",ans);
	return 0;
}
