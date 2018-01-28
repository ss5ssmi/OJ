#include<bits/stdc++.h>
using namespace std;
struct node{
	int y,next;
}edge[1100];
int head[1100]={-1},par[1100],cnt[1100];
int main() {
	int n,t,num=1;
	cin>>n;
	for(int i=2;i<=n;i++){
		cin>>t;
		par[i]=t;edge[num].y=i;edge[num].next=head[t];head[t]=num;
		num++;
	}
	for(int i=2;i<=n;i++){
		if(!head[i]) cnt[par[i]]++;
	}
	for(int i=1;i<=n;i++){
		if(head[i] && cnt[i]<3) {printf("NO\n");return 0;}
	}
	printf("YES\n");
	return 0;
}
