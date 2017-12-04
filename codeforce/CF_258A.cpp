#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	int flag=0;
	cin>>s;
	int l=s.size();
	for(int i=0; i<l; i++) {
		if(s[i]=='0') {
			s[i]='#';
			flag=1;
			break;
		}
	}
	if(!flag) l--;
	for(int i=0; i<l; i++) {
		if(s[i]!='#')
			cout<<s[i];
	}
	printf("\n");
	return 0;
}
