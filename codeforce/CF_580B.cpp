#include<bits/stdc++.h>
using namespace std;
struct node{
	__int64 m,s;
}f[100000];
int cmp(node a,node b){
	if(a.m==b.m) return a.s>b.s;
	else return a.m<b.m;
}
int main() {
	int n,d;
	__int64 ans=0,tmp=0;
	scanf("%d%d",&n,&d);
	for(int i=0;i<n;i++){
		scanf("%I64d%I64d",&f[i].m,&f[i].s);
	} 
	sort(f,f+n,cmp);
	for(int i=0,j=0;i<n;){
		if(abs(f[i].m-f[j].m)<d){
			tmp+=f[i].s;
			i++;
		}else{
			tmp-=f[j].s;
			j++;
		}
		ans=max(ans,tmp);
	}
	printf("%I64d\n",ans);
	return 0;
}
