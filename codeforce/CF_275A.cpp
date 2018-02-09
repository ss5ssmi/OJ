#include<bits/stdc++.h>
using namespace std;
int mp[5][5],mov[4][2]= {0,1,0,-1,1,0,-1,0};
void press(int x,int y,int t) {
	if(t%2!=0) mp[x][y]=!mp[x][y];
	for(int i=0; i<4; i++) {
		int tx=x+mov[i][0],ty=y+mov[i][1];
		if(t%2!=0) mp[tx][ty]=!mp[tx][ty];
	}
}
int main() {
	int t;
	for(int i=1; i<=3; i++) {
		for(int j=1; j<=3; j++) {
			mp[i][j]=1;
		}
	}
	for(int i=1; i<=3; i++) {
		for(int j=1; j<=3; j++) {
			cin>>t;
			press(i,j,t);
		}
	}
	for(int i=1; i<=3; i++) {
		for(int j=1; j<=3; j++) {
			printf("%d",mp[i][j]);
		}
		printf("\n");
	}
	return 0;
}
