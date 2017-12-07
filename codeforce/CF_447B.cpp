#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	int l,k,w[26],ans=0,maxx=-1;
	cin>>s>>k;
	l=s.size();
	for(int i=0;i<26;i++){
		cin>>w[i];
		maxx=max(maxx,w[i]);
	}
	for(int i=0;i<l;i++){
		ans+=w[s[i]-'a']*(i+1);
	}
	for(int i=l+1;i<=l+k;i++){
		ans+=(i*maxx);
	}
	printf("%d\n",ans);
	return 0;
}
