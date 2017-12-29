#include<bits/stdc++.h>
using namespace std;
int main() {
	int s[200010],n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++) {
		scanf("%d",&s[i]);
	}
	for(int i=1; i<=(n+1)/2; i++) {
//		reverse(s+i,s+n-i+2);
		if(i%2!=0){
			int t=s[i];
			s[i]=s[n-i+1];
			s[n-i+1]=t;
		}
	}
	for(int i=1; i<=n; i++) {
		printf("%d",s[i]);
		printf("%c",i==n?'\n':' ');
	}
	return 0;
}
