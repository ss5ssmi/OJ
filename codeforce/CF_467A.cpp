#include<stdio.h>
int main() {
	int n,p[100],q[100];
	while(scanf("%d",&n)!=EOF) {
		int ans=0;
		for(int i=0; i<n; i++) {
			scanf("%d %d",&p[i],&q[i]);
			if(q[i]-p[i]>=2){
				ans++;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
