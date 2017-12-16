#include<bits/stdc++.h>
using namespace std;
int luck(int t) {
	int tmp=0;
	while(t) {
		if(t%10==4 || t%10==7) {
			tmp++;
		}
		t/=10;
	}
	return tmp;
}
int main() {
	int n,k,s[100],ans=0;
	scanf("%d%d",&n,&k);
	for(int i=0; i<n; i++) {
		scanf("%d",&s[i]);
		if(luck(s[i])<=k) {
			ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
}
