#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,x,l,r,t=1,ans=0;
	scanf("%d%d",&n,&x);
	for(int i=0; i<n; i++) {
		scanf("%d%d",&l,&r);
		for(; t<l;) {
			if(t+x<=l) t+=x;
			else {
				ans++;
				t++;
			}
		}
		t=r+1;
		ans+=r-l+1;
	}
	printf("%d\n",ans);
	return 0;
}
