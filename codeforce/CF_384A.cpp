#include<bits/stdc++.h>
#include<queue>
using namespace std;
char s[1000][1000];
int v[1000][1000],m[2][3]= {1,-1,1,1,1,-1},n,sum=0;
struct node {
	int x,y;
};
queue<node> q;
void solve() {
	node now,next;
	now.x=0;
	now.y=0;
	q.push(now);
	while(!q.empty()) {
		now=q.front();
		q.pop();
		if(now.x<n && now.x>=0 && now.y<n && now.y>=0) {
			s[now.x][now.y]='C';
			sum++;
		}
		for(int i=0; i<3; i++) {
			next.x=now.x+m[0][i];
			next.y=now.y+m[1][i];
			if(next.x<n && next.x>=0 && next.y<n && next.y>=0 && !v[next.x][next.y]) {
				v[next.x][next.y]=1;
				q.push(next);
			}
		}
	}
}
int main() {
	scanf("%d",&n);
	memset(s,'.',sizeof(s));
	memset(v,0,sizeof(v));
	solve();
	printf("%d\n",sum);
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			printf("%c",s[i][j]);
		}
		printf("\n");
	}
	return 0;
}
