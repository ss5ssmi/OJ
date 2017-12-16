#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b) {
	return b==0?a:gcd(b,a%b);
}
int main() {
	int n,t[26]= {0},maxx=0,flag=0;
	char s[1000];
	scanf("%d",&n);
	scanf("%s",s);
	if(n==1) {
		printf("%s\n",s);
	} else {
		for(int i=0; i<strlen(s); i++) {
			t[s[i]-'a']++;
		}
		for(int i=0; i<26; i++) {
			if(t[i]%n!=0) {
				printf("-1\n");
				return 0;
			}
		}
		int tmp=0;
		for(int i=0; i<26; i++) {
			if(t[i]) tmp=gcd(tmp,t[i]);
		}
		int m=tmp;
		while(m--) {
			for(int i=0; i<26; i++) {
				if(t[i]>0) {
					int ttmp=t[i]/tmp;
					for(int j=0; j<ttmp; j++) {
						printf("%c",i+'a');
					}
				}
			}
		}
		printf("\n");

	}
	return 0;
}
