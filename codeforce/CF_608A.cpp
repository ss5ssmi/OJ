#include<bits/stdc++.h>
using namespace std;
struct node{
	int f,t;
}p[110];
bool cmp(node a,node b){
	if(a.f==b.f) return a.t<b.t;
	return a.f>b.f;
}
int main() {
	int n,s;
	cin>>n>>s;
	for(int i=0; i<n; i++) {
		cin>>p[i].f>>p[i].t;
	}
	sort(p,p+n,cmp);
	int ans=0,t=s;
	for(int i=0;i<n;i++){
		ans+=t-p[i].f;
		t=p[i].f;
		int tmp=p[i].t-ans;
		ans+=tmp>0?tmp:0;
//		printf("floor:%d time:%d\n",t,ans);
	}
	ans+=t;
	cout<<ans;
	return 0;
}
