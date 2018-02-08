#include<bits/stdc++.h>
using namespace std;
int ans=0,mov[4][2]= {0,1,0,-1,1,0,-1,0},d[5],sx,sy,ex,ey,len,n,m;
char mp[55][55],s[100];
void dfs() {
	int x=sx,y=sy;
	for(int i=0; i<len; i++) {
		x+=mov[d[s[i]-'0']][0],y+=mov[d[s[i]-'0']][1];
		if(x<0 || x>=n || y<0 || y>=m || mp[x][y]=='#') {return ;}
		if(x==ex && y==ey) {ans++;return ;}
	}
}
int main() {
	cin>>n>>m;
	for(int i=0; i<n; i++) {
		scanf("%s",mp[i]);
		for(int j=0; j<m; j++) {
			if(mp[i][j]=='S') {sx=i,sy=j;}
			if(mp[i][j]=='E') {ex=i,ey=j;}
		}
	}
	scanf("%s",s);
	len=strlen(s);
	for(int i=0; i<4; i++) {
		for(int j=0; j<4; j++) {
			if(i==j) continue;
			for(int k=0; k<4; k++) {
				if(k==i || k==j) continue;
				for(int l=0; l<4; l++) {
					if(l==i || l==j || l==k) continue;
					d[i]=0,d[j]=1,d[k]=2,d[l]=3;
					dfs();
				} 
			}
		}
	}
	cout<<ans;
	return 0;
}
