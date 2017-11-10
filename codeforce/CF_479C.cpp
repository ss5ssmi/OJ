#include<bits/stdc++.h>
using namespace std;
struct node{
	int a,b;
}s[5000];
int cmp(node a,node b){
	if(a.a==b.a) return a.b<b.b;
	return a.a<b.a;
}
int main() {
	int n,ans,tmp;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&s[i].a,&s[i].b);
	}
	sort(s,s+n,cmp);
	ans=min(s[0].a,s[0].b);
	for(int i=1;i<n;i++){
		if(s[i].b>=ans){
			ans+=s[i].b-ans;
		}else if(s[i].a>ans){
			ans+=s[i].a-ans;
		}
	}
	printf("%d\n",ans);
	return 0;
}
