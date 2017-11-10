#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,v,k,t,s[51]={0};
	scanf("%d%d",&n,&v);
	for(int i=1;i<=n;i++){
		scanf("%d",&k);
		while(k--){
			scanf("%d",&t);
			if(t<v){
				s[i]++;
			}
		}
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		if(s[i]) ans++;
	}
	printf("%d\n",ans);
	for(int i=1;i<=n;i++){
		if(s[i]) printf("%d",i);
		if(i!=n) printf(" ");
	}
	printf("\n");
	return 0;
}
