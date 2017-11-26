#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[100];
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		scanf("%d",&s[i]);
	}
	int ans=1e9;
	for(int i=1; i<n-1; i++) {
		int t[100];
		for(int j=0; j<n; j++) {
			t[j]=s[j];
		}
		t[i]=0;
		int tmp=0;
//		printf("\n");
		for(int j=2; j<n; j++) {
			if(t[j]==0) {
				tmp=max(tmp,s[j+1]-s[j-1]);
//				printf("%d-%d=%d\n",s[j+1],s[j-1],tmp);
			} else if(t[j-1]==0) {
				tmp=max(tmp,s[j]-s[j-2]);
//				printf("%d-%d=%d\n",s[j],s[j-2],tmp);
			} else {
				tmp=max(tmp,s[j]-s[j-1]);
//				printf("%d-%d=%d\n",s[j],s[j-1],tmp);
			}
		}
//		printf("\n");
		ans=min(ans,tmp);
	}
	printf("%d\n",ans);
	return 0;
}
