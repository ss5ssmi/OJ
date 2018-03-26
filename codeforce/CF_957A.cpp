#include<bits/stdc++.h>
using namespace std;
int n,flag=0;
string s;
int main() {
	cin>>n;
	cin>>s;
	for(int i=0; i<n; i++) {
		int j,t=0;
		if(s[i]=='?') {
			for(j=i; j<n; j++) {
				if(s[j]!='?') break;
				else t++;
			}
			
			if((t==2 || i-1<0 || j>=n) || (t==1 && s[i-1]==s[j]) ){
				flag=1;
			}
		} else {
			if(s[i]==s[i-1] || s[i]==s[i+1]){
				printf("No\n");
				return 0;
			}
		}
	}
	if(flag) printf("Yes\n");
	else printf("No\n");
	return 0;
}
