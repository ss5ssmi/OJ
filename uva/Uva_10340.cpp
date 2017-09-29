#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
char s[100005];
char t[100005];
int main()
{
	while(cin>>s>>t) {
		int ls=strlen(s);
		int lt=strlen(t);
		if(ls>lt) {
			printf("No\n");
			continue;
		}
		int i=0,j=0;
		for(; i<ls;) {
			for(; j<lt; j++) {
				if(s[i]==t[j]) {
					i++;
				}
				if(j>=lt-1){
					goto end;
				}
			}
		}
		end:
		if(i==ls) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
