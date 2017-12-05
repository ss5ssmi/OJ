#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,k,g,t;
	char s[100];
	scanf("%d%d",&n,&k);
	scanf("%s",s);
	for(int i=0; i<n; i++) {
		if(s[i]=='G') g=i;
		if(s[i]=='T') t=i;
	}
	if(abs(g-t)%k!=0) {
		printf("NO\n");
		return 0;
	}
	int flag=0;
	for(int i=min(g,t); i<=max(g,t); i+=k) {
		if(s[i]=='#') {
			printf("NO\n");
			break;
		} else if(s[i]=='G' || s[i]=='T') {
			if(!flag) {
				flag=1;
				continue;
			}
			if(flag) {
				printf("YES\n");
				break;
			}
		}
	}
	return 0;
}
