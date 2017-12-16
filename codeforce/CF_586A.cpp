#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[100],ans=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&s[i]);
		if(s[i]) ans++;
	}
	for(int i=1;i<n-1;i++){
		if(s[i-1]==s[i+1] && s[i]==0 && s[i-1]==1){
			ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
}
