#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	int c[26]={0};
	cin>>s;
	for(int i=0; i<s.size(); i++) {
		c[s[i]-'a']++;
	}
	int cnt=0;
	for(int i=0;i<26;i++){
		if(c[i] && c[i]%2!=0) cnt++;
	}
	if(cnt%2!=0) printf("First\n");
	else printf("Second\n");
	return 0;
}
