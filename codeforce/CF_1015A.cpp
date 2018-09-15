#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,m,s[101]={0};
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int l,r;
		cin>>l>>r;
		for(int j=l;j<=r;j++){
			s[j]=1;
		}
	}
	int cnt=0;
	for(int i=1;i<=m;i++){
		cnt+=s[i]?0:1;
	}
	printf("%d\n",cnt);
	for(int i=1;i<=m;i++){
		if(!s[i]){
			printf("%d",i);
			printf("%c",i==m?'\n':' ');
		}
	}
	return 0;
}
