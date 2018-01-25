#include<bits/stdc++.h>
using namespace std;
char s[505][505];
int vis[505][505]={0};
int mov[4][2]={0,1,0,-1,1,0,-1,0};
int n,m,k,t=0;
void dfs(int r,int c){
	if(!t) return ;
	t--;
	vis[r][c]=1;
	for(int i=0;i<4;i++){
		int ti=r+mov[i][0];
		int tj=c+mov[i][1];
		if(ti>=0 && ti<n && tj>=0 && tj<m && !vis[ti][tj] && s[ti][tj]=='.'){
			dfs(ti,tj);
		}
	}
}
int main() {
	scanf("%d%d%d\n",&n,&m,&k);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%c",&s[i][j]);
			if(s[i][j]=='.'){
				t++;
			}
		}
		getchar();
	}
	t-=k;
	int flag=1;
	for(int i=0;i<n && flag;i++){
		for(int j=0;j<m && flag;j++){
			if(s[i][j]=='.') {
				dfs(i,j);
				flag=0;
			} 
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(s[i][j]=='.' && !vis[i][j]) {
				printf("X");
			} else{
				printf("%c",s[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}
