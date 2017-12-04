#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[100000];
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		scanf("%d",&s[i]);
	}
	int hmax=s[n-1];
	s[n-1]=0;
	for(int i=n-2; i>=0; i--) {
		int tmp=hmax+1-s[i];
		hmax=max(hmax,s[i]);
		s[i]=tmp<0?0:tmp;
	}
	for(int i=0; i<n; i++) {
		printf("%d%c",s[i],i<n?' ':'\n');
	}
	return 0;
}
