#include<bits/stdc++.h>
using namespace std;
int main() {
	string k1,k2,s;
	map<char,char> key;
	cin>>k1>>k2>>s;
	for(int i=0;i<26;i++){
		key[k1[i]]=k2[i];
	}
	for(int i=0;i<s.size();i++){
		if(s[i]<='z' && s[i]>='a'){
			printf("%c",key[s[i]]);
		}else if(s[i]<='Z' && s[i]>='A'){
			printf("%c",key[s[i]+32]-32);
		}else{
			printf("%c",s[i]);
		}
	}
	return 0;
}
