#include<bits/stdc++.h>
using namespace std;
int n,sum=0;
char s[100][100];
void bfs(int a,int b) {
	for(int i=b+1; i<n; i++) {
		if(s[a][i]=='C') sum++;
	}
	for(int i=a+1; i<n; i++) {
		if(s[i][b]=='C') sum++;
	}
}
int main() {
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		scanf("%s",&s[i]);
	}
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			if(s[i][j]=='C') bfs(i,j);
		}
	}
	printf("%d\n",sum);
	return 0;
}
