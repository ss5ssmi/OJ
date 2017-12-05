#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[100],t=0;
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		scanf("%d",&s[i]);
	}
	while(s[t]==3) t++;
	for(int i=t+1; i<n; i++) {
		if(s[i]==3) {
			if(s[i-1]!=3) s[i]=3-s[i-1];
		}else{
			if(s[i]==s[i-1]) s[i]=0;
		}
	}
	int ans=0;
	for(int i=0;i<n;i++){
		if(!s[i]) ans++;
	}
	printf("%d\n",ans);
	return 0;
}
