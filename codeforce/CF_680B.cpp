#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,a,s[101]={0},t=0,ans=0;
	scanf("%d%d",&n,&a);
	for(int i=1; i<=n; i++) {
		scanf("%d",&s[i]);
		if(s[i]) t++;
	}
	for(int i=1;i<=n;i++){
		if(s[i]){
			int tmp=a-(i-a);
			if(tmp>n || tmp<1 || s[tmp]){
				ans++;
			}
		}
	}
	printf("%d\n",ans);
	return 0;
}
