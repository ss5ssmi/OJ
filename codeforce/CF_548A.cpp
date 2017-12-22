#include<bits/stdc++.h>
using namespace std;
int main() {
	char s[1000];
	int n,flag=0;
	scanf("%s",s);
	scanf("%d",&n);
	int l=strlen(s),t=l/n;
	if(l%n) {
		printf("NO\n");
		return 0;
	}
	for(int i=0; i<l; i+=t ) {
		for(int j=i,k=i+t-1; j<k; j++,k--) {
			if(s[j]!=s[k]) {
				flag=1;
				break;
			}
		}
		if(flag) break;
	}
	printf("%s\n",flag?"NO":"YES");
	return 0;
}
