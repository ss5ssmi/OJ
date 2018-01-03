#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e5+10;
int main() {
	int col[maxn]= {0},row[maxn]= {0};
	int n,m,x,y;
	scanf("%d%d",&n,&m);
	int c=n,r=n;
	for(int i=0; i<m; i++) {
		scanf("%d%d",&x,&y);
		if(!col[x]) {
			c--;
			col[x]=1;
		};
		if(!row[y]) {
			r--;
			row[y]=1;
		};
		printf("%lld ",1LL*r*c);
	}
	return 0;
}
