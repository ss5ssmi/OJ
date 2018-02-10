#include<bits/stdc++.h>
using namespace std;
char s[100010];
int main() {
	cin>>s;
	int l=strlen(s),i=0;
	if(l==1) {
		if(s[0]!='a')printf("%c\n",s[0]-1);
		else printf("z\n");
		return 0;
	}
	for(; i<l; i++) {
		if(s[i]!='a') break;
	}
	int flag=0;
	for(; i<l; i++) {
		if(s[i]!='a') {
			flag=1;
			s[i]-=1;
		} else break;
	}
	if(!flag){
		if(s[l-1]!='a') s[l-1]-=1;
		else s[l-1]='z';
	}
	cout<<s<<endl;
	return 0;
}
