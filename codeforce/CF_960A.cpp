#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	int a=0,b=0,c=0,i,beg,end;
	for(i=0; i<s.length(); i++) {
		if(s[i]=='b') {
			beg=i;
			break;
		}
	}
	for(i=s.length(); i>=0; i--) {
		if(s[i]=='b') {
			end=i;
			break;
		}
	}
	for(i=0; i<beg; i++) {
		if(s[i]!='a') {
			printf("NO\n");
			return 0;
		}
	}
	for(i=beg; i<=end; i++) {
		if(s[i]!='b') {
			printf("NO\n");
			return 0;
		}
	}
	for(i=end+1; i<s.length(); i++) {
		if(s[i]!='c') {
			printf("NO\n");
			return 0;
		}
	}
	for(i=0; i<s.length(); i++) {
		if(s[i]!='a') break;
		a++;
	}
	for(i; i<s.length(); i++) {
		if(s[i]!='b') break;
		b++;
	}
	for(i; i<s.length(); i++) {
		if(s[i]!='c') break;
		c++;
	}
	if((a==c || b==c) && a && b && c) printf("YES\n");
	else printf("NO\n");
	return 0;
}
