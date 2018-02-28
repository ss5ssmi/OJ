#include<bits/stdc++.h>
using namespace std;
int n,m,k,s[1010][1010]= {0},x[100000],y[100000];
bool check(int x,int y) {
	if(s[x][y]==1 && s[x-1][y]==1 && s[x][y-1]==1 && s[x-1][y-1]==1) {
		return 1;
	} else if(s[x][y]==1 && s[x-1][y]==1 && s[x][y+1]==1 && s[x-1][y+1]==1) {
		return 1;
	} else if(s[x][y]==1 && s[x][y+1]==1 && s[x+1][y]==1 && s[x+1][y+1]==1) {
		return 1;
	} else if(s[x][y]==1 && s[x][y-1]==1 && s[x+1][y]==1 && s[x+1][y-1]==1) {
		return 1;
	} else return 0;
}
int main() {
	cin>>n>>m>>k;
	for(int i=1; i<=k; i++) {
		cin>>x[i]>>y[i];
	}
	for(int i=1; i<=k; i++) {
		s[x[i]][y[i]]=1;
		if(check(x[i],y[i])) {
			printf("%d\n",i);
			return 0;
		}
	}
	printf("0\n");
	return 0;
}
