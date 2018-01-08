#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[1000],t[1000]= {0};
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		scanf("%d",&s[i]);
	}
	int ans=0,tmp=0,i=0,flag=1;
	while(1) {
		if(flag) {
			if(i<0) i++;
			for(; i<n; i++) {
				if(s[i]<=tmp && t[i]==0) {
					tmp++;
					t[i]=1;
					flag=0;
				}
			}
		} else {
			if(i>=n) i--;
			for(; i>=0; i--) {
				if(s[i]<=tmp && t[i]==0) {
					tmp++;
					t[i]=1;
					flag=1;
				}
			}
		}
		int f=0;
		for(int j=0; j<n; j++) {
			f+=t[j];
		}
		if(f==n) goto end;
		else ans++;
	}
	end:printf("%d\n",ans);
	return 0;
}
