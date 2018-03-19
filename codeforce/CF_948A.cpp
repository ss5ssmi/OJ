#include<bits/stdc++.h>
using namespace std;
int r,c,w=0,flag=0;
int mov[4][2]= {0,1,0,-1,1,0,-1,0};
char p[510][510];
void find(int i,int j) {
	if(p[i][j]=='W') {
		w++;
		for(int k=0; k<4; k++) {
			if(p[i+mov[k][0]][j+mov[k][1]]=='S') {
				flag=1;
			}
		}
	} else if(p[i][j]=='.') {
		p[i][j]='D';
	}
}
int main() {
	cin>>r>>c;
	for(int i=0; i<r; i++) {
		cin>>p[i];
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(flag) goto end;
			find(i,j);
		}
	}
end:if(flag) printf("No\n");
	else {
		printf("Yes\n");
		for(int i=0; i<r; i++) {
			cout<<p[i]<<endl;
		}
	}
	return 0;
}
