#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,m,s[100];
	scanf("%d%d",&n,&m);
	for(int i=0; i<n; i++) {
		scanf("%d",&s[i]);
	}
	sort(s,s+n);
	int ans=0;
	for(int i=0;i<m;i++){
		if(s[i]<0)ans-=s[i];
	}
	printf("%d\n",ans);
	return 0;
}
