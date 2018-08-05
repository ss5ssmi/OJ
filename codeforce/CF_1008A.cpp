#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]!='n' && s[i]!='a' && s[i]!='e' && s[i]!='u' && s[i]!='i' && s[i]!='o' && s[i+1]!='a' && s[i+1]!='e' && s[i+1]!='u' && s[i+1]!='i' && s[i+1]!='o'){
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
} 
