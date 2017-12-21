#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,x[200000];
	char s[200000];
	scanf("%d",&n);
	scanf("%s",s);
	for(int i=0; i<n; i++) {
		scanf("%d",&x[i]);
	}
	int ans=1e9;
	for(int i=0; i<n-1; i++) {
		if(s[i]=='R' && s[i+1]=='L') {
			ans=min(ans,abs(x[i]-x[i+1])/2);
		}
	}
	if(ans!=1e9) printf("%d\n",ans);
	else printf("-1\n");
	return 0;
}
