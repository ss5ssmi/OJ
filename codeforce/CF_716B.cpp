#include<bits/stdc++.h>
using namespace std;
string check(string a){
	int t[26]={0};
	for(int i=0;i<a.size();i++){
		if(a[i]!='?') t[a[i]-'A']=1;
	}
	for(int i=0;i<26;i++){
		for(int j=0;j<a.size();j++){
			if(a[j]=='?' && !t[i]){
				a[j]='A'+i;
				t[i]=1;
			}
		}
	}
	return a;
}
int main() {
	string s;
	cin>>s;
	if(s.size()<26){
		printf("-1\n");
		return 0;
	}
	for(int i=0;i<=s.size()-26;i++){
		string tmp;
		int t=0;
		set<char> tset;
		for(int j=0;j<26;j++){
			tmp+=s[i+j];
			if(s[i+j]!='?') tset.insert(s[i+j]);
			else t++;
		}
		if(tset.size()+t==26){
			tmp=check(tmp);
			for(int k=0;k<i;k++){
				printf("%c",s[k]=='?'?'A':s[k]);
			}
			cout<<tmp;
			for(int k=i+26;k<s.size();k++){
				printf("%c",s[k]=='?'?'A':s[k]);
			}
			return 0;
		}
	}
	printf("-1\n");
	return 0;
}
