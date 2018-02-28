#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,k,s[100010];
	cin>>n>>k;
	if(n==k+1) {
		for(int i=n; i>=1; i--) {
			printf("%d",i);
			printf("%c",i==1?'\n':' ');
		}
	} else {
		int maxt=n,t=n-k;
		while(k--){
			printf("%d ",maxt--);
		}
		for(int i=1; i<=t; i++) {
			printf("%d",i);
			printf("%c",i==n?'\n':' ');
		}
	}
	return 0;
}
