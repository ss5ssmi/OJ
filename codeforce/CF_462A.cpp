#include<bits/stdc++.h>
using namespace std;
int main() {
	char s[100][100];
	int n,tmp,m[2][4]= {1,-1,0,0,0,0,1,-1};
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		scanf("%s",&s[i]);
	}
	int flag=0;
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			tmp=0;
			for(int k=0; k<4; k++) {
				int x=i+m[0][k],y=j+m[1][k];
				if(s[x][y]=='o' && x<n && x>=0 && y<n && y>=0) {
					tmp++;
				}
			}
			if(tmp%2==1) {
				flag=1;
				break;
			}
		}
		if(flag) break;
	}
	printf("%s\n",flag?"NO":"YES");
	return 0;
}
