#include<bits/stdc++.h>
using namespace std;
int main() {
	char s[100];
	scanf("%s",s);
	int len=strlen(s),ans=0;
	for(int i=0; i<len; i++) {
		if(s[i]=='Q') {
			for(int j=i+1; j<len; j++) {
				if(s[j]=='A') {
					for(int k=j+1; k<len; k++) {
						if(s[k]=='Q') {
							ans++;
						}
					}
				}
			}
		}
	}
	printf("%d\n",ans++);
	return 0;
}
