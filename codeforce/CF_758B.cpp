#include<bits/stdc++.h>
using namespace std;
int main() {
	char s[100],t[4];
	int kr=0,kb=0,ky=0,kg=0,sum=0;
	scanf("%s",s);
	int l=strlen(s);
	for(int i=0;i<l;i++){
		sum+=(s[i]=='!'?1:0);
	}
	for(int j=0; j<l; j+=4) {
		for(int i=j; (i%4)<4 && i<l; i++) {
			if(t[i%4]!=s[i] && s[i]!='!') {
				t[i%4]=s[i];
			}
		}
	}
	for(int j=0; j<l; j+=4) {
		for(int i=j; (i%4)<4 && i<l; i++) {
			if(s[i]!=t[i%4]) {
				if(t[i%4]=='R' && sum){	kr++; sum--;}
				if(t[i%4]=='B' && sum){	kb++; sum--;}
				if(t[i%4]=='Y' && sum){	ky++; sum--;}
				if(t[i%4]=='G' && sum){	kg++; sum--;}
			}
		}
	}
	printf("%d %d %d %d\n",kr,kb,ky,kg);
	return 0;
}
