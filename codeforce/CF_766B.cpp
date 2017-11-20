#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[100000];
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		scanf("%d",&s[i]);
	}
	sort(s,s+n);
	for(int i=n-1; i>=2; i--) {
		int a=s[i],b=s[i-1],c=s[i-2];
		if(a+b>c && a+c>b && b+c>a) {
			printf("YES\n");
			return 0;
		}
	}
	printf("NO\n");
	return 0;
}
