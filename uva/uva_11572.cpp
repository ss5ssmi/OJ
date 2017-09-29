#include<stdio.h>
#include<string.h>
using namespace std;
#define m 1000000+10
int s[m],pos[m];
int max(int a,int b) {
	return a>b?a:b;
}
int main() {
	int t,n;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);
		for(int i=0; i<n; i++) {
			scanf("%d",&s[i]);
		}
		memset(pos,-1,sizeof(pos));
		int start=0,ans=0;
		s[n]=s[n-1];
		for(int i=0; i<=n; i++) {
			if(pos[s[i]] >= start) {
				int tmp=i-start;
				ans=max(ans,tmp);
				start=pos[s[i]]+1;
				pos[s[i]]=i;
			}else{
				pos[s[i]]=i;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
