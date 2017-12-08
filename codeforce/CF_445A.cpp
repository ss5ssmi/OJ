#include<bits/stdc++.h>
using namespace std;
int main() {
	char s[100][100];
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0; i<n; i++) {
		cin>>s[i];
	}
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			if(s[i][j]=='.') {
				if(i%2==0) {
					if(j%2==0) {
						s[i][j]='B';
					} else {
						s[i][j]='W';
					}
				} else {
					if(j%2==0) {
						s[i][j]='W';
					} else {
						s[i][j]='B';
					}
				}
			}
		}
	}
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			printf("%c",s[i][j]);
		}
		printf("\n");
	}
	return 0;
}
