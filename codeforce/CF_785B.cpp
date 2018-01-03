#include<bits/stdc++.h>
using namespace std;
struct node {
	int l,r;
} p[200000],c[200000];
int main() {
	int n,m,t1l=0,t2l=0,t1r=1e9,t2r=1e9;
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		scanf("%d%d",&p[i].l,&p[i].r);
		t1l=max(t1l,p[i].l);
		t1r=min(t1r,p[i].r);
	}
	scanf("%d",&m);
	for(int i=0; i<m; i++) {
		scanf("%d%d",&c[i].l,&c[i].r);
		t2l=max(t2l,c[i].l);
		t2r=min(t2r,c[i].r);
	}
	int tmp1=t1l-t2r,tmp2=t2l-t1r;
	if(tmp1<=0 && tmp2<=0) {
		printf("0\n");
	} else if(tmp1 || tmp2) {
		printf("%d\n",tmp1>tmp2?tmp1:tmp2);
	}
	return 0;
}
