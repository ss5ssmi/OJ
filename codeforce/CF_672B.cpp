#include<bits/stdc++.h>
using namespace std;
int main() {
	int l,s[26]={0},ans=0,tmp=0;
	char t;
	cin>>l;
	for(int i=0;i<l;i++){
		cin>>t;
		s[t-'a']++;
	}
	for(int i=0;i<26;i++){
		if(s[i]>1) ans+=s[i]-1;
		if(s[i]==0) tmp++;
	}
	printf("%d\n",ans>tmp?-1:ans);
	return 0;
}
