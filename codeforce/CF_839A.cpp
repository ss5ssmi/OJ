#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,k,s[101],tmp=0,ans=0;
	scanf("%d%d",&n,&k);
	for(int i=1; i<=n; i++) {
		scanf("%d",&s[i]);
	}
	for(int i=1; i<=n; i++) {
		tmp+=s[i];
		if(tmp<=8) {
			k-=tmp;
			tmp=0;
		} else {
			k-=8;
			tmp-=8;
		}
		if(k<=0) {
			ans=i;
			break;
		}
	}
	if(k>0) printf("-1\n");
	else printf("%d\n",ans);
	return 0;
}
