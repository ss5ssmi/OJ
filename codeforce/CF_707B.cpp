#include<bits/stdc++.h>
using namespace std;
#define int64 __int64
struct node{
	int64 x,y,l;
}s[100010];
int cmp(node a,node b){
	return a.l<b.l;
}
int main() {
	int n,m,k,vis[100010]={0};
	int64 x;
	scanf("%d%d%d",&n,&m,&k);
	for(int i=0;i<m;i++){
		scanf("%I64d%I64d%I64d",&s[i].x,&s[i].y,&s[i].l);
	}
	sort(s,s+m,cmp);
	for(int i=0;i<k;i++){
		scanf("%I64d",&x);
		vis[x]=1;
	}
	long long ans=1e10;
	for(int i=0;i<m;i++){
		if((vis[s[i].x]&&!vis[s[i].y])||(!vis[s[i].x]&&vis[s[i].y])){
			ans=min(s[i].l,ans);
		}
	}
	if(ans==1e10) printf("-1\n");
	else printf("%I64d\n",ans);
	return 0;
}
