#include<bits/stdc++.h>
using namespace std;
int cmp(int a,int b){
	return a>b;
}
int main() {
	int n,m,s[100];
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&s[i]);
	}
	sort(s,s+n,cmp);
	int ans=0,t=0;
	for(int i=0;i<n;i++){
		if(t<m){t+=s[i];ans++;}
		else break;
	}
	printf("%d\n",ans);
	return 0;
}
